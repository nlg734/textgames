#include <iostream>
#include <limits>
#include "rps.cpp"

int main() {

    int pick = -1;

    while(pick != 0) {
        std::cout << "Please pick a game, or exit:" << std::endl;
        std::cout << "1. Rock, paper, scissors" << std::endl;
        std::cout << "2. Guess the number" << std::endl;
        std::cout << "3. Text adventure" << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cin >> pick;

        if (pick == 1) {
            rps_main();
        } else if (pick == 2) {
            std::cout << "This is currently not implemented. Pick again." << std::endl;
        } else if (pick == 3) {
            std::cout << "This is currently not implemented. Pick again." << std::endl;
        } else if (pick == 4) {
            break;
        } else {
            std::cout << "Please enter a number 1-4" << std::endl;
            pick = -1;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    std::cout << "Goodbye." << std::endl;

    return 0;
}
