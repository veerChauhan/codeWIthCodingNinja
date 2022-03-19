//
//  largerNumber.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void compare(){
    
    cout << "Comparison between two number \n" << endl;
    int a, b;
    cout << "enter your two number" << endl;
    cin >> a  >> b ;
    if (a==b) {
        cout << "Number is equal" << endl;
    } else if (a < b) {
        cout << "a is less than b" << endl;
    } else {
        cout << "a is greater b" << endl;
    }
    
}

