# GuessGame

This is a **beginner-friendly C++ program** that lets you play a classic "Guess the Number" game against the computer.  

The program includes **mode selection**, **input validation**, and **feedback on each guess**. It’s also **heavily commented** to help beginners understand each line of code.

---

## Features

- Two game modes: **Unlimited tries** or **Limited tries**
- Random number generated between 1 and 100
- Provides hints ("Too high!" or "Too low!") after each guess
- Displays game statistics (number of tries and final number)
- Beginner-friendly with **step-by-step comments**

---

## How to Run

1. **Clone or download** this repository.
2. Open the file in your C++ IDE (like Code::Blocks, Visual Studio, or VSCode with C++ extensions).
3. Compile the program:
   ```bash
   g++ -o main main.cpp
Run the program:

./guess_number   # Linux/Mac
guess_number.exe # Windows
Sample Output


# Unlimited Tries Mode:

Which mode would you prefer?
1. Unlimited tries
2. Limited tries
Choice: 1

--- Guess the Number Game ---


Guesses left: Infinity
Enter guess (1-100): 50
Too low!
Guesses left: Infinity
Enter guess (1-100): 75
Too high!
Guesses left: Infinity
Enter guess (1-100): 63
Correct! You won in 3 tries.


# Limited Tries Mode (e.g., 5 tries):

Which mode would you prefer?
1. Unlimited tries
2. Limited tries
Choice: 2
How many tries would you like? 5

--- Guess the Number Game ---


Guesses left: 5

Enter guess (1-100): 60

Too low!

Guesses left: 4
Enter guess (1-100): 80
Too high!
Guesses left: 3
Enter guess (1-100): 70
Too high!
Guesses left: 2
Enter guess (1-100): 65
Too low!
Guesses left: 1
Enter guess (1-100): 68
Game Over! The number was 67.

# Notes
The program uses rand() and srand() to generate a random number between 1 and 100.

Input validation ensures the user enters valid choices for game mode.

Unlimited mode is simulated with a very large number of tries (1,000,000) for simplicity.

Feedback is provided using a ternary operator, which is efficient and modern C++ style.

Heavily commented to teach beginners how each part works, from loops to conditionals and random number generation.
