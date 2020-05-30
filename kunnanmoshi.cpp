#include "kunnanmoshi.h"
#include<QPainter>
Kunnanmoshi::Kunnanmoshi(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(1500,800);
    this->setWindowTitle("tafang1.0");
}


void Kunnanmoshi::paintEvent(QPaintEvent *event)//画出次场景
{

    QPainter painter(this);
    //绘制地图
    QPixmap pixmap(":/new/prefix1/kunnanmoshi.jpg");
 //   painter.drawPixmap(0,0,this->width(),this->height(),pixmap );
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

