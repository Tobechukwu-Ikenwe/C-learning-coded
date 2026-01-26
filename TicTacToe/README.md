# Tic-Tac-Toe Game (C++)

This is a simple **console-based Tic-Tac-Toe game** where you can play against the computer.  
It demonstrates the use of arrays, loops, functions, and basic game logic in C++.

---

## Features
- Play Tic-Tac-Toe against a computer opponent.
- Tracks player and computer moves on a 3x3 board.
- Announces winner, loser, or tie at the end.
- Randomized computer moves using `rand()` for unpredictability.
- Input validation ensures players cannot choose an occupied spot.

---

## Requirements
- A C++ compiler (e.g., g++, clang, or Visual Studio).
- C++11 or higher recommended.

---

## How to Compile and Run

### Using Terminal / Command Line
1. Save your source code in a file, e.g., `tic_tac_toe.cpp`.  
2. Open a terminal and navigate to the folder containing the file.  
3. Compile the program:
```bash
g++ -o tic_tac_toe tic_tac_toe.cpp
```
Run the compiled program:

./tic_tac_toe   # Linux/Mac

tic_tac_toe.exe  # Windows 

Follow on-screen prompts to play.

Using an IDE (e.g., Visual Studio, Code::Blocks, CLion)
Create a new C++ project.

Add tic_tac_toe.cpp to the project.

Build and run the project.

Play using the console prompts to enter moves.

# How It Works
Board Representation: The 3x3 board is stored in a 1D array of 9 characters.

Player Move: Prompts the user for a position (1–9) and validates input.

Computer Move: Randomly selects an empty spot on the board.

Win Check: After each turn, the program checks rows, columns, and diagonals for a winner.

Tie Check: If the board is full without a winner, the game declares a tie.

Game Loop: Alternates turns between player and computer until a win or tie occurs.
