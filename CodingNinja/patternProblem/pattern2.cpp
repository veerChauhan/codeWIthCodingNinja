//
//  pattern2.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//


/*
 
 
 pattern 2
 1
 23
 456
 78910
 
 */
#include <stdio.h>
#include <iostream>
using namespace std;

void pattern3(){
    
    
    cout << "Enter the height for the pattern" << endl;
    int height;
    cin >> height;
    int i = 0;
    int v = 0;
    while (i<=height) {
        int j= 1;
        while (j<i) {
            cout << v  << " ";
            j++;
            v++;
        }
        cout << endl;
        i++;
    }
}
