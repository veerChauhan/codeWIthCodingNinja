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
#include "Replace_occurance_with_char.hpp"
#include "FullStringInput.hpp"
#include "ReverseCompleteString.hpp"
#include "TrimSpaceInString.hpp"
#include "ReverseWordWiseString.hpp"


//Inbuilt function
#include "strlen.hpp"
#include "StringCompare.hpp"
#include "AllPrefix.hpp"
#include "AllSubstring.hpp"




using namespace std;
// Check a string is palindrom or not

// Check a Number is palindrom or not

int main() {
    
    // When we try to input string more than its size it will accept but when we try to print it it can get crash
    // see belo example
    char input_string [100];
    cout << "Enter your string : ";
    cin.getline(input_string, 100) ;
    print_all_substring(input_string);
    

}
