//
//  PointerArthemetics.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 27/04/22.
//

#include "PointerArthemetics.hpp"
#include <iostream>
using namespace std;


void sizeOfPointerWithDataType() {
    cout << "The size of pointer for every data type is of 8 Bytes Generally" << endl << endl;
    int *intPointerSize;
    cout <<"Int : " <<  sizeof(intPointerSize)<< endl;
    float *floatPointerSize;
    cout << "Float : " <<sizeof(floatPointerSize) << endl;
    double *doublePointerSize;
    cout << "Double : " << sizeof(doublePointerSize) << endl;
    char *charPointeSize;
    cout << "Char : "<<  sizeof(charPointeSize) << endl;
    char *boolPointerSize;
    cout << "Bool : "<<  sizeof(boolPointerSize) << endl;

}

void pointer_referncing() {
    int i = 10;
    int *p = &i;
    cout << p <<  " Is the location of integer I " <<endl;
    cout << &i <<  " Is the location of Integer i " <<endl;
    cout << &p << " Is the location of pointer variable it is different from p address" << endl;
    cout << *p << " value of i here we are dererencing the pointer and getting the value which is stored " << endl;
}
void pointer_arthmetics() {

    pointer_referncing();
    sizeOfPointerWithDataType();

    
}
