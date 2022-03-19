//
//  oddEven.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//

#include "oddEven.hpp"
#include <iostream>
using namespace std;
void  oddEven() {
    cout << "find even or odd number" <<  endl;
    int a;
    cout << "Enter your number" << endl;
    cin >> a;
    if (a % 2 == 0) {
        cout << "Even number" << endl;
    }
    else {
        cout << "Odd number" << endl;
    }
}
