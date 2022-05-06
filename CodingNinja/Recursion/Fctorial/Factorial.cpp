//
//  Factorial.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 07/05/22.
//

#include "Factorial.hpp"
#include <iostream>
using namespace std;

int  i_Factorial (int number) {
    // Iterative solution for factoria using loop
    int factorial = 1;
    if (number == 0) {
        return  factorial;
    }
    while (number > 0) {
        factorial = number * factorial;
        number--;
    }
    return  factorial;
}

int r_Factorial(int number) {
    
    if (number == 0) {
        return  1;
    }
    int output = r_Factorial(number -1);
    return  output * number;
}
