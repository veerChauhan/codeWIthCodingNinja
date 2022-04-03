//
//  LinierSearch.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 02/04/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int x)
{
    int result = -1;
    
    for (int i = 0; i<n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return result;
}

int LinierSearch(){
    
    int a[1000001];
    cout <<"Address of a is  : " << a<< endl;
    cout << "Enter the size of Array : ";
    int size;
    
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "Enter array element at position " << i+1 << " : ";
        cin >>a[i];
    }
    
    cout << linearSearch(a, size, 6);
    
    cout << endl << endl;
    return linearSearch(a, size, 6);
    
}

