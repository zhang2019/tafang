#include "jidanmoshi.h"
#include<QPainter>
Jidanmoshi::Jidanmoshi(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(1500,800);
    this->setWindowTitle("jiandanmoshi");

}


void Jidanmoshi::paintEvent(QPaintEvent *event)//画出次场景
{

    QPainter painter(this);
    //绘制地图
    QPixmap pixmap(":/new/prefix1/jiandanmoshi.jpg");
 //   painter.drawPixmap(0,0,this->width(),this->height(),pixmap );
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

