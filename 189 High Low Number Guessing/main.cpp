//
//  main.cpp
//  189 High Low Number Guessing
//
//  Created by Greg Salvesen on 11/15/16.
//  Copyright © 2016 DVS. All rights reserved.
//

#include <cstdlib>
#include <iostream>
#include <ctime>

int main(int argc, const char * argv[]) {
    // Seed random number with the current time
    srand((int) std::time(0));
    // Generate random number between 1 and 100
    int rand = (std::rand() % 100) + 1;
    // Initialize current guess, and the number of guesses
    int guess = -1;
    int guesses = 0;
    while(guess != rand) {
        std::cout << "Enter a guess between 1-100: ";
        // Asks the player to input their guess
        std::cin >> guess;
        guesses++;
        // Checks whether the guess is higher, lower or equal to the number, and generates the appropriate response
        if(guess > rand) {
            std::cout << "That guess is too high!" << std::endl;
        } else if(guess < rand) {
            std::cout << "That guess is too low!" << std::endl;
        } else {
            std::cout << "Congratulations! You guessed " << rand << " correctly in " << guesses << " guesses." << std::endl;
        }
    }
    return 0;
}
