//
//  FIndNumber.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 27/05/22.
//

#include "FIndNumber.hpp"
#include <iostream>
using namespace std;

bool checkNumberIterative(int input[], int size, int x) {
    bool result = false;
    for (int i = 0; i< size; i++) {
        if (input[i] == x) {
            return  !result ;
        }
    }
    return  result;
}


bool checkNumberRecursive(int input[], int size, int x){
    cout << "Number checking" << input[size] << endl;
    if (size == 0) {
        return  false;
    }
    if (input[size] == x) {
        return true;
    }
    return checkNumberRecursive(input, size -1 , x) ;
}
bool checkNumberRecursiveFromStart(int input[], int size, int x){
    cout << "Number checking : " << input[0] << endl;
    if (size == 0) {
        return  false;
    }
    if (input[0] == x) {
        return true;
    }
    return checkNumberRecursive(input+1, size -1 , x) ;
}
