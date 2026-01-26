# Luhn's Algorithm — Credit Card Validation (C++)

This project implements **Luhn's Algorithm** to validate credit card numbers. The program checks whether a given credit card number is valid based on the standard checksum formula.

---

## Features
- Validates credit card numbers using Luhn's Algorithm.
- Handles numeric input of any length.
- Simple console-based interface.
- Clear, modular code with functions for odd/even digit processing.

---

## Requirements
- A C++ compiler (e.g., g++, clang, or Visual Studio).
- C++11 or higher recommended.

---

## How to Compile and Run

### Using Terminal / Command Line

1. Navigate to the folder containing `main.cpp` (or your source file).
2. Compile the program:
```bash
g++ -o luhn main.cpp
```
Run the program:

./luhn   # On Linux/Mac
luhn.exe  # On Windows
Enter the credit card number when prompted.

Using an IDE (e.g., Visual Studio, Code::Blocks, CLion)
Create a new C++ project.

Add the source file main.cpp to the project.

# Build and run the project.

Enter the credit card number in the console when prompted.

Example Output
Enter a credit card number: 4539578763621486

This is a valid credit card number.

Enter a credit card number: 1234567890123456

This is not a valid credit card number.

How It Works

Sum of odd digits: Add all digits in odd positions from the right.


Sum of even digits: Double every digit in even positions from the right, then sum their digits.

