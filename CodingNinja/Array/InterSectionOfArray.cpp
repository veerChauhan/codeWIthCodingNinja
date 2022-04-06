//
//  InterSectionOfArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 06/04/22.
//

#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;


/*
 2,4,6
 3,4,5
 1 4,7
 1 5 6
 */
int tripletSum(int *input, int size, int x)
{
    
    
    int count = 0;
    for (int i = 0; i<size; i++) {
        for (int j= i; j<size; j++) {
            if (i==j) {
                continue;
            }
            for (int k = j; k<size; k++) {
                if (k == j) {
                    continue;
                }
                if (input[i] + input[j] + input[k] == x) {
                    count++;
                }
            }
        }
    }
    
    return  count;
    
    //Write your code here
}
void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    // input = {0,1,1,1,0,0,1,0,1,0,1}
    
    int count = 0;
    for (int i = 0; i<size; i++) {
        if (input[i] == 0) {
            count++;
        }
    }
    for (int i = 0; i<count; i++) {
        cout << "0" << " ";
    }
    for (;count< size; count++) {
        cout << "1" << " ";
    }
    

}



int pairSum(int *input, int size, int x)
{
    //count of number of pair which can go for sum
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (i == j) {
                continue;
            }
            if (input[i] + input[j] == x) {
                count ++;
            }
        }
    }
    return count;
}

void intersectionArray(int size1 , int *arr1, int size2, int *arr2) {
    
    for (int i = 0; i<size1; i++) {
        for (int j = 0; j< size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i];
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

//dunzo


void duplicateNumber(int *arr, int size)
{
    //Write your code here
    
    // x = {}
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j<i; j++) {
            if (i==j) {
                continue;
            }
            if (arr[i] == arr[j]) {
                cout << arr[i];
                break;
            }
        }
    }
}


int main() {
    
    int zeroOne[] = {0,1,1,1,0,1,0,1,0,1,0,1,1,1};
//    int a[] = {0, 7, 2, 5, 4, 7, 1, 3, 6};
    
    sortZeroesAndOne(zeroOne, 14) ;
}
