#ifndef PREENERMY_H
#define PREENERMY_H
#include"enermy.h"

class PreEnermy : public Enermy
{
public:
    PreEnermy(int _x,int _y);

    bool unbeatable;//即 将敌人血量增到满值

    bool unbeatable_happen();//判断是否满足  unbeatable   的条件
};

#endif // PREENERMY_H
