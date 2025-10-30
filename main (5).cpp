#include <iostream>
#include <ctime>

// Function declarations
void drawBoard(char *spaces);                  // Draw the tic-tac-toe board
void playerMove(char *spaces, char player);    // Handle player's move
void computerMove(char *spaces, char computer);// Handle computer's move
bool checkWinner(char *spaces, char player, char computer); // Check if there is a winner
bool checkTie(char *spaces);                   // Check if the board is full (tie)

int main()
{
    char spaces[9] ={' ',' ',' ',' ',' ',' ',' ',' ',' '}; // board spaces, initially empty
    char player = 'X';                                     // player's marker
    char computer = 'O';                                   // computer's marker
    bool running = true; //its like a continue with the loop, keeps game going

    srand(time(0)); // seed random number generator once at the start for computer moves
    
    drawBoard(spaces);// arrays decay to pointers inside function (array name becomes pointer to first element)
    
    while(running){
        // Player move
        playerMove(spaces,player);
        drawBoard(spaces); // redraw board to show player's move

        // Check if player wins after move
        if(checkWinner(spaces, player, computer)){ //use if cause it returns a bool function
            running = false ; // if we have a winner game has finished
        }
        else if(checkTie(spaces)){ // check tie if no winner
            running = false;
            break;
        }

        // Computer move
        computerMove(spaces, computer);
        drawBoard(spaces); // redraw board to show computer's move

        // Check if computer wins after move
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }
        else if(checkTie(spaces)){ // check tie if no winner
            running = false;
            break;
        }
    }

    std::cout << "thanks for playing"; 
}

// Draws the tic-tac-toe board using current board state
void drawBoard(char *spaces){
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << "\n"; // spaces are there so we can input x or o in them
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << "\n";
}

// Player selects a position to place their marker
void playerMove(char *spaces, char player){
    int number; // user enters number between 1 and 9 to fill up space on tic tac toe board
    do{
        std::cout << "enter number (1-9) to put marker"<< "\n";
        std::cin >> number;
        number-- ; // arrays start with 0, so subtract 1 to match index

        // Check if chosen space is empty
        if(spaces[number] == ' '){
            spaces[number] = player; // place player's marker
            break; // stop checking once move is made
        }
        // If chosen space is filled, loop continues to ask again
    }
    while(number < 0 || number > 8 || spaces[number] != ' '); // validate input
}

// Computer randomly selects an empty position to place its marker
void computerMove(char *spaces, char computer){
    int number;
    while(true){
        number = rand() % 9; // generate number 0-8
        if(spaces[number] == ' '){ // only place in empty space
            spaces[number] = computer;
            break; // stop once move is made
        }
    }
}

// Checks if either player or computer has won
bool checkWinner(char *spaces, char player, char computer){
    // check rows
    if(spaces[0] != ' ' && spaces[0]==spaces[1] && spaces[1]==spaces[2])
        spaces[0]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 
    else if(spaces[3] != ' ' && spaces[3]==spaces[4] && spaces[4]==spaces[5])
        spaces[3]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 
    else if(spaces[6] != ' ' && spaces[6]==spaces[7] && spaces[7]==spaces[8])
        spaces[6]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 

    // check columns
    else if(spaces[0] != ' ' && spaces[0]==spaces[3] && spaces[3]==spaces[6])
        spaces[0]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 
    else if(spaces[1] != ' ' && spaces[1]==spaces[4] && spaces[4]==spaces[7])
        spaces[1]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 
    else if(spaces[2] != ' ' && spaces[2]==spaces[5] && spaces[5]==spaces[8])
        spaces[2]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 

    // check diagonals
    else if(spaces[0] != ' ' && spaces[0]==spaces[4] && spaces[4]==spaces[8])
        spaces[0]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 
    else if(spaces[2] != ' ' && spaces[2]==spaces[4] && spaces[4]==spaces[6])
        spaces[2]==player ? std::cout << "You win" << "\n":std::cout << "You lose" << "\n"; 

    else{
        return false; // no winner yet
    }

    return true; // there is a winner
}

// Checks if all spaces are filled (tie)
bool checkTie(char *spaces){
    for (int i = 0 ; i< 9; i++){
        if (spaces[i] == ' '){
            return false; // still have empty spaces, keep playing
        }
    }
    std::cout << "Its a tie\n"; // all spaces filled, no winner
    return true; // tie game
}
