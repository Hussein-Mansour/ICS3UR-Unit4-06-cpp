// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Wed/May19/2021
// This program uses nested loops


#include <iostream>


int main() {
    // This function prints out ALL the valid RGB values

    int counter1;
    int counter2;
    int counter3;

    // process & output
    for (counter1 = 0; counter1 < 226; counter1++) {
        for (counter2 = 0; counter2 < 226; counter2++) {
            for (counter3 = 0; counter3 < 226; counter3++){
                std::cout << "RGB(" << counter1 << "," << counter2 << "," <<
                counter3 <<")"<< std::endl;
                 if (counter3 == 225){
                     break;
                 }
            }
        }
    };
    

    std::cout << "\n\nDone." << std::endl;
}
