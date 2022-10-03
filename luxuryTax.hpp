#ifndef LUXURYTAX_H
#define LUXURYTAX_H

class luxuryTax{
    public:
    //constructor functions
    luxuryTax(double price, double _result, double _FinalPrice, double _PriceA, double _PriceB);
    luxuryTax();
    //input and output functions
    void input();
    void output();
    //getter and setter functions
    int getPrice();
    void setPrice();
    //calculate function for tax
    void calculate();

    private:
    double PriceOfObject;
    double result; 
    double FinalPrice;
    double PriceA;
    double PriceB;


};



#endif