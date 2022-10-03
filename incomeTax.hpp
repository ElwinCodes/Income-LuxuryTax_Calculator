#ifndef INCOMETAX_H
#define INCOMETAX_H

class incomeTax{

    public:
    incomeTax(double input_income, double FT1, double FT2, double FT3, double FT4, double PT1, double PT2, double PT3, double PT4, double PT5, double PT6, double PT7, double TotalF, double TotalP );
    incomeTax();
    int getIncome();
    void setIncome(double set_income);
    void input();
    void output();
    void calculate();
    void federalTax();
    void provincialTax();
    void refresh();

    private:
    double income;
    double F1;
    double F2;
    double F3;
    double F4;
    double totalF;

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