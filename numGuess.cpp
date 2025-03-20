// Copyright (c) 2025 Serge Hamouche All rights reserved.
// Created by: Serge Hamouche
// Date: March 18, 2025
// this program asks the user for a random number from 0-9

#include <iostream>

int main() {
    // choose a secret number
    const int SECRET_NUMBER = 5;

// Get user's guess;
    int user_guess;
    std::cout << "Enter a number between 0-9:";
    std::cin >> user_guess;

    // Check if user_guess correct;
    if (user_guess == SECRET_NUMBER) {
    std::cout << "correct" << std::endl;
    } else {
        std::cout << "Wrong" << std::endl;
    }
    return 0;
}
