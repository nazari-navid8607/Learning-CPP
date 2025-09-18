// how to get a random number

/*

To generate random numbers in C++, you need two things:

1. Random Engine
    Works like a dice machine.
    Produces raw random numbers.
    Example: std::mt19937.

2. Distribution
    Maps the raw random numbers into a specific range.
    Types:
        std::uniform_int_distribution → integers (e.g., 10–20).
        std::uniform_real_distribution → floating-point numbers (e.g., 0.5–2.5)
*/

#include <iostream>
#include <random>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());

    int min{0};
    int max{20};

    int random_number{-1};
    std::uniform_int_distribution<> distrib(min, max);
    random_number = distrib(gen);
    std::cout << random_number << std::endl;

    return 0;
}