//
//  String.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "String.hpp"
#include <iostream>
#include "number_palindrom.hpp"
#include "Count_charecter_in_String.hpp"
#include "check_string_palindrom.hpp"


using namespace std;
// Check a string is palindrom or not

// Check a Number is palindrom or not

int main() {
    
    char name [100];
    cout << "Enter your name : ";
    cin >> name ;
    cout << check_string_palindrom(name) << " is " << endl;
        
}
