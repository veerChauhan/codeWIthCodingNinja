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


bool check_string_palindrom(char *input) {
    
    bool isPalindrom;
    
    
    // abcdbca -> false
    // abcdcba  -> True
    // a ->  true
    // aba -> true
    // ab -> false
    
    
    return isPalindrom;
}


// Check a Number is palindrom or not


bool check_number_palindrom(int input) {
    
    bool isPalindrom = false;
    
    
    // 11111111 -> true
    // 121  -> True
    // 1 ->  true
    // 1234213 -> false
    // 2133321 -> false
    
    
    int verifier  = input;
    
    int data = 0;
    while (input > 0) {
        int num = input % 10;
        input = input / 10;
        data = data * 10 + num;
    }
    if (verifier == data) {
        isPalindrom = true;
    }
    return isPalindrom;
}



int main() {
    char name [100];
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
