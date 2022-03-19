//
//  pattern9.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void pattern9(){
    
    cout << "Enter the height of the pattern: " ;
    int height;
    cin >> height;
    int i = 1;
    
    while (i<=height) {
        
        int j = 1;
        while (j <=height) {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    
}
/*
 123456789
 123456789
 123456789
 123456789
 123456789
 123456789
 123456789
 123456789
 123456789
 */
