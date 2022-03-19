//
//  pattern1.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//

/*
 
 pattern
 
 1
 12
 123
 1234
 12345
 ------
 */

#include <stdio.h>
#include <iostream>
using namespace std;

void pattern1(){
    
    
    int n;
    cout << "enter pattern height" << endl;
    cin >> n;
    int i= 0;
    // with while loop
    while (i<=n) {
        int j= 0;
        while (j<i) {
            cout << j ;
            j++;
        }
        cout << endl;
        i++;
    }
    
    cout << endl;
    //with for loop
    for (int x =0; x<=n; x++) {
        for (int y=0; y<=x; y++) {
            cout << y;
        }
        cout << endl;
    }
    
}
