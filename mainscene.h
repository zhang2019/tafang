#ifndef MAINSCENE_H
#define MAINSCENE_H
#include<QTimer>
#include <QMainWindow>
#include<tower.h>
#include<QMouseEvent>
#include"enermy.h"
#include"bullet.h"
class MainScene : public QMainWindow
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    void  initScene();//初始化地图场景
    void playgame();

    void paintEvent(QPaintEvent *event);
    //地图对象
    Tower  a_tower;

    //敌人对象
    Enermy a_enermy;

    //炮弹对象
    Bullet a_bullet;

    //计时器对象
    QTimer my_time;
};
#endif // MAINSCENE_H
