#include <iostream>
#include "luxuryTax.hpp"
using namespace std;


//contructor functions for luxury tax
luxuryTax::luxuryTax(double price, double _result, double _FinalPrice, double _PriceA, double _PriceB){
    PriceOfObject = price;
    result = _result;
    FinalPrice = _FinalPrice;
    PriceA = _PriceA;
    PriceB = _PriceB;
}

//defualt constructor function
luxuryTax::luxuryTax(){
    PriceOfObject = 0;
    result =0;
    FinalPrice = 0;
    PriceA = 0;
    PriceB = 0;
}

//input function to take input from user and set equal to PriceOfObject
void luxuryTax::input(){
    cout << "Please enter in the price of the object: " << endl;
    cin >> PriceOfObject;
}

//calculate function to calculate amount of taxes owed depedning on price of object
void luxuryTax::calculate(){

  if(PriceOfObject > 100000){
    
    PriceA = PriceOfObject * 0.10;
    PriceB = (PriceOfObject - 100000)* 0.20;    
    
    if (PriceA < PriceB){
      result = PriceA;
      cout << "Method of using total taxable amount by 10%% has been applied\n" << endl;
      
    } else if (PriceA > PriceB){  
      result = PriceB;
      cout << "Method of multiplying the difference of 100,000 by 20%% has been applied\n" << endl;
    } else if (PriceA == PriceB ){
        result = PriceA;
        cout << "Both methods can be used: Method of using total taxable amount by 10%% has been applied\n ";
    } else if (PriceOfObject < 100000) {
        cout << "Luxury Tax does not apply to items under $100,000\n" << endl;
 
    } 
    cout << PriceA << PriceB << endl;
    FinalPrice = result + PriceOfObject;
    cout << "\nThe price of the taxes will come out to be $"<<result << ", and the total purchase price will be $" << FinalPrice << "\n" << endl;

  } else {
        cout << "invalid input    exiting program..." << endl;
        exit(1);  
    }
}

//extra output function for additional information
void luxuryTax::output(){
    //something here 
}
