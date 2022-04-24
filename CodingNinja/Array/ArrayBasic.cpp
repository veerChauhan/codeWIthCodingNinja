//
//  ArrayBasic.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 05/04/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;


int helloMe(int a, int b[]) {
    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;
    cout << "Value of b : " << b[0] << endl;

    b++;
    cout << "Value of b : " << b << endl;
    cout << "Value of b : " << b[0] << endl;


    return 1;
}


void reverseArray(int b[], int h) {
    cout << b << " Is the address" << endl;
    cout << h << " Is the size" << endl;
    for (int i = 0; i < h -1; i ++) {
        int temp = b[i];
        b[i] = b[h-i];
        b[h-i] = temp;
    }

    
}

void arraBasic() {
    
    int b[9] = {2,3,5,7,3,2,6,7,4};
    cout << sizeof(b)/4 << endl;
    for (int i = 0; i <=  sizeof(b) / 4; i++) {
        cout << "At position -> " << i << " value is : "<<  b[i] << endl;
    }
    reverseArray(b, sizeof(b) /4);
    for (int i = 0; i <=  sizeof(b) / 4; i++) {
        cout << "At position -> " << i << " value is : "<<  b[i] << endl;
    }
}

