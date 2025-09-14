#include <iostream>

int main(){
    char name[]{"What's your name? "};
    std::cout << name;
    std::cin >> name;
    std::cout << "Hello " << name << "." << std::endl; // not efficient, flushes buffer.
    std::cout << "My name is Navid.\n"; // more efficient, '\n' does not flush the output.
    int x{-1};
    std::cout << "How old are you? ";
    std::cin >> x;
    std::cout << "You are " << x << " years old, cool!\nI'm 18.\n";
    std:: cout << "Enter two numbers. Press enter after each number or enter them with space between them.\n";
    int y{-1};
    std::cin >> x >> y;
    std::cout << "sum: " << x << " + " << y << " = " << x+y << "\n";
    return 0; 
}