//
//  Replace_occurance_with_char.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "Replace_occurance_with_char.hpp"



#include <iostream>
using namespace std;


void replace_string_occurance(char * input, char  c1, char c2) {

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == c1) {
            input[i] = c2;
        }
    }
    cout << "Operation end"<<  endl;
}
