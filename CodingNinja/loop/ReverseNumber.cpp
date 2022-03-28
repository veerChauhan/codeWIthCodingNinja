//
//  AllInputCount.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 23/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;


//Reverse of a given number
void reverseNumber() {
    // Write your code here
    int n;
    cin >> n;
    int output = 0;
    while(n >0){
        int d = n%10;
        n = n/10;
        cout << output << "current out put"<< endl;
        output = output *10+d;
    }
    cout << output << "Data";
}
