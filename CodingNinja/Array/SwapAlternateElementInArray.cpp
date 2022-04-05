//
//  SwapAlternateElementInArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 06/04/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;


void swapAleternateElementInArray(int n, int arra[]) {
    
    int i = 0;
    while (i < n-1) {
        int temp = arra[i];
        int next = arra[i+1];
        arra[i] = next;
        arra[i+1] = temp;
        i = i+2;
    }
    
    for (int i  = 0; i < n-1; i = i+2) {
        int temp = arra[i];
        int next = arra[i+1];
        arra[i] = next;
        arra[i+1] = temp;
    }
    
    
    
}
int main(){
    
    int n;
    int input[100];
    cout << "Enter size of the array : ";
    cin >> n;
    cout << endl;
    for (int i = 0; i <n; i++) {
        cin >> input[i];
    }
    
    swapAleternateElementInArray(n, input);
    
    for (int i = 0; i<n; i++) {
        cout << input[i] << " "  ;
    }
    
}
