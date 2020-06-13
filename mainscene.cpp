#include "mainscene.h"
#include"config.h"
#include<QWidget>
#include<QPainter>
#include<QPushButton>
#include<mybutton.h>
#include<start.h>
#include<QTimer>
#include<tower.h>
#include"enermy.h"
MainScene::MainScene(QWidget *parent)
    : QMainWindow(parent)
{

    initScene();

}

MainScene::~MainScene()
{
}

void MainScene::initScene()//��ʼ����ͼ����
{
    //��ʼ�����ڴ�С
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);

    //���ô��ڱ���
    setWindowTitle(GAME_TITLE);

    my_time.setInterval(10);


}


void MainScene::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    //���Ƶ�ͼ
    QPixmap pixmap(":/new/prefix1/ditu.jpg");

    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
    //������
    painter.drawPixmap(a_tower.x,a_tower.y,80,70,a_tower.mtower);
    painter.drawPixmap(265,270,80,70,a_tower.mtower);
    painter.drawPixmap(265,370,80,70,a_tower.mtower);
    painter.drawPixmap(265,470,80,70,a_tower.mtower);
    painter.drawPixmap(265,570,80,70,a_tower.mtower);
    //��������
    painter.drawPixmap(950,170,80,70,a_enermy.mEnermy);
    painter.drawPixmap(950,270,80,70,a_enermy.mEnermy);
    painter.drawPixmap(950,370,80,70,a_enermy.mEnermy);
    painter.drawPixmap(950,470,80,70,a_enermy.mEnermy);
    painter.drawPixmap(950,570,80,70,a_enermy.mEnermy);

}

void MainScene::playgame()
{
    my_time.start();
    connect(&my_time,&QTimer::timeout,[=](){
        update();
    });
}


