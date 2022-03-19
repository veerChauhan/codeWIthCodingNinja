//
//  sumOfPositiveN.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void sumOfPositive(){
    
    int n;
    cin >> n;
    int sum = 0;
    int start = 1;
    while(start <= n) {
        if (start%2 != 0) {
            sum = sum + start;
            start++;
        }
    }
    cout << sum;
    
    
    
}
