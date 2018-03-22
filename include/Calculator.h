#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
    double c_double_value;
    public:
        Calculator();
        Calculator(int init_value);
        Calculator(double init_value);

        void setValue(int provided_value);
        void setValue(double provided_value);
        double getValue()const;

        ~Calculator();
};

#endif // CALCULATOR_H
