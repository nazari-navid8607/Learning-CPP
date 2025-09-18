// This app generates a random 3 by 3 matrix

#include <iostream>
#include <random>

int main()
{
    std::random_device myRandomDevice;
    std::mt19937 gen(myRandomDevice());
    std::uniform_int_distribution<> distr(0, 9);

    for (int i{0}; i < 3; i++){
        std::cout << "[" << distr(myRandomDevice) << ", " <<distr(myRandomDevice) << ", " <<distr(myRandomDevice) << "]\n";
    }
    return 0;
}