#ifndef ENERMY_H
#define ENERMY_H
#include<QPixmap>

class Enermy
{
public:
    Enermy(int _x=700,int _y=170);
    void updateposition();
public:
    int x;
    int y;
    QPixmap mEnermy;
    QRect enermy_rect;

    int speed;
    int blood;
    bool freedom;

};

#endif // ENERMY_H
