//
//  check_string_palindrom.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "check_string_palindrom.hpp"
#include <iostream>
#include "Count_charecter_in_String.hpp"
using namespace std;

bool check_string_palindrom_Approach(char *input) {
    
    bool isPalindrom = false;
    int size = count_char(input);
    // naive approach
    
    
    isPalindrom = true;
        
        
        
    // abcdbca -> falsee
    // abcdcba  -> True
    // a ->  true
    // aba -> true
    // ab -> false
    
    
    return isPalindrom;
}


bool check_string_palindrom(char *input) {
    
    bool isPalindrom = false;
    int size = count_char(input);
    // naive approach
    
    // check from start and end with size n/2
    for (int i = 0; i < size / 2; i++) {
        int j = size - i - 1 ;
        cout << input[i] << " and " << input[j] << endl;
        if (input[i] == input[j]) {
            cout << input[i] << " and " << input[j] << endl;
            
        }
        else {
            return  isPalindrom;
        }
    }
    isPalindrom = true;
        
        
        
    // abcdbca -> falsee
    // abcdcba  -> True
    // a ->  true
    // aba -> true
    // ab -> false
    
    
    return isPalindrom;
}
