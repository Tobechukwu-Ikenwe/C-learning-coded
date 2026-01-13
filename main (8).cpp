#include <iostream>  // lets us use std::cout and other input/output tools



int main()
{
    // Create a Stove object named 'stove' and start it at 0 degrees
    Stove stove(0);

    // Try to set the stove temperature to a very high number
    // The setter function will automatically limit it to 10
    stove.setTemperature(100000);

    // Print the final (safe) temperature to the screen
    std::cout << "The stove temperature is: " << stove.getTemperature() << "\n";

    return 0; // end of program
}

