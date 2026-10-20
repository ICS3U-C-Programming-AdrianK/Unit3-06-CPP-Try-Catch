// Copyright (c) 2025 All rights reserved.
//
// Created by: Adrian student.
// Created on: 19th oct 2026
// This program uses a random number generator to choose a
// random number and then asks the user to try guessing it
#include <iostream>
#include <random>
#include <string>

int main() {
    // declare integer to hold random number
    int randomNumber;

    // set up the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 9);
    randomNumber = dist(gen);

    // get the user guess number
    std::string guessNumber;
    std::cout << "\n";
    std::cout << "Enter your guess number between  0 and 9 : ";
    std::cin >> guessNumber;

    // cast the input into integer and check if it is right
    try {
    // cast the user input to an integer
    int userNumber = std::stoi(guessNumber);

    // check if user input is correct
        if (userNumber == randomNumber) {
            std::cout << "your guessed correctly!!";
        } else {
            std::cout << "you guessed wrong!!" << std::endl;
            std::cout << "The correct answer was : "
            << randomNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << guessNumber << " is not an integer";
        std::cout << "\n";
    }
    // Add the finally statement
    std::cout << "Thanks for playing ";
    std::cout << "\n";
}
