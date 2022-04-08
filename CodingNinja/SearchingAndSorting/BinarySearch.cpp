//
//  BinarySearch.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 08/04/22.
//

#include "BinarySearch.hpp"
#include <iostream>
using namespace std;

int binarySearch(int size, int *arr, int element) {
    
    
    int start = 0;
    int end = size-1;
    while (start < end) {
        int mid = (start +  end) /2;
        if (arr[mid] == element) {
            return mid;
        }
        else {
            if (arr[mid] > element) {
                start = mid -1;
            } else {
                end = mid +1;
            }
        }
    }
    
    return  -1;
}

void main_bainary_Search (){
    
    int n;
    cout << "Enter the size of the array for binary Search : " ;
    cin >> n;
    int input[100];
    
    for (int i = 0; i<n; i++) {
        cin >> input[i];
    }
    cout << "is Bianry: " << binarySearch(n, input, 10);
    cout << endl;
}
