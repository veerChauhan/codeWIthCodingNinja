//
//  AllPrefix.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 26/04/22.
//

#include "AllPrefix.hpp"
#include <iostream>
using namespace  std;

void printAllPrefix(char *input) {
    for (int i =0; input[i]!='\0'; i++) {
        for (int j= 0; j<=i; j++) {
            cout<<input[j] ;
        }
        cout <<  endl;
    }
}
/*
 
 input -> abcd
 a
 ab
 abc
 abcd
 
 */

