#ifndef MAINSCENE_H
#define MAINSCENE_H
#include<QTimer>
#include <QMainWindow>
#include<tower.h>
#include<QMouseEvent>
#include"enermy.h"
class MainScene : public QMainWindow
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();

    void  initScene();//��ʼ����ͼ����
    void playgame();

    void paintEvent(QPaintEvent *event);
    //��ͼ����
    Tower  a_tower;

    //���˶���
    Enermy a_enermy;
    //��ʱ������
    QTimer my_time;
};
#endif // MAINSCENE_H
