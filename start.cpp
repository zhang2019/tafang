#include "start.h"
#include<QPainter>
#include"mybutton.h"
#include"tower.h"
#include<QMouseEvent>
#include"mainscene.h"
Start::Start(QWidget *parent) : QMainWindow(parent)
{
    this->setFixedSize(1500,800);
    this->setWindowTitle("jiandanmoshi");
    //��ʼ��Ϸ�����ص�ͼ
    MainScene* playground= new MainScene;
    Mybutton * xuanguan_1 = new Mybutton(":/new/prefix1/start_button.png");
    xuanguan_1->setParent(this);
    xuanguan_1->move(400,200);
    connect(xuanguan_1,&QPushButton::clicked,this,[=](){
      this->close();
       playground->show();
    });

    //����,����һ�����ذ�ť
    Mybutton * fanhui_1 = new Mybutton(":/new/prefix1/back_button.png");
    fanhui_1->setParent(playground);
    fanhui_1->move(100,100);
    connect(fanhui_1,&QPushButton::clicked,this,[=](){
        playground->close();
        this->show();
    });
}


void Start::paintEvent(QPaintEvent *event)//������ͼ
{

    QPainter painter(this);
    QPixmap pixmap(":/new/prefix1/zhujiemian.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);

}
















