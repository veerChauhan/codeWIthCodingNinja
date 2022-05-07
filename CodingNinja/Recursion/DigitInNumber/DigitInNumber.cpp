//
//  DigitInNumber.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 07/05/22.
//

#include "DigitInNumber.hpp"
#include <iostream>
using namespace std;


int i_digitInNumber(int n) {
    if (n == 1) {
        return 1;
    }
    int result = 0 ;
    while (n > 0) {
        n = n /10;
        result ++;
    }
    return result;
    
}
int r_digitInNumber(int n) {
    
    if (n == 0) {
        return  0;
    }
    int temp = r_digitInNumber(n/10);
    return temp + 1;
}
