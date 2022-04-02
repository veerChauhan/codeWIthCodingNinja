//
//  ArraInput.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 01/04/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void array(){
    
    

    cout << "enter the length of array: ";
    int n;
    cin >> n;
    int input [60];
    
    for (int i = 0; i<n; i++) {
        cin >> input[i];
    }
    cout << "Print now "<<endl;
    for (int i = 0; i<=100; i++) {
        cout << input[i] << endl;
    }
}
