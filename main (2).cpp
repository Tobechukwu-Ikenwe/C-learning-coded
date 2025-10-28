/******************************************************************************

    Write a C++ program that takes grades for multiple students across several subjects,
    stores them in arrays, and computes useful statistics — average, highest, lowest,
    standard deviation, and a letter grade summary.

    (Note: The code below is just a sample program that collects favorite foods,
    not the grade program described above.)

*******************************************************************************/

#include <iostream>   // Needed for input/output
#include <string>     // Needed for std::string and std::getline

int main()
{
    // Declare an array of 5 strings to hold up to 5 favorite foods
    std::string foods[5];

    // Calculate the number of elements in the array
    int size = sizeof(foods) / sizeof(foods[0]);

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
