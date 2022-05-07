//
//  NumberTillN.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 07/05/22.
//

#include "NumberTillN.hpp"
#include <iostream>
using namespace std;

void i_printTillN(int n) {
    
    int i = 1;
    while (i <= n) {
        cout << i << " " ;
        i++;
    }
    
    
}
void r_printTillN(int n) {
    
    if (n == 1) {
        cout << n << " ";
        return;
    }
    r_printTillN(n - 1);
    cout << n << " ";
    
}

