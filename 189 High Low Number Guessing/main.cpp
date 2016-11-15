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
    //Seed random number with the current time
    srand((int) std::time(0));
    int rand = (std::rand() % 100) + 1;
    int guess = -1;
    int guesses = 0;
    while(guess != rand) {
        std::cout << "Enter a guess between 1-100: ";
        std::cin >> guess;
        guesses++;
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
