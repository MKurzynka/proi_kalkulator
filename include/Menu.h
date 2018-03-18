#ifndef MANU_H
#define MANU_H


class Menu
{
    char operator_input;
    double first_value, second_value;
    public:
        Menu();
        void setOperator();
        void setValues();
        void compute();
        ~Menu();
};

#endif // MANU_H
