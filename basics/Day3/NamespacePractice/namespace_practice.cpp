#include <iostream>


// we can have different values in variables with same name, thanks to namespaces

namespace first_person{
    std::string name {"Ali"};
    int age {39};
}
namespace second_person
{
    std::string name {"Jack"};
    int age {48};
}

int main()
{
    std::string name {"Navid"};
    int age {18};
    std::cout << name << " is " << age << " years old.\n";
    std::cout << first_person::name << " is " << first_person::age << " years old.\n";
    std::cout << second_person::name << " is " << second_person::age << " years old.\n";
}

// This is a way, but it's not acceptable for what I used it for. It's better to have a database for this program!
