//
//  DecimalToBinary.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 24/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void dcimalToBinary(){
    
    
    cout << "Enter the decimal number : ";
    int n;
    int i = 1;
    cin >> n;
    int result = 0;
    while (n > 0) {
        int temp = n%2;
        n = n/2;
        result = result + (temp * i);
        i = i *10;
        
    }
    cout << result << "  " << endl;

}
