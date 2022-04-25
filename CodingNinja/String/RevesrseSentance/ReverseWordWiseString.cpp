//
//  ReverseWordWiseString.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "ReverseWordWiseString.hpp"
#include "ReverseCompleteString.hpp"

#include <iostream>
#include <cstring>
using namespace std;


void reverse_string_with_word(char *input){
    
    reverse_complete_string(input);
    int left = 0;
    int x = 0;
    int right;
    while (input[x] == ' ') {
        right = x - 1;
        while (left < right) {
            int temp = input[left];
            input[left] = input[right];
            input[right] = temp;
        }
        left = right + 1;
        x++;
    }
    cout << endl;
    cout << input;
    
    
}

