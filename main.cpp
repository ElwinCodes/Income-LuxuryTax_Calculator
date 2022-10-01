#include <iostream>
#include "incomeTax.hpp"
#include "luxuryTax.hpp"
using namespace std;

int main (){

    incomeTax initialT;

    int input; 

    cout << "Hello and welcome to the Income and Luxury Tax Calculator" << endl;
    cout << "Please enter what you would like to calculate today!" << endl;
    cout << "1. Income Tax \n" << "2. Luxury Tax " << endl;

    cin >> input;

    switch(input){
        case 1:
        //call function Income Tax
        initialT.input();
        initialT.calculate();
        initialT.output();
        break;

        case 2:
        // Call function Luxury Tax
        break;

        default:
        cout << "You have entered an invalid input" << endl;
    }
    return 0;
    


}