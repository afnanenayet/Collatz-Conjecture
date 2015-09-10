//
//  main.cpp
//  hailstorm_sequence
//
//  Created by Afnan Enayet on 9/10/15.
//  Copyright (c) 2015 Afnan Enayet. All rights reserved.
//

#include <iostream>

bool isHail (int n) {
    auto counter = 0;
   while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        
        else {
            n = (3 * n) + 1;
        }
       
       counter++;
    }
    
    std::cout << "|| Time: " << counter;
    return true;
}

int main() {
    int hailNumber;
    std::cout << "Type in the number you want to start from.\n";
    std::cin >> hailNumber;
    
    bool hail = true;
    
    hailNumber--;
    
    while (hail == true) {
        hailNumber++;
        hail = isHail(hailNumber);
        std::cout << "\n" << hailNumber << " ";
    }
    
    std::cout << "\n" << hailNumber << " breaks the conjecture!";
}


