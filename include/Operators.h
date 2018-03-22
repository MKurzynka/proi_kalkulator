#ifndef OPERATORS_H_INCLUDED
#define OPERATORS_H_INCLUDED
#include "Calculator.h"

double operator+(const Calculator &calc1, double value);
double operator+(const Calculator &calc1, int value);
double operator-(const Calculator &calc1, double value);
double operator-(const Calculator &calc1, int value);
double operator*(const Calculator &calc1, double value);
double operator*(const Calculator &calc1, int value);
double operator/(const Calculator &calc1, double value);
double operator/(const Calculator &calc1, int value);

#endif // OPERATORS_H_INCLUDED
