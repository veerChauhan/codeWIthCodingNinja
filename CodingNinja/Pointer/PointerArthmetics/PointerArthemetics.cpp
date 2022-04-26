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
void pointer_arthmetics() {

    sizeOfPointerWithDataType();

    
}
