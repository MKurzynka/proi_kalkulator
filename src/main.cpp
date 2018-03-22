#include "Calculator.h"
#include "Draw.h"
#include "Menu.h"

int main()
{
    do{
        Menu menu;
        menu.setOperator();
        menu.setValues();
        menu.compute();
    }while(1);
    return 0;
}
