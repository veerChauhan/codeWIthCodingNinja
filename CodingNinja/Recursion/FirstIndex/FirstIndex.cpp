//
//  FirstIndex.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 02/06/22.
//

#include "FirstIndex.hpp"
#include <iostream>
using namespace std;


int returnFirstIndexOfElementIterative(int * arr, int element, int size) {
    
    int i = 0;
   
    while (i < size) {
        if (arr[i] == element) {
            return  i+1;
        }
        i++;
    }
    
    return  -1;
}


int returnFirstIndexOfElementRecursivly(int * arr, int element, int size) {
    
    
    if (size <= 0) {
        return  -1;
    }
    if (arr[0] == element) {
        return 0 ;
    }
    
    int ans = returnFirstIndexOfElementRecursivly(arr + 1, element, size -1);
    if (ans  == -1) {
        return -1;
    } else {
        return  ans + 1;
    }
    
}
