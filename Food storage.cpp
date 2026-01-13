/******************************************************************************
    Write a C++ program that collects the favourite foods of a user using a vector
    and displays it when done.
*******************************************************************************/

#include <iostream>   // Needed for input/output
#include <string>     // Needed for std::string and std::getline
#include <vector>     // Needed for std::vector and size()

int main()
{
    // Declare an array of 10 strings to hold up to 10 favorite foods
    std::vector<std::string>foods(10) 
    size = foods.size()

    // Temporary variable to store each user input before assigning it to the array
    std::string temp;

    // --- Input section ---
    // Ask the user to enter their favorite foods, one at a time.
    // The user can type 'q' to stop entering foods early.
    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food you like or 'q' to quit #" << i << ": ";
        std::getline(std::cin, temp);   // Reads the whole line, including spaces

        if (temp == "q") {
            // If the user enters 'q', stop asking for more foods
            break;
        } else {
            // Otherwise, store the entered food in the array
            foods[i] = temp;
        }
    }

    // --- Output section ---
    std::cout << "\nYou like the following foods:\n";

    // Loop through the array and print out only the non-empty elements
    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << "\n";
        // The condition !foods[i].empty() ensures that we stop
        // printing when we hit an unused (empty) array slot.
    }

    return 0;   // End of program
}

