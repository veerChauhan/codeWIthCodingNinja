//
//  pattern6.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//



#include <stdio.h>
#include <iostream>
using namespace std;
void pattern6(){
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cout<< "enter value : " ;
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= (n-row); space++) {
            cout<< " ";
        }
        for (int symbool = 1; symbool <= ((2*row)-1); symbool++) {
            cout <<"*";
        }
        cout << endl;
        
    }
    cout << endl;
    
    int i = 0;
    while (i<=n) {
        int space = 1;
        while (space <= (n-i)) {
            cout<< " ";
            space++;
        }
        int j= 1;
        while (j<=((2*i)-1)) {
            cout << "*";
            j++;
        }
        cout << endl;
        
        i++;
    }
}
