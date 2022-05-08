//
//  Fibonaci.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 08/05/22.
//

#include "Fibonaci.hpp"
#include <iostream>
using namespace std;

int i_NthFib(int n) {
    
    int first_small = 0;
    int sec_small = 1;
    
    int i  = 2;
    while (i <= n) {
        int result = first_small + sec_small;
        first_small = sec_small;
        sec_small  = result;
        i++;
    }
    return sec_small;
    
    
    
}

int r_NthFib(int n) {
    //Base case for element 0
    if (n == 0) {
        return  0;
    }
    // Base case of element 1
    if (n == 1) {
        return 1;
    }
    
    int temp1 = r_NthFib(n -1);
    int temp2 = r_NthFib(n-2);
    
    return temp1 + temp2;
}
