//
//  Recursion.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 07/05/22.
//

#include "Recursion.hpp"
#include <iostream>
#include "NumberTillN.hpp"
#include "Factorial.hpp"
#include "Power.hpp"
#include "DigitInNumber.hpp"
#include "Fibonaci.hpp"


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

void numberTillN() {
    int n;
    cout << "Enter your number to get printed till : ";
    cin >> n;
    cout << "Iterative apporach : Print number is "  << endl;
    i_printTillN(n);
    cout << "Recursive apporach : Print number is "  << endl;
    r_printTillN(n);
}



void digitInNumberCount() {
    int n;
    cout << "Enter your number to count the digit : ";
    cin >> n;
    cout << "Iterative apporach : Print number  count:  "<< i_digitInNumber(n) << endl;
    
    cout << "Recursive apporach : Print number count :  " << r_digitInNumber(n)  << endl;
    
}

void nThFib() {
    int n;
    cout << "Enter your number to find fiboncaci : ";
    cin >> n ;
    cout << endl;
    cout << "Iterative apporach : nth fib " <<  i_NthFib(n)<< endl;
    cout << "Recursive apporach : nth fib is " << r_NthFib(n) << endl;
}
int main() {
    cout << "Recursion" << endl;
    
    
    nThFib();
    
//    digitInNumberCount();
//    numberTillN();
//    powerBase();
//    factorial();
}


