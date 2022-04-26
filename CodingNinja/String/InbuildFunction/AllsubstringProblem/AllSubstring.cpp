//
//  AllSubstring.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 26/04/22.
//

#include "AllSubstring.hpp"
#include "AllPrefix.hpp"

#include <iostream>
using namespace std;


void print_all_substring(char * input) {
    
    
    float f = 10.5;
    float p = 2.5;
    float * ptr = &f;
    (*ptr)++;
    cout << *ptr << " " << ptr << endl;

    
    *ptr = p;
    cout << *ptr << " " << f << " " << p <<  endl;

  
}

/*
 input -> abcd
 a
 ab
 abc
 abcd
 b
 bc
 bcd
 c
 cd
 d
 */
