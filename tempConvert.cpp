// Copyright (c) 2022 Ioana Marinescu All rights reserved.
// Created By: Ioana Marinescu

// Date: Dec. 4, 2022
// a program that converts from celsius to fahrenheit


#include <iomanip>
#include <iostream>

void celsiusToFahrenheit() {
    // variables
    std::string celsiusStr;
    float celsiusFloat, fahrenheit;

    // getting user input
    std::cout << "Enter the temperature (celsius): ";
    std::cin >> celsiusStr;

    // exception handling
    try {
        // converts celsius from string to float
        celsiusFloat = stof(celsiusStr);

        // calculates fahrenheit
        fahrenheit = 1.8 * celsiusFloat + 32;

        // displays results
        std::cout << std::fixed << std::setprecision(2)
                  << std::setfill('0') << celsiusFloat << "° celsius is "
                  << fahrenheit << "° fahrenheit." << std::endl;

    // user input is invalid
    } catch (std::invalid_argument) {
        std::cout << "Input invalid! Please make sure your imputed a number."
                  << std::endl;
    }
}

int main() {
    // calls celsiusToFahrenheit
    celsiusToFahrenheit();
}
