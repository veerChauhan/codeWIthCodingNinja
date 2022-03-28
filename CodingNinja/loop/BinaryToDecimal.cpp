//
//  BinaryToDecimal.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 24/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void BinaryToDecimal() {
    // Write your code here
    cout << "Enter the binary digit: " ;
    int binary;
    cin >> binary;
    
    int pv = 1;
    int ans = 0;
    
    while(binary>0){
        
        int digit = binary %10;
        if(digit == 0 || digit==1){
            binary = binary/10;
        ans = ans + pv * digit;
        pv = pv *2;
        } else {
            cout <<"Invalid Input" << endl;
            break;
        }
    }
    cout << ans;
}

