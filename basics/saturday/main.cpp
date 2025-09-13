// what i learned
#include <iostream>

int main()
{
    int a = 32;
    [[maybe_unused]] double pi{3.1415926535};
    short b(32);
    long c{32};
    char d{'&'};
    char msg[]{"Enter your name: "}; // I'm not doing a great job in this part, I'm new to this. Learn more tomorrow maybe!
    std::cout << a << ":int /" << b << ":short /" << c << ":long /" << d << ":char\n";
    std::cout << msg;
    std::cin >> msg;

    std::cout << "Hello " << msg << "\n";
}
