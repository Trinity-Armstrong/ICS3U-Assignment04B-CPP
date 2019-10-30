// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This is the number comparison program

#include <iostream>

int main() {
    // This function runs the number comparison program

    // variables
    int firstNumber;
    int secondNumber;

    // Input
        std::cout << "Enter your first number: ";
        std::cin >> firstNumber;
        std::cout << "Enter your second number: ";
        std::cin >> secondNumber;
        std::cout << "" << std::endl;

    // Process & output
    try {
        if (firstNumber > secondNumber) {
            std::cout << firstNumber << " > " << secondNumber << std::endl;
        }   else if (firstNumber < secondNumber) {
        std::cout << firstNumber << " < " << secondNumber << std::endl;
        }   else if (firstNumber == secondNumber) {
        std::cout << firstNumber << " = " << secondNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This is not an integer.";
    }
}
