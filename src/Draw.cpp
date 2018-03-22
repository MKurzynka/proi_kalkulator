#include "Draw.h"
#include <cstdlib>
#include <ctime>

Draw::Draw(int seed = 0){rand_number = seed;}
void Draw::drawNumber()
{
    srand(time(NULL));
    rand_number = rand();
}
int Draw::getRandNumber(){return rand_number;}
Draw::~Draw(){}
