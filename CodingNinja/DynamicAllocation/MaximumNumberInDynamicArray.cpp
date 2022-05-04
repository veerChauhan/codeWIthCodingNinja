//
//  MaximumNumberInDynamicArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 05/05/22.
//

#include "MaximumNumberInDynamicArray.hpp"
#include <iostream>
using namespace std;

void maximumNumber() {
    
    int n;
    cout <<  "Enter the size of you array :  " ;
    cin >> n;
    
    
    // declaring the poimter of size n
//    here new is the keyword for address of type int array which will point the address of first element
    int * array = new int [n];
    int max = -1;
    for (int i = 0 ; i < n; i++) {
        cin >> array[i];
    }
    
    cout << endl;
    cout << "Array input is done, now check the max in given number" << endl;
    
    
    for (int i = 0; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    cout << "Max number in array is : " << max << endl;
    
    
}
