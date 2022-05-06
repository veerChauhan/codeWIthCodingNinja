//
//  Power.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 07/05/22.
//

#include "Power.hpp"
#include <iostream>
using namespace std;

int i_power(int base, int pow) {
    int result = 1;
    if (pow == 0) {
        return result;
    }
    while (pow > 0) {
        result = base * result;
        pow --;
    }
    return result;
}

int r_power(int base, int pow) {
    if (pow == 0) {
        return 1;
    }
    int tempPow = r_power(base, pow -1);
    return base * tempPow;
}
