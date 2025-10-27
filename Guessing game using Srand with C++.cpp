//Write a C++ program where the computer randomly picks a number between 1 and 100, 
//and the player tries to guess it. After each guess, the computer tells the player if the guess is too high, too low, or correct.

#include<iostream>
#include<ctime>


int main(){
    int number_p;
    int computer_p;
    
    std::cout << "choose a number: ";
    std::cin >> number_p;
    int tries = 0;
    srand(time(0));
            computer_p = rand() % 100 + 1;
    do{
        
    
        if (number_p > computer_p){
            std::cout<< "go lower\n";
        }
        else if (number_p < computer_p){
            std::cout<< "go higher\n";
        }
        else{
            std::cout<< "you got it\n";
        }
        tries++;
        
        if (number_p != computer_p){
            std::cout << "choose a number\n: ";
            std::cin >> number_p;
        }
        
        
    }
    while(number_p != computer_p);
    
    std::cout << "you guesse it in " << tries << " tries";
    
    return 0;
}
