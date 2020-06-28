#include "bullet.h"

Bullet::Bullet(int _x,int _y)
{
    x=_x;
    y=_y;
    mbullet.load(":/new/prefix1/bullet.png");
    bullet_rect.setWidth(mbullet.width());
    bullet_rect.setHeight(mbullet.height());
}

bool Bullet::boom(const Bullet &b, const Enermy &e)
{
    if(b.bullet_rect.right()>=e.enermy_rect.left())
    {
        return true;
    }
    else {
        return false;
    }
}

void Bullet::Strengthen(PreEnermy &penermy)
{
    if (penermy.unbeatable_happen())
    {
        this->damage+=20;//�����������ǿ���ˣ��������ڵ��˺�20��
    }
}
