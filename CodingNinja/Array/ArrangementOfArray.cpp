//
//  ArrangementOfArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 03/04/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;


void arrangeArray(int * arr, int n){
    int firstHalfSize = (n- 1) /2;
    int val = 1;
    for (int i = 0; i <=firstHalfSize; i++) {
        arr[i]= val;
        val = val + 2;
    }
    if (n%2 == 0) {
        val = val -1;
    } else {
        val = val-3;
    }
    for (int i = firstHalfSize+1; i<=n; i++) {
        arr[i] = val;
        val= val -2;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}
void arrangeNum() {
    
    int size;
    cout << "Enter the size of Array : ";
    cin >> size;
    
    int inputArray[100000];
    
    arrangeArray(inputArray, size);
}
