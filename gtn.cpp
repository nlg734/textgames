//
// Created by Natasha on 2022-03-17.
//

#include "gtn.h"
#include <iostream>
#include <limits>


int num_games = 0;

int num_guesses = 0;

int gtn_main()
{
    int choice = -1;

    while(choice != 3) {
        std::cout << "Pick 1-3:" << std::endl;
        std::cout << "1. Play game" << std::endl;
        std::cout << "2. Print score" << std::endl;
        std::cout << "3. Return to Main Menu" << std::endl;

        std::cin >> choice;

        if (choice == 1) {
            num_games++;
            gtn_game();
        } else if (choice == 2) {
            gtn_score();
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Please enter a number 1-3" << std::endl;
            choice = -1;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return 0;
}


int gtn_game()
{
    int guess = -1;

    int comp = rand() % 50 + 1;

    std::cout << "Guess a number between 1 and 50: " << std::endl;
    std::cin >> guess;
    num_guesses++;

    while(guess != comp)
    {
        if(guess <= 0 || guess > 50)
        {
            std::cout << "Please enter a number 1-50:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> guess;
        }
        else if(guess > comp)
        {
            std::cout << "Lower. Guess again: " << std::endl;
            std::cin >> guess;
            num_guesses++;
        }
        else if(guess < comp)
        {
            std::cout << "Higher. Guess again: " << std::endl;
            std::cin >> guess;
            num_guesses++;
        }
    }

    std::cout << "You guessed correctly!" << std::endl;
    return 0;
}


int gtn_score()
{
    if(num_games == 0)
    {
        std::cout << "You need to play a game first!" << std::endl;
        return 0;
    }
    int avg = num_guesses / num_games;

    std::cout << "Your average number of guesses per game is " << avg << "." << std::endl;
    return 0;
}