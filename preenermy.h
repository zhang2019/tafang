#ifndef PREENERMY_H
#define PREENERMY_H
#include"enermy.h"

class PreEnermy : public Enermy
{
public:
    PreEnermy(int _x,int _y);

    bool unbeatable;//�� ������Ѫ��������ֵ

    bool unbeatable_happen();//�ж��Ƿ�����  unbeatable   ������
};

#endif // PREENERMY_H
