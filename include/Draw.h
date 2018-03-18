#ifndef DRAW_H
#define DRAW_H


class Draw
{
    int rand_number;
    public:
        Draw(int seed);
        void drawNumber();
        int getRandNumber();
        ~Draw();
};

#endif // DRAW_H
