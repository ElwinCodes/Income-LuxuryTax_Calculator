#include <iostream>
#include "luxuryTax.hpp"
using namespace std;

luxuryTax::luxuryTax(double price){
    PriceOfObject = price;
}

luxuryTax::luxuryTax(){
    PriceOfObject = 0;
}

void luxuryTax::input(){
    cout << "Please enter in the price of the object: " << endl;
    cin >> PriceOfObject;
}

void luxuryTax::calculate(){

  double result; 
  double FinalPrice;
  double PriceA;
  double PriceB;
  

  if(PriceOfObject > 100000){
    
    PriceA = PriceOfObject * 0.10;
    PriceB = (PriceOfObject - 100000)* 0.20;    
    
    if (PriceA < PriceB){
      result = PriceA;
      cout << "Method of using total taxable amount by 10%% has been applied\n" << endl;
      
    } else if (PriceA > PriceB){  
      result = PriceB;
      cout << "Method of multiplying the difference of 100,000 by 20%% has been applied\n" << endl;
    } else if (PriceOfObject < 100000) {
        cout << "Luxury Tax does not apply to items under $100,000\n" << endl;
 
    } 
    FinalPrice = result + PriceOfObject;
    cout << "\nThe price of the taxes will come out to be $"<<result << ", and the total purchase price will be $" << FinalPrice << "\n" << endl;

  } else {
        cout << "invalid input    exiting program..." << endl;
        exit(1);  
    }
}
void luxuryTax::output(){
    //something here 
}
