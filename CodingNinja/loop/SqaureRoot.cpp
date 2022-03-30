//
//  SqaureRoot.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 29/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void sqaureRoot(){
    
    cout << "Enter the  number : ";
    int n;
    cin >> n;
    int i = 1;
    
    while (i *i < n) {
        i++;
    }
    cout << i;

}
