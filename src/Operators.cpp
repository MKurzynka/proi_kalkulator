#include "Operators.h"
#include "Calculator.h"

double operator+(const Calculator &calc1, double value)
{
    return calc1.getValue() + value;
}
double operator+(const Calculator &calc1, int value)
{
    return calc1.getValue() + static_cast<double>(value);
}
double operator-(const Calculator &calc1, double value)
{
    return calc1.getValue() - value;
}
double operator-(const Calculator &calc1, int value)
{
    return calc1.getValue() - static_cast<double>(value);
}
double operator*(const Calculator &calc1, double value)
{
    return calc1.getValue() * value;
}
double operator*(const Calculator &calc1, int value)
{
    return calc1.getValue() * static_cast<double>(value);
}
double operator/(const Calculator &calc1, double value)
{
    return calc1.getValue() / value;
}
double operator/(const Calculator &calc1, int value)
{
    return calc1.getValue() / static_cast<double>(value);
}
