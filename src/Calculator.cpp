#include "Calculator.h"

Calculator::Calculator(){c_double_value = 0;}
Calculator::Calculator(int init_value){c_double_value = (double)init_value;}
Calculator::Calculator(double init_value){c_double_value = init_value;}

void Calculator::setValue(int provided_value){c_double_value = static_cast<double>(provided_value);}
void Calculator::setValue(double provided_value){c_double_value = provided_value;}
double Calculator::getValue()const{return c_double_value;}

Calculator::~Calculator(){}
