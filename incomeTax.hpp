#ifndef INCOMETAX_H
#define INCOMETAX_H

class incomeTax{

    public:
    incomeTax(double input_income);
    incomeTax();
    int getIncome();
    void setIncome(double set_income);
    void input();
    void output();
    void calculate();


    private:
    double income;

};

#endif