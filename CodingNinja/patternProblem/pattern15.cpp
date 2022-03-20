//
//  pattern15.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 20/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;


/*
            1
           232
          34543
         4567654
        567898765
 
 */
void pattern15() {
    
    cout << "Enter thr height of Pattren : ";
    int height;
    cin >> height;
    
    int i  = 1;
    
    while (i <= height) {
        //Print space first
        int space = 1;
        while(space <= height - i) {
            cout<< " ";
            space++;
        }
        
        int j = 1;
        int value = i;
        while (j<=i) {
            cout << value;
            value = value +1;
            j++;
        }
        
        value = (2* i) - 2;
        
        int k = 1;
        while (k < i) {
            cout << value;
            value--;
            k++;
        }
        
        cout << endl;
        i++;
    }
    
}
/*
 1
232
34543
4567654
 */
