//OVERLOADED CONSTRUCTORS

#include <iostream>  // lets us use std::cout to print to the screen

// Create a class called Pizza
// A class is a blueprint that describes what data (variables) and actions (functions)
// every Pizza object will have
class Pizza {
public:
    // Variables (called "members") that describe a Pizza
    std::string topping1;  // first topping (like "pepperoni")
    std::string topping2;  // second topping (like "mushrooms")

    // -------- Constructors --------
    // A constructor is a special function that runs automatically
    // when we create a Pizza object. It "builds" the object.

    // 1️⃣ Constructor for one topping
    Pizza(std::string topping1) {
        // 'this->' points to the current object being created
        // We use it to tell the computer to set the object's topping1
        // equal to the topping1 we passed in as a parameter
        this->topping1 = topping1;
    }

    // 2️⃣ Constructor for two toppings
    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;  // assign first topping
        this->topping2 = topping2;  // assign second topping
    }

    // 3️⃣ Constructor for a pizza with no toppings
    Pizza() {
        // If we don’t assign anything, the toppings stay as empty strings.
        // This one lets us make a "plain" pizza with nothing on it.
    }
};

// -------- Main function --------
int main()
{
    // Create a pizza with one topping
    Pizza pizza1("pepperoni");

    // Create a pizza with two toppings
    Pizza pizza2("cheese", "mushrooms");

    // Create a pizza with no toppings
    Pizza pizza3;  // calls the empty (no-argument) constructor

    // Print the first topping of pizza3
    // Since pizza3 has no toppings, this will print a blank line
    std::cout << pizza3.topping1 << "\n";

    return 0;  // end of program
}
