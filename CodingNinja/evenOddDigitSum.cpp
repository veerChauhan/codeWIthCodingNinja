//
//  evenOddDigitSum.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void digit_sum() {
    cout << "Enter your Number : ";
    int number;
    cin >> number;
    int even_sum = 0;
    int odd_sum = 0;
    
    while (number > 0) {
        int last_digit = number % 10;
        number = number / 10;
        if (last_digit % 2 == 0) {
            even_sum = even_sum + last_digit;
        } else {
            odd_sum = odd_sum + last_digit;
        }
    }
    cout << even_sum << " " << odd_sum << endl;
}


