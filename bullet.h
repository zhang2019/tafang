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

    int speed;//�ӵ������ٶ�

    int damage;//�ӵ���ɵ��˺�

    QPixmap mbullet;//�ӵ�ͼƬ��Դ

    QRect bullet_rect;//�ӵ��߿����ڼ����ײ��

    bool boom(const Bullet & b,const Enermy& e);//��ײ��⺯��

    void Strengthen(PreEnermy & penermy);//��ǿɱ��������
};

#endif // BULLET_H
