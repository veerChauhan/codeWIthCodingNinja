//
//  String.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "String.hpp"
#include <iostream>
using namespace std;


/*
 find length of the string
 */

int count_char(char *arr, int size) {
    int count = 0;
    
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    
    return count;
}


// Check a string is palindrom or not


bool check_palindrom(char *input) {
    
    bool isPalindrom;
    
    
    return isPalindrom;
}

int main() {
    char name [100];
    cout << "Enter your name : ";
    cin >> name ;
    cout << "Address of Name " << &name << endl;
    cout <<"Your name is  :: " << name << endl;
    cout << "Number of charecter in string is : "<< count_char(name, 5) <<endl;
    
    
        
}
