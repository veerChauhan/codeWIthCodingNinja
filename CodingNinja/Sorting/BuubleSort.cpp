//
//  BuubleSort.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 08/04/22.
//

#include "BuubleSort.hpp"
#include <iostream>
using namespace std;


void bubble_sort(){
    
//    ex: {1,5,3.7,6,22,55,33,4,222}
//    result: 1,3,4,5,6,7,22,33,55,222
    
    int input[] = {1,5,3,7,6,22,55,33,4,222};
    int size = 10;
    for (int j = 0; j < size -1; j++) {
        for (int i = 0; i<size-1; i++) {
            if (input[i] > input [i+1]) {
                int temp = input[i];
                input[i] = input[i+1];
                input[i+1] = temp;
            }
        }
    }
    
 }
int main() {
    
    selection_sort();
    
}
