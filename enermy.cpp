#include "enermy.h"
#include"config.h"
Enermy::Enermy(int _x,int _y)
{
    x=_x;
    y=_y;
    mEnermy.load(":/new/prefix1/enermy.png");
    enermy_rect.setWidth(mEnermy.width());
    enermy_rect.setHeight(mEnermy.height());
    speed=SPEED;
    blood=BLOOD;
    freedom=true;
}
void Enermy::updateposition()
{
    if(freedom)
    {
        return;
    }
    this->x+=speed;
    this->enermy_rect.moveTo(this->x,this->y);
    if(this->x>= GAME_WIDTH)
    {
        freedom=true;
    }
}
