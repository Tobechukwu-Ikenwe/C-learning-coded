#include <iostream> // allows use of input/output (like std::cout)

// Define a structure (struct) to represent a car
struct Car {
    std::string model; // the model name of the car
    int year;          // the manufacturing year
    std::string color; // the color of the car
};

// Function declarations
void printCar(Car car);                     // prints details of a car (passed by value)
void paintCar(Car &car, std::string color); // changes the color of a car (passed by reference)

int main()
{
    Car car1; // create a Car object called car1
    Car car2; // create another Car object called car2 (not used here)

    // Assign values to car1's properties
    car1.model = "mustang";
    car1.year = 2027;
    car1.color = "blue";

    // Change car1's color using the paintCar function
    paintCar(car1, "orange");

    // Print car1's details to see the updated color
    printCar(car1);

    return 0; // end of the program
}

// Function definition: prints out all the details of a car
void printCar(Car car) {
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

// Function definition: repaints the car
// "&" means the function changes the original car, not a copy
void paintCar(Car &car, std::string color) {
    car.color = color; // update the car's color
}
