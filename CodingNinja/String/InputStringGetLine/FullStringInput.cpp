//
//  FullStringInput.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "FullStringInput.hpp"
#include <iostream>
using namespace std;

void fullstringPrint() {
    char data[100];
    cout << "Enter new :";
    cin.getline(data, 4);
    cout << data << endl;
    
}
/*
 cin.getline(array, size)
 if the size of array is less than input it will count till the size -1 and put null char at the end of the string
 
 if cin.getline(data,4) = veer
 output will be: vee not veer

 
 
 
 
 */
