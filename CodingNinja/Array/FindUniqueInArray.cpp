//
//  FindUniqueInArray.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 06/04/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//we can add array with pointer  eg : int *arr or int arr[]
void findUnique(int *arr, int size)
{
    //Write your code here
    
    // x = {0 7 2 5 4 7 1 3 6}

    // x = {0 7 2 5 4 7 1 3 6}

    for (int i = 0; i< size; i++) {
         int count = 0;
        for (int j = 0; j< size; j++) {
           if(i==j)
           {
               continue;
           }
            if (arr[i] == arr [j]) {
                count++;
            }
        }
        if(count==0)
        {
            cout << arr[i] << " Is the unique ";
        }
        
    }
}

void unique(){
    
    int n;
    cout << "Enter the size of the array : " ;
    cin >> n;
    int input[100];
    
    for (int i = 0; i<n; i++) {
        cin >> input[i];
    }
    cout << endl;
    
    
    
    findUnique(input, n);
    cout << endl << endl;
    
    
    
    cout << endl;
}
