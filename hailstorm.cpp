//
//  main.cpp
//  hailstorm_sequence
//
//  Created by Afnan Enayet on 9/10/15.
//  Copyright (c) 2015 Afnan Enayet. All rights reserved.
//

#include <iostream>
#include <fstream>

int hail_time(int n) {
    auto counter = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (3 * n) + 1;
        }
       counter++;
    }
    
    std::cout << "|| Time: " << counter;
    return counter;
}

int main() {
    std::ofstream csv_file;
    csv_file.open("collatz.csv");
    int hailNumber;
    std::cout << "Type in the upper bound.\n";
    std::cin >> hailNumber;
    
    for(auto i = 1; i < hailNumber + 1; i++) {
        auto time = hail_time(i);
        std::cout << "\n" << i << " ";
        csv_file << i << "," << time << "\n";
    }
    csv_file.close();
    return 0;    
}


