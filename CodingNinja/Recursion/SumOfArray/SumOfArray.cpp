//
//  SumOfArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 27/05/22.
//

#include "SumOfArray.hpp"
#include <iostream>
using namespace std;

int sumOfArrayRecursive(int inputp[], int n) {
    if (n == 0) {
        return  0;
    }
    //
    return inputp[n-1] + sumOfArrayRecursive(inputp, n-1);
}

int sumOfArrayIterative(int inputp[], int n) {
    int result = 0;
    int i = 0;
    while (i < n) {
        result = result + inputp[i];
        i++;
    }
    return  result;
}
