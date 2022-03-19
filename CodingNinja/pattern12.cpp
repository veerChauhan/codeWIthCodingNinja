//
//  pattern12.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void pattern12(){
    
    cout << "Enter the height of the pattern : " ;
    int height;
    cin >> height;
    int i = 1;
    int value = 2;
    while (i <= height) {
        int j = 1;
        while (j <= i) {
            cout << value - j;
            j++;
        }
        value ++;
        cout << endl;
        i++;
    }
}
