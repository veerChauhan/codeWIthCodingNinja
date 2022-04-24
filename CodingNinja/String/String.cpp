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

using namespace std;
// Check a string is palindrom or not

// Check a Number is palindrom or not

int main() {
    char name [100];
    string  my_name;
    
    cout << my_name << " is my name" << endl;
    int number;
    cout << "Enter number to check it is palindrom or not : ";
    cin >> number;
    cout << check_number_palindrom(number) <<" number is " << check_number_palindrom(number)<< " palindrom " << endl;
    cout << "Enter your name : ";
    cin >> name ;
    cout << "Address of Name " << &name << endl;
    cout <<"Your name is  :: " << name << endl;
    cout << "Number of charecter in string is : "<< count_char(name, 5) <<endl;
    
    
        
}
