#include <iostream>
#include "luxuryTax.hpp"
using namespace std;

luxuryTax::luxuryTax(double price){
    priceofobject = price;
}

luxuryTax::luxuryTax(){
    priceofobject = 0;
}

void luxuryTax::input(){
    cout << "Please enter in the price of the object: " << endl;
    cin >> priceofobject;
}

void luxuryTax::calculate(){
    //something here 
}
void luxuryTax::output(){
    //something here 
}