#include <iostream>
#include <random>
#include <thread>
#include <chrono>
using namespace std;

int randomNumberGenerator()
{
    int min{0}, max{100};
    string decision{"Y"};
    cout << "The default range is (0,100)\nDo you want to change it?\n(Y/n): ";
    cin >> decision;
    if (decision == "y" || decision == "Y" || decision == "Yes" || decision == "yes" || decision == ""){
        cout << "min: ";
        cin >> min;
        cout << "max: ";
        cin >> max;
    };
    
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<> distribution(min, max);

    int computerNumber{-1};
    computerNumber = distribution(gen);
    return computerNumber;
}

int main()
{
    cout << "This is a classic \"Guess the number\" game.\n";
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "Get ready...\n";
    this_thread::sleep_for(chrono::seconds(2));
    int rn{-1};
    rn = randomNumberGenerator();
    int userGuess{0};
    cout << "Guess a number: ";
    cin >> userGuess;

    while (userGuess != rn){
        if (userGuess > rn){
            cout << "\nTry smaller: ";
            cin >> userGuess;
        }
        else{
            cout << "\nTry bigger: ";
            cin >> userGuess;
        }
    }
    if (userGuess == rn){
        cout << "\nYou guessed it!\nThe number was: " << rn << endl;
    }
    return 0;
}