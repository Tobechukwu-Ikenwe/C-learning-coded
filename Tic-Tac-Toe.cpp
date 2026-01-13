#include <iostream>
#include <ctime>
#include <cstdlib> // Required for rand/srand

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    srand(static_cast<unsigned int>(time(0))); 
    
    drawBoard(spaces);
    
    while(running) {
        // Player's Turn
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer) || checkTie(spaces)) {
            running = false;
            break; // Stop immediately so computer doesn't move
        }

        // Computer's Turn
        computerMove(spaces, computer);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer) || checkTie(spaces)) {
            running = false;
            break;
        }
    }

    std::cout << "Thanks for playing!\n";
    return 0;
}

void playerMove(char *spaces, char player) {
    int number;
    do {
        std::cout << "Enter a spot (1-9): ";
        std::cin >> number;
        number--; // Adjust for 0-indexing
        
        // Fix: Ensure number is in range BEFORE checking the space
        if (number >= 0 && number <= 8 && spaces[number] == ' ') {
            spaces[number] = player;
            break;
        } else {
            std::cout << "Invalid move. Try again.\n";
        }
    } while (true);
}

void computerMove(char *spaces, char computer) {
    int number;
    while(true) {
        number = rand() % 9;
        if(spaces[number] == ' ') {
            spaces[number] = computer;
            std::cout << "Computer placed 'O' at position " << number + 1 << "\n";
            break;
        }
    }
}

// ... drawBoard remains the same ...

bool checkWinner(char *spaces, char player, char computer) {
    // Array of winning combinations
    int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Cols
        {0, 4, 8}, {2, 4, 6}             // Diagonals
    };

    for(int i = 0; i < 8; i++) {
        if(spaces[wins[i][0]] != ' ' && 
           spaces[wins[i][0]] == spaces[wins[i][1]] && 
           spaces[wins[i][1]] == spaces[wins[i][2]]) {
            
            spaces[wins[i][0]] == player ? std::cout << "YOU WIN!\n" : std::cout << "YOU LOSE!\n";
            return true;
        }
    }
    return false;
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') return false;
    }
    std::cout << "IT'S A TIE!\n";
    return true;
}
