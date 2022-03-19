//
//  salaryCalculator.cpp
//  CodingNinja
//
//  Created by Ravi Ranjan on 19/03/22.
//

#include <stdio.h>
#include <iostream>
using namespace std;
void salart_cal() {
    int basic_salary;
    char grade;
    double hra, da, allow, pf;

    cout << "Enter basic salary : " ;
    cin >> basic_salary;
    cout << "Enter Grader : ";
    cin >> grade;
    
    if(grade == 65){
        allow = 1700;
    } else if(grade == 66){
        allow = 1500;
    } else {
        allow = 1300;
    }
    pf = (basic_salary * 11)/100;
    da = (basic_salary * 50)/100;
    hra = (basic_salary * 20)/100;
    int total_salary = basic_salary + hra + da + allow - pf;
    cout << total_salary << endl;
}
