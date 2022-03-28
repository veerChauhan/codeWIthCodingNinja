//
//  AllPrime.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 22/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void primeListTillN(){
    
    
    cout << "Enter the number range"<<endl;
    int n;
    cin >> n;
    int count;
    for (int i = 1; i<=n; i++) {
         count = 0;
        for (int j = 1; j<=i; j++) {
            if (i%j == 0) {
                count++;
            }
        }
        if (count <=2) {
            cout << i << endl;
        }
        
    }
}
