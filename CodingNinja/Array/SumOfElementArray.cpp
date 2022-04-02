//
//  SumOfElementArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 02/04/22.
//

#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int input[100];
    int result = 0;
    cout << "Enter the size of Array : ";
    int size;
    cin >> size;
    for (int i = 0; i<size; i++) {
        cout << "Input element at position " << i+1 << " : ";
        cin >> input[i];
    }
    for (int i = 0; i < size; i++) {
        result = result + input[i];
    }
    cout << "Sum of element are : " << result <<endl ;
}
