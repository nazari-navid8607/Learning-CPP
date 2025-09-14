# What I learned today

## iostream

The input/output library (io library) is part of the C++ standard library that deals with basic input and output.The io part of iostream stands for input/output. To use iostream library, we need to include it (mostly) in the first of code (I learnt preprocessor directive yesterday).

```cpp
#include <iostream>
```

The iostream library contains a few predefined variables for us to use.

1. `std::cout`: sends data to the console to be printed as text. cout => character out
2. `std::cin`: receives data from console. cin => character in
3. `std::endl`: to output a new line. endl => end line (It works like "\n")

- We use insertion operators `<<` or extraction operator`>>` to print data to console or get data from it. To print more than one thing on the same line, the insertion operator (<<) can be used multiple times in a single statement to concatenate (link together) multiple pieces of output.

```cpp
#include <iostream>
int main(){
    char name[]{"What's your name? "};
    std::cout << name;
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;
    
}
```

notes:

- `std::cout` is [buffered](https://en.wikipedia.org/wiki/Data_buffer): Output is typically not sent to the console immediately. Instead, the requested output **gets in line**, and is stored in a region of memory set aside to collect such requests (called a buffer). Periodically, the buffer is flushed, meaning all of the data collected in the buffer is transferred to its destination (console in this case)
- using `"\n"` is more efficient than `std::endl`. `"\n"` inserts a newline without flushing the output buffer, while `std::endl` inserts a newline and flushes the buffer."
- it's possible to give more than one data from console in just one line code using `std::cin >> x >> y ...`
- `std::cin` is buffered too!
- how `std::cin` works step by step:

1. Whitespace skipped: Leading spaces, tabs, and newlines are ignored before reading starts.
2. Data pulled: Characters are read until an invalid one or a newline shows up.
3. Converted & stored: The input is cast to the variable’s type and saved.
4. On error: If conversion fails (like typing a letter instead of a number), the variable gets zero and `std::cin` enters a fail state.
If you enter a float value (like 3.14) into a variable of type int using `std::cin`, only the integer part is stored. So:

```cpp
int x;
std::cin >> x;
```

If the user types 3.14, then x will be assigned 3. The .14 is discarded. But there is a catch:

```cpp
int x;
int y;
std::cin >> x >> y;
```

In this case, if you enter 3.14, x will ba assigned 3, but y is int again but this is what it gets: `.14`  
In this case, y will be 0.

## uninitialized variables and undefined behavior

Unlike some programming languages, C/C++ does not automatically initialize most variables to a given value (such as zero). When a variable that is not initialized is given a memory address to use to store data, the default value of that variable is whatever (garbage) value happens to already be in that memory address! A variable that has not been given a known value (through initialization or assignment) is called an uninitialized variable.

```cpp
int a{1}; // initialized variable, value is 1
int b; // uninitialized variable, value is named garbage value!
```

Undefined behavior (often abbreviated UB) is the result of executing code whose behavior is not well-defined by the C++ language. In this case, the C++ language doesn’t have any rules determining what happens if you use the value of a variable that has not been given a known value. Using the value from an uninitialized variable is an example of undefined behavior  
for example, in my code [practice.cpp](practice.cpp) if you enter a letter when it asks for your age, it will behave unexpectedly.

**I decided to take notes of situations which can cause undefined behavior [here](../unexpected_behavior_cases/Unexpected_behavior_cases.md)**

## Implementation-defined behavior and unspecified behavior

A specific compiler and the associated standard library it comes with are called an implementation (as these are what actually implements the C++ language). In some cases, the C++ language standard allows the implementation to determine how some aspect of the language will behave, so that the compiler can choose a behavior that is efficient for a given platform. Behavior that is defined by the implementation is called implementation-defined behavior. It must be documented and consistent for a given implementation. Unspecified behavior is almost identical to implementation-defined behavior in that the behavior is left up to the implementation to define, but the implementation is not required to document the behavior.
