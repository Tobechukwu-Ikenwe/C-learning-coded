#include <iostream>  // lets us use std::cout and other input/output tools

// Create a class called Stove
// The class will control and protect access to its 'temperature' value
class Stove {
private:
    // Private means this variable CANNOT be accessed directly outside the class.
    // It keeps the data safe from unwanted changes.
    int temperature = 0;

public:
    // Constructor — runs when a new Stove object is created.
    // The parameter 'temperature' lets you start the stove at a specific value.
    Stove(int temperature) {
        this->temperature = temperature;  // use 'this->' to set the private variable
    }

    // Getter function — allows you to READ the stove's temperature safely
    int getTemperature() {
        return temperature;
    }

    // Setter function — allows you to CHANGE (write) the temperature safely
    void setTemperature(int temperature) {

        // If the temperature is below 0, we’ll just set it to 0 (no negative heat)
        if (temperature < 0) {
            this->temperature = 0;
        }
        // If the temperature is above or equal to 10, we’ll limit it to 10
        else if (temperature >= 10) {
            this->temperature = 10;
        }
        // Otherwise, set it to the given value
        else {
            this->temperature = temperature;
        }
    }
};

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
