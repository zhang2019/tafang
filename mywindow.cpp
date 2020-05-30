#include "mywindow.h"
#include<QPainter>
Mywindow::Mywindow(QWidget *parent) : QMainWindow(parent)
{
    //设置次场景的大小，标题
    this->setFixedSize(1500,800);
    this->setWindowTitle("tafang1.0");


}

void Mywindow::paintEvent(QPaintEvent *event)//画出次场景
{

    QPainter painter(this);
    //绘制地图
    QPixmap pixmap(":/new/prefix1/cichangjing.png");
 //   painter.drawPixmap(0,0,this->width(),this->height(),pixmap );
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

