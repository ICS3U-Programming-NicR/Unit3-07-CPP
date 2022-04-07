// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: April 06 2022
// This program figures out if you can date the grand child

#include <iostream>
using std::cout;
using std::cin;
using std::string;

int main() {
    string ageStr, tryAgain, waiting;
    int age;
    cout << "How old are you? \n";
    cin >> ageStr;
    try {
        age = std::stoi(ageStr);
    } catch (std::invalid_argument) {
        cout << "That is not a valid number\n";
        main();
    }
    if (age > 25 && age < 40) {
        cout << "you can date my grandchild!\n";
    } else if (age < 0) {
        cout << "your age cannot be negative\n";
        main();
    } else {
        cout << "sorry you cannot date my grandchild\n";
    }

    cout << "would you like to try again? ";
    cin >> tryAgain;
    if (tryAgain == "y"
        || tryAgain == "Y"
        || tryAgain == "yes"
        || tryAgain == "YES") {
        main();
    } else if (tryAgain == "n"
        || tryAgain == "N"
        || tryAgain == "no"
        || tryAgain == "NO") {
        cout << "Thanks for playing!\n";
        return 0;
        }
}
