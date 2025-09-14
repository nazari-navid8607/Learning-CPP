Today I tried to learn basics of C++. I tried my best to make a good summary of what I learned or reviewed today, but it is not as good as I expected. Anyways, this is what I learnt today:

# What I learned today

## 1. Translation Unit Naming

In a project, there are maybe tens or hundreds of .cpp files. This can look messy! You should name the primary source file of your project `main.cpp` to signal its role clearly. This convention helps both you and other developers quickly identify the program’s entry point.

## 2. The `main` Function

Every C++ program must define exactly one function with the signature:

```cpp
int main()
```

notes:

- The return type is int. A return value of 0 indicates success; non-zero values indicate errors.
- Since C++11, reaching the closing brace of main without a return statement implicitly returns 0.
- Omitting main function leads to a linker error: “undefined reference to main.”
- `main` must be lower case!

## 3. Preprocessor Directives

I got most of it, but not everything. I learned that a preprocessor directive begins with `#` and instructs the compiler’s preprocessor to perform tasks before compilation:

- `#include`: Textually includes a header file. It's like inserting a lot of code without actually writing it yourself. It allows you to use a library and prewritten code, so you don't have to write it again (similar to import in Python).
- `#define`: Defines macros or constants. Whenever you use a macro or constant, you are using its value.
- Conditional compilation: `#if`, `#ifdef`, `#ifndef`, `#endif`.

Example:

```cpp
#include <iostream>
#define PI 3.14
```

## 4. Input and Output Streams

To print something to the console or get input from it, it's necessary to include `#include <iostream>`

- `std::cout <<`: output stream, uses insertion operator `<<` to write values.
- `std::cin >>`: input stream, uses extraction operator `>>` to read values.

this operators can mean different thing too:

### Overloaded `<<` and `>>` operator

- bitwise left shift when left operand is an integer (result is literally a number times 2^n)

```cpp
int x = 2;      // binary: 00000010 --> 2
int y = x << 2; // binary: 00001000 --> 8
```

- bitwise right shift when right operand is an integer (result is a number divided by 2^n)

```cpp
int x = 8;       // binary: 00001000 --> 8
int y = x >> 2;  // binary: 00000010 --> 2
```

## 5. Values and Data Types

A value is a single data item. Common value categories

- integer literals: `5`, `-3`
- floating-point literals: `3.14`, `-1.11`
- character literals: `'A'`, `'&'` (single quote)
- string literals (which is a little different in C++): `"hello"` (double quote)

Fundamental Data Types

|Type                            | Size (typical) | Description                            |
| ------------------------------- | -------------- | -------------------------------------- |
| `int`                           | 4 bytes        | Integer numbers (positive or negative) |
| `short`                         | 2 bytes        | Smaller integer                        |
| `long`                          | 4–8 bytes      | Larger integer                         |
| `long long`                     | 8 bytes        | Very large integer                     |
| `unsigned int`                  | 4 bytes        | Only positive integers (0 and above)   |
| `unsigned short/long/long long` | varies         | Only positive numbers, larger range    |
| `float`                         | 4 bytes        | Single-precision decimal numbers       |
| `double`                        | 8 bytes        | Double-precision decimal numbers       |
| `long double`                   | 12–16 bytes    | Higher-precision floating point        |
| `char`                          | 1 byte         | Single character (`'a'`, `'Z'`)        |
| `bool`                          | 1 byte         | Boolean: `true` or `false`             |
| `wchar_t`                       | 2–4 bytes      | Wide character (Unicode support)       |

## 6. Variable Declaration and Definition

Declaring a variable specifies its type and name, allocating storage:

```cpp
int age;  // defines 'age' of type int
```

Multiple same-type declarations:

```cpp
int a, b, c;
```

Mixing types in one declaration is invalid, there is a way to make them in one line, but it's not recommended!

```cpp
int a, double b;  // error
int a; double b;  // no errors, but not recommended
```

## 7. Initialization Forms

### Copy Initialization

When an initial value is provided after an equals sign, this is called copy-initialization. This form of initialization was inherited from the C language.

```cpp
int devices = 200; // copy-initialization of value 200 into variable devices
```

this copies the value on the right-hand side of the equals into the variable being created on the left-hand side
Copy-initialization had fallen out of favor in modern C++ due to being less efficient than other forms of initialization for some complex types.

### Direct Initialization

When an initial value is provided inside parenthesis, this is called direct-initialization.

```cpp
int size (20); // direct-initialization of value 20 into variable size
```

Direct-initialization was initially introduced to allow for more efficient initialization of complex objects
Direct-initialization had fallen out of favor in modern C++, largely due to being superseded by direct-list-initialization.

### List Initialization

The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces. This is called list-initialization

```cpp
int width { 5 };    // direct-list-initialization of initial value 5 into variable width (preferred)
```

List-initialization was introduced to provide a initialization syntax that works in almost all cases, behaves consistently, and has an unambiguous syntax that makes it easy to tell where we’re initializing an object.
It's safer and disallows narrowing conversions:

```cpp
int a{2};
short b{a};
// compiler gives a warning according to type diffrence in a and b
// or
int a{1.2}
// compiler gives an error because 1.2 is not integer
```

## 8. `[[maybe_unused]]` Attribute

If you create a variable in your program and don't use it, you will get a warning by compiler. You can solve it in some ways:

1. You may like not to pay attention to the warning, which is not that bad, but not recommended for efficiency
2. Try to use the unused variable, good luck!
3. Remove the unused variable

but think of this situation:  
You are working on a math-physics project, it's better to have numbers like pi, gravity of earth, avogadro's number and ... and you are not sure you will use them, and you don't like seeing warnings!
there is a solution!
Suppress unused-variable warnings when a variable is intentionally unused:

```cpp
[[maybe_unused]] double pi{3.1415}
[[maybe_unused]] double gravity{9.8}
```
