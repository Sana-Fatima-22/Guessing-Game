#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Setup random number generation
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between -100 and 50
    int secretNumber = rand() % 151 - 100;  // Generates number in range [-100, 50]
    
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between -100 and 50." << endl;
    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        
        // Increment attempts count
        attempts++;
        
        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts!" << endl;
        }
        
    } while (guess != secretNumber);
    
    return 0;
}
