//
//  pattern7.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void patten8(){
    
    cout << "Enter the height of the pattern: " ;
    int height;
    cin >> height;
    int i = 1;
    
    while (i<=height) {
        
        int j = 1;
        while (j <=height) {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    
}
/*
 11111
 22222
 33333
 44444
 55555
 */
