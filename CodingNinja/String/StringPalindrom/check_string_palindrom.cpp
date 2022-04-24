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


bool check_string_palindrom(char *input) {
    
    // Take a variable to return the result
    bool isPalindrom = false;
    
    //get the size of string first by counting number of charecter untill null charecter found
    // for(int i = 0; input[i] == '\0' ; i++)
    int size = count_char(input);
    // check from start and end with size n/2 so that we can move  half form left and half from right
    // odd charecter count and single charecter case are handled from here int j = size - i - 1
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
