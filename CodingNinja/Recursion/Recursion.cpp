//
//  Recursion.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 07/05/22.
//

#include "Recursion.hpp"
#include <iostream>

using namespace std;

void factorial() {
    int n;
    cout << "Enter your number to get factorial : ";
    cin >> n;
    cout << endl;
    cout << "Iterative apporach : Factorial is " <<  i_Factorial(n) << endl;
    cout << "Recursive apporach : Factorial is " <<  r_Factorial(n) << endl;
}

void powerBase() {
    int base, pow;
    cout << "Enter your base and pow : ";
    cin >> base >> pow ;
    cout << endl;
    cout << "Iterative apporach : powe is " <<  i_power(base, pow)<< endl;
    cout << "Recursive apporach : power is " <<  r_power(base, pow)<< endl;
}
int main() {
    cout << "Recursion" << endl;
    
    powerBase();
//    factorial();
}


