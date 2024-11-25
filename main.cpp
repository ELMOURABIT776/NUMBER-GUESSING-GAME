#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    std::srand(static_cast<unsigned int>(std::time(0)));
    int numberToGuess = std::rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    std::cout << "I have selected a number between 1 and 100. Try to guess it!" << std::endl;

    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
