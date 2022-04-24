//
//  Count_charecter_in_String.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "Count_charecter_in_String.hpp"
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
