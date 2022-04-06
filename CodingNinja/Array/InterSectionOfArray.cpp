//
//  InterSectionOfArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 06/04/22.
//

#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;


void intersectionArray(int size1 , int *arr1, int size2, int *arr2) {
    
    for (int i = 0; i<size1; i++) {
        for (int j = 0; j< size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i];
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

//dunzo


void duplicateNumber(int *arr, int size)
{
    //Write your code here
    
    // x = {}
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j<i; j++) {
            if (i==j) {
                continue;
            }
            if (arr[i] == arr[j]) {
                cout << arr[i];
                break;
            }
        }
    }
}


int main() {
    
    
    int a[] = {0, 7, 2, 5, 4, 7, 1, 3, 6};
    duplicateNumber(a, 9);
}
