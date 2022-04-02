//
//  pattern17.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 30/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void pattern17(){
    
    
    
    cout << "Enter height of the pattern : ";
    int h;
    cin >> h;
    int i = 0;
    while (i < h) {
        
        
        int j = 1;
        while (j <=h -i) {
            cout << j;
            j++;
        }
        
        
        int space = 2*i;
        int k = 1;
        while (k <=space) {
            cout << "*";
            k++;
        }
        
        
        int value = h-i;
        while (value >=1) {
            cout << value ;
            value--;
        }

        cout << endl;
        
        
        i++;
    }
    
}
//1234554321
//1234**4321
//123****321
//12******21
//1********1
