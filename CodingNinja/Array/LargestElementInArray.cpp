//
//  LargestElementInArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 01/04/22.
//

#include <stdio.h>
#include <climits>
#include <iostream>
using namespace std;

int MAX_Element_Array(){
    
    
    cout << "Enter your array : ";
    int n;
    cin >> n;
    int input[100];
    for (int i = 0; i<n; i++) {
        cout << "Enter "<< i+1<< " value " << " : ";
        cin >>input[i];
    }
    int max = INT_MIN;
    
    for (int i = 1; i < n; i++) {
        if (input[i] > max) {
            max = input[i];
        }
    }
    cout<< "MAX : " << max << endl;
    return  max;
    
}
