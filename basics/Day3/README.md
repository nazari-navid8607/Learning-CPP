# I think the method I was using to learn C++ was not the best

When I first started, I spent a lot of time writing documents and READMEs about what I had learned each day, how things worked, and explaining concepts I had just studied. This took too much time and stopped me from focusing on my main goal: actually learning the C++ language.

From now on, I want to take a different approach. First, I’ll study according to the plan I’ve set for myself. Then, I’ll write a few practice programs to apply what I’ve learned. I’ll also write a short note about what I studied that day, which parts I used in my programs, and any new ideas that came to mind.

Because my main goal here isn’t teaching C++ or writing documentation; My main goal in this repository is to learn the language, write code, and practice.

## What I learned today

- I learned how to create strings in both the traditional c way `char arr[]{"value"};`(which I already know) and the new modern C++ way `std::string name{"initialization value"};`, which requiers `#include <string>`.

- I learned how to create a file and write to it. I thought: *can I make a program which asks for a user's name and email and saves them into a database?* So I created [Email_Saver_Program](EmailSaverProgram/) directory and wrote`SaveUserInfo.cpp`, which saves info into `info.csv`.

- I discovered a trick. in c++ we can store different values under the same variable name by using namespaces. [my code](NamespacePractice/namespace_practice.cpp)

I also wanted to get more familiar with functions in C++. To practice, I made a classic ([guess the number](GuessTheNumber/GuessTheNumberGame/GuessTheNumber.cc)) game. I got familiar with how to get random numbers, how to use sleep method and how to make loops in C++ thanks to that program. I also made an [app](MatrixGenerator/MatrixGenerator.cpp) that makes matric using for-loops.
