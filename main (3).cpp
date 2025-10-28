#include <iostream>
#include <string>
#include <cctype>  // for toupper() function, which converts letters to uppercase

int main()
{
    // --- Array of quiz questions ---
    std::string questions[] = {
        "1. What year was C++ created?",
        "2. Who invented C++?",
        "3. Predecessor of C++?",
        "4. Is Earth Flat?"
    };
    
    // --- Array of options for each question ---
    // Each inner array holds four multiple-choice answers (A–D)
    std::string options[][4] =  {
        {"A. 1979", "B. 1983", "C. 1985", "D. 1990"},  // Question 1
        {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Guido van Rossum"},  // Question 2
        {"A. C", "B. Java", "C. Assembly", "D. Python"},  // Question 3
        {"A. Yes", "B. No", "C. Sometimes", "D. Not sure"}  // Question 4
    };
    
    // --- Array storing the correct answers ---
    char answerKey[] = {'B', 'B', 'A', 'B'};

    // Calculate how many questions are in the quiz
    int size = sizeof(questions) / sizeof(questions[0]);
    
    // Variables to store the user's guess and overall score
    char guess;
    int score = 0;

    // --- Main quiz loop ---
    // This loop runs once for each question
    for (int i = 0; i < size; i++) {
        // Print the question number and text
        std::cout << "\n" << questions[i] << "\n";

        // Display the 4 possible answers for the current question
        for (int j = 0; j < 4; j++) {
            std::cout << options[i][j] << "\n";
        }

        // Ask the user for their answer
        std::cout << "Enter your answer (A–D): ";
        std::cin >> guess;

        // Convert the guess to uppercase (so 'a' and 'A' both work)
        guess = toupper(guess);

        // Check if the answer is correct
        if (guess == answerKey[i]) {
            std::cout << "CORRECT!\n";
            score++;  // Increase score for correct answers
        } else {
            std::cout << "WRONG! C
