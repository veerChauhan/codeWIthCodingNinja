//
//  LastIndexInArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 03/06/22.
//

#include "LastIndexInArray.hpp"
#include <iostream>

using namespace std;

int findLastIndexInArrayIterative(int *arr, int size, int element){
    
    int current = -1;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            current = i+1;
        }
    }
    return  current;
}
int findLastIndexInArrayRecursivly(int *arr, int size, int element) {
    
    
    return 0;
}
