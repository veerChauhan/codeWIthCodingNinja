//
//  ValidSequence.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 30/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void testProblem4() {
    // Write your code here
    
    
    cout << "Enter the strean count : " ;
    int streamCount;
    cin >> streamCount;
    int n1;
    //take n2 as a second largest
    int n2;
    
    
    cin >> n1;
    cin >> n2;
    
    int secoundLargest= 0;
    int largest = 0;
    
    
    
    if (n1>n2) {
        secoundLargest = n2;
        largest = n1;
        
    } else if( n1==n2 || n1 < n2) {
        secoundLargest = n1;
        largest = n2;
        
    }
    
//    cout << largest << " is the largest " << secoundLargest << " is the scound largest" << endl;
    int i = 1;
    while (i<= streamCount-2) {
        int input;
        cin >> input;
        if (input > secoundLargest) {
            if (input > largest) {
                int temp = largest;
                largest = input;
                secoundLargest = temp;
            } else if (input == largest) {
                largest = input;
            }
            else {
                secoundLargest = input;
            }
        }
        i++;
    }
    
    cout <<  secoundLargest;
}

/*
   1
  212
 32123
4321234
 */
