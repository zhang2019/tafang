#ifndef TOWER_H
#define TOWER_H
#include"enermy.h"
#include<QPixmap>
class Tower
{
public:
    Tower(int _x=265,int _y=170);

public:
    QPixmap mtower;
    int x;
    int y;


};

#endif // TOWER_H
