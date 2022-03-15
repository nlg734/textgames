//
// Created by Natasha on 2022-03-10.
//

#include "rps.h"
#include <iostream>
#include <limits>

// Number of wins
int wins = 0;

// Number of losses
int losses = 0;

// Number of draws
int draws = 0;

// Main function
int rps_main()
{

    int choice = -1;

    while(choice != 3) {
        std::cout << "Pick 1-3:" << std::endl;
        std::cout << "1. Play game" << std::endl;
        std::cout << "2. Print score" << std::endl;
        std::cout << "3. Return to Main Menu" << std::endl;

        std::cin >> choice;

        if (choice == 1) {
            rps_game();
        } else if (choice == 2) {
            rps_score();
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

// Plays a game of rock paper scissors between the player and computer
int rps_game() {
    int comp = rand() % 3 + 1;

    std::cout << "Pick your hand:" << std::endl;
    std::cout << "1. Rock" << std::endl;
    std::cout << "2. Paper" << std::endl;
    std::cout << "3. Scissors" << std::endl;

    int player = -1;

    std::cin >> player;

    if (player == 1) {
        if (comp == 1) {
            std::cout << "It's a Draw!" << std::endl;
            draws++;
        } else if (comp == 2) {
            std::cout << "It's a Loss!" << std::endl;
            losses++;
        } else if (comp == 3) {
            std::cout << "It's a Win!" << std::endl;
            wins++;
        }
    } else if (player == 2) {
        if (comp == 1) {
            std::cout << "It's a Win!" << std::endl;
            wins++;
        } else if (comp == 2) {
            std::cout << "It's a Draw!" << std::endl;
            draws++;
        } else if (comp == 3) {
            std::cout << "It's a Loss!" << std::endl;
            losses++;
        }
    } else if (player == 3) {
        if (comp == 1) {
            std::cout << "It's a Loss!" << std::endl;
            losses++;
        } else if (comp == 2) {
            std::cout << "It's a Win!" << std::endl;
            wins++;
        } else if (comp == 3) {
            std::cout << "It's a Draw!" << std::endl;
            draws++;
        }
    } else {
        std::cout << "Please enter a number 1-3" << std::endl;
        player = -1;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}


// Prints the score for the current game
int rps_score()
{
    std::cout << "The score is:" << std::endl;
    std::cout << "Wins: " << wins << "\tLosses: " << losses << "\tDraws: " << draws << std::endl;

    return 0;
}