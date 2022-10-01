#ifndef LUXURYTAX_H
#define LUXURYTAX_H

class luxuryTax{
    public:
    luxuryTax(double price);
    luxuryTax();
    void input();
    void output();
    int getPrice();
    void setPrice();
    void calculate();

    private:
    double PriceOfObject;


};



#endif