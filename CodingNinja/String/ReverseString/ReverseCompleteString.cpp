//
//  ReverseCompleteString.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 25/04/22.
//

#include "ReverseCompleteString.hpp"
#include "Count_charecter_in_String.hpp"

#include <iostream>
#include <cstring>


using namespace  std;

void reverse_complete_string(char *input){
    
//    int character_count = count_char(input);
    int character_count = strlen(input);

    cout << character_count << endl;
    
    for (int i = 0; i < character_count / 2; i++) {
        int j = character_count - i -1;
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
    cout << "Output is :" << input << endl;
     
    
    // with while loop
    
//    int i  = 0;
//    int j  = character_count - 1;
//    while (i <=j) {
//        char temp = input[i];
//        input[i] = input[j];
//        input[j] = temp;
//        i++;
//        j--;
//    }
//    cout << "Output is :" << input << endl;


}
