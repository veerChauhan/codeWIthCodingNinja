//
//  number_palindrom.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "number_palindrom.hpp"
#include <iostream>
using namespace std;
bool check_number_palindrom(int input) {
    
    bool isPalindrom = false;
    
    
    // 11111111 -> true
    // 121  -> True
    // 1 ->  true
    // 1234213 -> false
    // 2133321 -> false
    int verifier  = input;
    
    int data = 0;
    while (input > 0) {
        int num = input % 10;
        input = input / 10;
        data = data * 10 + num;
    }
    if (verifier == data) {
        isPalindrom = true;
    }
    return isPalindrom;
}
