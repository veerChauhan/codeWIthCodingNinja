//
//  Power.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>

#include <iostream>
using namespace std;

void power() {
    cout << "Enter your base : " ;
    int base;
    cin >> base;
    cout << "Enter your exponatial : " ;
    int expo;
    cin >> expo;
    
    int result = 1;
    
    if (base == 0 && expo == 0) {
        cout << result;
    } else {
        while (expo > 0) {
            result = result * base;
            expo --;
        }
        cout << result;
    }
    cout << endl;
}
