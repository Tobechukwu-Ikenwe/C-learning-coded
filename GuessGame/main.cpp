#include <iostream>
#include <ctime>   
#include <cstdlib> // Required for rand() and srand()
#include <limits>  // Required for numeric_limits to clear buffer

int main() {
    int player_choice, player_tries = 0, number_p, computer_p, tries = 0;

    // 1. Input Validation Loop 
    do {
        std::cout << "Which mode would you prefer?\n1. Unlimited tries\n2. Limited tries\nChoice: ";
        if (!(std::cin >> player_choice) || (player_choice != 1 && player_choice != 2)) {
            std::cout << "Invalid. Enter 1 or 2.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else break;
    } while (true);

    // 2. Setting Mode (Using a branch, but only once at setup)
    if (player_choice == 2) {
        std::cout << "How many tries would you like? ";
        std::cin >> player_tries;
    } else {
        player_tries = 1000000; // Large number acting as "infinite" for simplicity
    }

    srand(static_cast<unsigned int>(time(0)));
    computer_p = rand() % 100 + 1;

    std::cout << "\n--- Guess the Number Game ---\n";
    
    // 3. The Main Game Loop (Reduced branching)
    do {
        std::cout << "Guesses left: " << (player_choice == 2 ? std::to_string(player_tries - tries) : "Infinity") << "\n";
        std::cout << "Enter guess (1-100): ";
        std::cin >> number_p;
        tries++;

        // Branchless tip: Using ternary operators often maps to CMOV (Conditional Move) 
        // in 2026 CPUs, which is faster than traditional if/else branches.
        std::string feedback = (number_p > computer_p) ? "Too high!\n" : "Too low!\n";
        if (number_p != computer_p) std::cout << feedback;

    } while (number_p != computer_p && tries < player_tries);

    // Final game stats
    if (number_p == computer_p) {
        std::cout << "Correct! You won in " << tries << " tries.\n";
    } else {
        std::cout << "Game Over! The number was " << computer_p << ".\n";
    }

    return 0;
}
