/******************************************************************************
    C++ Program: Collect and Display Favourite Foods
    -------------------------------------------------
    This program asks the user to enter their favorite foods and stores them
    in a vector. The user can enter up to 10 foods or stop early by typing 'q'.
    Once done, the program displays all the foods entered.
*******************************************************************************/

#include <iostream>   // Required for input (std::cin) and output (std::cout)
#include <string>     // Required for std::string and std::getline()
#include <vector>     // Required for std::vector container

int main() {
    // -------------------------------
    // Step 1: Declare the data storage
    // -------------------------------
    // A vector is a dynamic array that can hold strings.
    // Here, we predefine the size as 10 because we want to allow up to 10 foods.
    std::vector<std::string> foods(10);

    // We can store the size of the vector in a separate variable for convenience
    int maxFoods = foods.size();

    // Temporary string to store each food input from the user
    std::string temp;

    // -------------------------------
    // Step 2: Input Section
    // -------------------------------
    std::cout << "Welcome! Let's record your favorite foods.\n";
    std::cout << "You can enter up to " << maxFoods << " foods.\n";
    std::cout << "Type 'q' to stop entering foods at any time.\n\n";

    // Loop through the vector slots to collect foods
    for (int i = 0; i < maxFoods; i++) {
        // Prompt the user for input
        std::cout << "Enter food #" << (i + 1) << ": ";
        std::getline(std::cin, temp);  // Reads the whole line, allowing spaces

        // Check if the user wants to quit early
        if (temp == "q" || temp == "Q") {
            // Stop the loop if 'q' is entered
            break;
        }

        // Otherwise, store the entered food in the current slot
        foods[i] = temp;
    }

    // -------------------------------
    // Step 3: Output Section
    // -------------------------------
    std::cout << "\nYou like the following foods:\n";

    // Loop through the vector and print only the foods that were entered
    for (const std::string &food : foods) {
        // Check if the current slot is not empty
        if (!food.empty()) {
            std::cout << "- " << food << "\n";
        }
    }

    // -------------------------------
    // Step 4: End of Program
    // -------------------------------
    std::cout << "\nThank you for sharing your favorite foods!\n";

    return 0;  // Standard way to indicate that the program ended successfully
}
