#include <iostream>
#include "incomeTax.hpp"
using namespace std;


incomeTax::incomeTax(double new_income, double FT1, double FT2, double FT3, double FT4, double PT1, double PT2, double PT3, double PT4, double PT5, double PT6, double PT7, double TotalF, double TotalP){
    income = new_income;
    //Federal Tax bracket
    F1 = FT1;
    F2 = FT2;
    F3 = FT3;
    F4 = FT4;
    totalF = TotalF;
    totalP = TotalP;
    //Provincial Tax bracket
    P1 = PT1;
    P2 = PT2;
    P3 = PT3;
    P4 = PT4;
    P5 = PT5;
    P6 = PT6;
    P7 = PT7;
}

incomeTax::incomeTax(){
    income = 0;
    F1 = 0;
    F2 = 0;
    F3 = 0;
    F4 = 0;
    P1 = 0;
    P2 = 0;
    P3 = 0;
    P4 = 0;
    P5 = 0;
    P6 = 0;
    P7 = 0;
    totalF = 0;
    totalP = 0;

}

int incomeTax::getIncome(){
    return income;
}

void incomeTax::setIncome(double setIncome){
    income = setIncome;

}

void incomeTax::input(){
    cout << "Please enter in your personal income" << endl;
    cin >> income;
    
}
void incomeTax::output(){
    cout << "Your income before taxes is: "<< income<< "\nFederal Taxes: " << totalF << "\nProvincial Taxes: " << totalP << "\nYour final income is " << income-totalP-totalF << endl;
}
void incomeTax::calculate(){
    cout.precision(10);
    cout << "your personal income is " << income << endl;
}

void incomeTax::federalTax(){

    if(income >= 0 && income <= 49020){
        F1 = income * 0.15;
    } 
    if ( income > 49020 && income <= 98040){
        F2 = (income - 49020) * 0.2050;
    } 
    if ( income > 98040 && income <= 151978){
        F3 = (income-98040) * 0.26;
    } 
    if (income >151978 && income <= 216511){
        F4 = (income - 151978) * 0.33;
    }

    totalF = F1+F2+F3+F4;
    cout << "Total federal Tax contributions are: " << totalF << endl;

}

void incomeTax::provincialTax(){
    if (income >= 0 || income <= 42184){
        P1 = income * 0.0506;
    } 
    if (income >= 42185 || income <= 84369){
        P2 = (income - 42184) * 0.0770;
    } 
    if (income >= 84370 || income <= 96866){
        P3 = (income - 84370) * 0.1050;
    } 
    if (income >= 96867 || income <= 117623){
        P4 = (income - 96867) * 0.1229;
    } 
    if (income >= 117624 || income <= 159483){
        P5 = (income - 117623) * 0.1470;
    } 
    if (income >= 159484 || income <= 222420){
        P6 = (income - 159483) * 0.1680;
    } 
    if ( income > 222420) {
        P7 = (income - 222420) * 0.2050;
    }

    totalP = P1+P2+P3+P4+P5+P6+P7;

    cout << "Total Provincial Tax contributions are: " << totalP << endl;
}
