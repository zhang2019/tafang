#ifndef BULLET_H
#define BULLET_H
#include"enermy.h"
#include<QPixmap>
#include"enermy.h"
#include"preenermy.h"
class Bullet
{
public:
    Bullet(int _x=450,int _y=170);
    int x;
    int y;

    int speed;//子弹飞行速度

    int damage;//子弹造成的伤害

    QPixmap mbullet;//子弹图片资源

    QRect bullet_rect;//子弹边框（用于检测碰撞）

    bool boom(const Bullet & b,const Enermy& e);//碰撞检测函数

    void Strengthen(PreEnermy & penermy);//增强杀伤力函数
};

#endif // BULLET_H
