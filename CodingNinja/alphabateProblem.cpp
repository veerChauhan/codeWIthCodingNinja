//
//  alphabateProblem.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void charecter_diff() {
    // Write your code here
    cout << "Enter your charecter" << endl;
    char a;
    cin >> a;
    if(a >= 65 && a <= 90) {
        cout << "1";
    } else if (a >= 97 && a <= 122)  {
        cout << "0";
    } else {
        cout << "-1";
    }
    
}

