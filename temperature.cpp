// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program loops numbers to print 1000

#include <iostream>
#include <cmath>
#include <string>

void fahrenheit() {
    // converts celsius to fahrenheit

    float celsius;
    float fahrenheit;
    std::string Cstring;
    std::cout.precision(4);

    try {
        // input
        std::cout << "Enter the degrees in celsius: ";
        std::cin >> Cstring;
        celsius = std::stoi(Cstring);

        // process
        fahrenheit = (9.0/5.0) * celsius + 32.0;

        // output
        std::cout << "" << std::endl;
        std::cout << celsius << "°c is " << fahrenheit << "°f"
                                                       << std::endl;

        if (celsius < -273.15) {
            std::cout << "" << std::endl;
            std::cout << "this temperature is impossible." << std::endl;
        }
    } catch (std::invalid_argument) {
    std::cout << "This was not a number." << std::endl;
    }
}


main() {
    // calls function
    fahrenheit();
}
