#include <iostream>
#include "incomeTax.hpp"
using namespace std;


incomeTax::incomeTax(double new_income){
    income = new_income;
}

incomeTax::incomeTax(){
    income = 0;
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
    cout << "this is the output" << endl;
}
void incomeTax::calculate(){
    cout.precision(10);
    cout << "your personal income is " << income << endl;
}
