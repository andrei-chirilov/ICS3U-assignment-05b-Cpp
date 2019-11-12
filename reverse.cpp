// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program reverses a digit

#include <iostream>

int main() {
    int n, reversedNumber = 0, remainder;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    std::cout << "The reversed number is: " << reversedNumber;
    return 0;
}
