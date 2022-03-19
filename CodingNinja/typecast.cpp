//
//  typecast.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void typecast () {
    
    cout << "Implicit type casting " << endl;
    int a;
    char b;
    a = 48;
    b = a;
    
    cout << b << endl;
    
    
    float c = 1.3;
    a = c;
    cout << a << endl;
    char f = 'f';
    a = a + f ;
    cout << a << endl;
    b = b + a;
    cout << b << endl;
    cout << 'a' + 1 << endl;
    int i = 'c';
    cout << i << endl;
    char cc = 74;
    cout << cc <<  endl;
    
    int mm = 10;
    char ch = 'a';
    ch = ch + mm;
    cout << ch << endl;
    
}
