#include "mywindow.h"
#include<QPainter>
Mywindow::Mywindow(QWidget *parent) : QMainWindow(parent)
{
    //���ôγ����Ĵ�С������
    this->setFixedSize(1500,800);
    this->setWindowTitle("tafang1.0");


}

void Mywindow::paintEvent(QPaintEvent *event)//�����γ���
{

    QPainter painter(this);
    //���Ƶ�ͼ
    QPixmap pixmap(":/new/prefix1/cichangjing.png");
 //   painter.drawPixmap(0,0,this->width(),this->height(),pixmap );
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

