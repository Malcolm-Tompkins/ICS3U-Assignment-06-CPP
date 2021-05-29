// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 27, 2021
// Converts level marks into percentage

#include <iostream>
#include <string>

int volume_cube(int length, int width, int height) {
    int volume;
    volume = length * width * height;
    return volume;
}
main() {
    std::string user_input1, user_input2, user_input3;
    int user_length, user_width, user_height, final_volume;

    std::cout << "Enter the length of your cube (mm): ";
    std::cin >> user_input1;
    std::cout << "Enter the width of your cube (mm): ";
    std::cin >> user_input2;
    std::cout << "Enter the height of your cube (mm): ";
    std::cin >> user_input3;

    try {
        user_length = std::stoi(user_input1);
        try {
            user_width = std::stoi(user_input2);
            try {
                user_height = std::stoi(user_input3);
                volume_cube(user_length, user_width, user_height);
                final_volume = volume_cube(user_length,
                user_width, user_height);
                std::cout << "The volume of your cube is: ";
                std::cout << final_volume << " mm²";
            } catch (std::invalid_argument) {
                std::cout << user_input3 << " is not a dimension";
            }
        } catch (std::invalid_argument) {
            std::cout << user_input2 << " is not a dimension";
        }
    } catch (std::invalid_argument) {
        std::cout << user_input1 << " is not a dimension";
    }
    std::cout << "\nDone.";
    }
