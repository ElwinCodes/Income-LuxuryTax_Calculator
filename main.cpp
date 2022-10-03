#include <iostream>
#include "incomeTax.hpp"
#include "luxuryTax.hpp"
using namespace std;

int main (){

    incomeTax initialT;
    luxuryTax initialL;

    int input; 

    cout << "Hello and welcome to the Income and Luxury Tax Calculator" << endl;
    while (true){
        cout << "\nPlease choose what you would like to calculate today!" << endl;
        cout << "1. Income Tax \n" << "2. Luxury Tax " << endl;

        cin >> input;

        switch(input){
            case 1:
            //call function Income Tax
            initialT.refresh();
            initialT.input();
            initialT.federalTax();
            initialT.provincialTax();
            initialT.output();
            break;

            case 2:
            initialL.input();
            initialL.calculate();
            initialL.output();
            // Call function Luxury Tax
            break;

            default:
            cout << "You have entered an invalid input" << endl;
            exit(1);
            break;
        }
    }
    return 0;
    


}