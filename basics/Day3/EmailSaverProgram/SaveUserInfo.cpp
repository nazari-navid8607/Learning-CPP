// This app saves your name and email in info.csv file, which exists in this directory.

#include <iostream>
#include <fstream>
using namespace std;

int email_manager()
{
    cout << "Enter your name: ";
    string name{"yourname"};
    cin >> name;
    cout << "Enter your email: ";
    string email{"youremail@domain.com"};
    cin >> email;
    cout << "\nName: " << name << "\nEmail: " << email;
    cout << "\nInformation saved in info.csv\n";
    ofstream output_file;
    output_file.open("info.csv", ios::app);
    output_file << name << "," << email << "\n";
    output_file.close();
    return 0;
}

int main()
{
    email_manager();
    return 0;
}