//
//  pattern16.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 20/03/22.
//
/*
 
 Pattenrn Print:
 
 *
 ***
 *****
 *******
 *****
 ***
 *
 */

#include <stdio.h>
#include <iostream>
using namespace std;


void pattern18(){
    
    cout << "Enter the height of the pattern: ";
    
    
    int n;
    cin >> n;
    int i = 1;
    int start = (n+1)/2;
    int end = n -start;
     while(i<=start){
        int j = 1;
        while(j<=start - i){
            cout << " ";
            j++;
        }
        int k = 1;
        int value = 2*i-1;
        while (k <=value) {
            cout <<"*";
            k++;
        }
        cout<< endl;
        i++;
    }
    
    i = 1;
    
    while (i < n /2) {
        
        int space = 1 ;
        
        while (space <= i) {
            cout << "-";
            space ++;
        }
        cout << endl;
        
        i++;
    }
     i = 1;
    while(i < 3) {
        int j = 0;
        while(j < 5) {
            j++;
            if(j == 3) {
                continue;
            }
            cout << j << " ";
        }
        i++;
    }
}

