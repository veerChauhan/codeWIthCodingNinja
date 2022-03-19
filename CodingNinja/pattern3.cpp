//
//  pattern3.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 18/03/22.
//

/*
 patter
 
           1
          21
         321
        4321
       54321
 */

#include <stdio.h>
#include <iostream>
using namespace std;
void pattern4() {
    
    
    
    int height;
    cout << "Enter the height of pattern" << endl;
    
    cin >> height;
    int i = 1;
    int v = 1;
    while (i<=height) {
        int k = 1;
        while (k <= height - 1) {
            cout << " " ;
            k = k+1;
        }
        int j= 1;
        while (j<=i) {
            cout << v;
            j++;
            v++;
        }
        cout << endl;
        i++;
    }
  
    
}
