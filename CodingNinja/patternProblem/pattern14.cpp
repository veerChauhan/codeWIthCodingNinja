//
//  pattern14.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void pattern14(){
    
    cout << "Enter the height of the Paatern : " ;
    int height;
    cin >> height;
    int i = 1;
    
    while(i <= height) {
        
        int space = 1;
        while(space <= height-i){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        j = i-1;
        
        while(j>=1){
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
        
        
    }
}
/*

        *
       ***
      *****
     *******
 
 */
