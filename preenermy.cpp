#include "preenermy.h"
#include"config.h"
PreEnermy::PreEnermy(int _x,int _y):Enermy(_x,_y)
{
    unbeatable=false;
}

bool PreEnermy::unbeatable_happen()
{
    if (this->blood<=40)
    {
        this->blood=BLOOD;
    }
    else
    {
        return false;
    }
}
