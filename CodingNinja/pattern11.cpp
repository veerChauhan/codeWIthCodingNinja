//
//  pattern11.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void pattern11(){
    cout << "Enter the height of the pattern: " ;
    int height;
    cin >> height;
    int i = 1;
    
    while (i<=height) {
        
        int j = 1;
        while (j <=height) {
            cout << height - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}
