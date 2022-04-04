// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-04-04
// This program gets a users age and tells them if they
// are of suitable age to date someone's grandchild

#include <iostream>
#include <string>

int main() {
    // this function calculates if age is suitable
    std::string userAgeString;
    int userAge;

    // input
    std::cout << "Enter your age: ";
    std::cin >> userAgeString;

    // process & output
    try {
        userAge = std::stoi(userAgeString);
        if (userAge >= 25 && userAge <= 40) {
            std::cout << "You may date my Grandchild." << std::endl;
        } else {
            std::cout << "You may NOT date my Grandchild." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid age!" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
