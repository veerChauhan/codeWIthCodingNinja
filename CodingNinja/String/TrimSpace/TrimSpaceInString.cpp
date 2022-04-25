//
//  TrimSpaceInString.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "TrimSpaceInString.hpp"
#include "Count_charecter_in_String.hpp"

#include <iostream>
using namespace  std;

void trimSpaceInString(char * input) {
    
    int size = count_char(input);
    int i = 0;
    while (input[i] != '0') {
        cout << input[i] << endl;
        if (input[i] == '\0') {
            for (int j = i+1; j < size; j++) {
                input[i]= input[j];
            }
        }
        i++;
    }
}
