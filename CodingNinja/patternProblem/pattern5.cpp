//
//  pattern5.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

/*
 pattern:
 
 1
 23
 345
 4567
 */
#include <stdio.h>
#include <iostream>
using namespace std;
void pattern5() {
    cout << "Enter the height for the pattern" << endl;
    int n;
    cin >> n;
    int i =1;
    int v = 1;
    while (i<=n) {
        int k= 0;
        while (k< n-i) {
            cout << " ";
            k++;
        }
        int j= 1;
        while (j<=i) {
            cout << v;
            j++;
            v++;
        }
        cout << endl;
        v=i+1;
        i++;
    }
    
}
