//
//  DynamicAllocation.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 05/05/22.
//

#include "DynamicAllocation.hpp"
#include <iostream>
using namespace std;

int main() {
    
    
    cout << "Enter your size of array" << endl;
    
    int size;
    
    cin >> size ;
    
    int *arr = new int [size];
    
    for (int i= 0; i < size; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }
    
    
    for (int i = 0; i< size; i++) {
        cout << arr[i] << endl;
        
    }
}
