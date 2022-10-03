#ifndef INCOMETAX_H
#define INCOMETAX_H

class incomeTax{

    public:
    //constructor functions to intialize variables
    incomeTax(double input_income, double FT1, double FT2, double FT3, double FT4, double PT1, double PT2, double PT3, double PT4, double PT5, double PT6, double PT7, double TotalF, double TotalP );
    incomeTax();
    //getter and setter functions
    int getIncome();
    void setIncome(double set_income);
    //input and output functions 
    void input();
    void output();
    //tax calculation functions
    void federalTax();
    void provincialTax();
    // refresh function to set variables equal to zero
    void refresh();

    private:
    //Private variables for tax brackets and total tax owed
    double income;
    double F1;
    double F2;
    double F3;
    double F4;
    double totalF;
    //Private variables for provincial tax brackets
    double P1;
    double P2;
    double P3;
    double P4;
    double P5;
    double P6;
    double P7;
    double totalP;

};

#endif