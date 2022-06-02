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
int lastIndex(int input[], int size, int x) {
  
      if(size==0)
        return -1;
    if(size==1){
        if(input[0]==x)
            return 0;
        else
            return -1;
    }
    int ans=lastIndex(input+1,size-1,x);
    if(ans==-1){
        if(input[0]==x)
            return 0;
        else
            return -1;
    }
    else
        return ans+1;
}

