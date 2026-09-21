#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    
    int secretCode = rand() % 100 + 1; 
    int userGuess = 0;
    int attempts = 0;

    cout << "=========================================" << endl;
    cout << "   Welcome to the Number Guessing Game!  " << endl;
    cout << "=========================================" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;
    cout << "Can you guess what it is?\n" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretCode) {
            cout << "Too high! Try a lower number.\n" << endl;
        } 
        else if (userGuess < secretCode) {
            cout << "Too low! Try a higher number.\n" << endl;
        } 
        else {
            cout << "\n🎉 Congratulations! You guessed it right!" << endl;
            cout << "It took you " << attempts << " attempts." << endl;
        }
        
    } while (userGuess != secretCode);

    return 0;
}
