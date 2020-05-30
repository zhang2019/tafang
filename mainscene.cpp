#include "mainscene.h"
#include"config.h"
#include<QWidget>
#include<QPainter>
#include<QPushButton>
#include<mybutton.h>
#include<mywindow.h>
#include<jidanmoshi.h>
#include<kunnanmoshi.h>
MainScene::MainScene(QWidget *parent)
    : QMainWindow(parent)
{
        initScene();
        //增加一个按钮，用于切换界面
//        QPushButton * btn=new QPushButton(this);
//        btn->setFixedSize(200,80);
//        btn->move(100,80);
//        connect(btn,&QPushButton::clicked,this,&QMainWindow::close);
       Mybutton * btn= new Mybutton(":/new/prefix1/btn.png");
        btn->setParent(this);
        btn->move(50,50);

        //connect(btn,&Mybutton::clicked,this,&QMainWindow::close);

        Mywindow* cichangjing= new Mywindow;
        connect(btn,&QPushButton::clicked,this,[=](){
            this->close();
           cichangjing->show();
        });

        //加载简单模式地图
        Jidanmoshi* jidan = new Jidanmoshi;
        Mybutton * xuanguan_1 = new Mybutton(":/new/prefix1/xuanguan1.png");
        xuanguan_1->setParent(cichangjing);
        xuanguan_1->move(400,200);
        connect(xuanguan_1,&QPushButton::clicked,cichangjing,[=](){
          cichangjing->close();
            jidan->show();
        });

        //定义一个按钮，实现从“简单模式”的地图返回到“选关菜单”
        Mybutton * fanhui_1 = new Mybutton(":/new/prefix1/fanhui.png");
        fanhui_1->setParent(jidan);
        fanhui_1->move(100,100);
        connect(fanhui_1,&QPushButton::clicked,jidan,[=](){
            jidan->close();
            cichangjing->show();
        });


        //加载困难模式地图
        Kunnanmoshi * kunnan = new Kunnanmoshi;
        Mybutton * xuanguan_2 = new Mybutton(":/new/prefix1/xuanguan2.png");
        xuanguan_2->setParent(cichangjing);
        xuanguan_2->move(400,500);
        connect(xuanguan_2,&QPushButton::clicked,cichangjing,[=](){
            cichangjing->close();
            kunnan->show();
        });

        //定义一个按钮，实现从“困难模式”的地图返回到“选关菜单”
        Mybutton * fanhui_2 = new Mybutton(":/new/prefix1/fanhui.png");
        fanhui_2->setParent(kunnan);
        fanhui_2->move(100,50);
        connect(fanhui_2,&QPushButton::clicked,kunnan,[=](){
            kunnan->close();
            cichangjing->show();
        });



}

MainScene::~MainScene()
{
}

void MainScene::initScene()//初始化地图场景
{
    //初始化窗口大小
    setFixedSize(GAME_WIDTH,GAME_HEIGHT);

    //设置窗口标题
    setWindowTitle(GAME_TITLE);


}


void MainScene::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    //绘制地图
    QPixmap pixmap(":/new/prefix1/zhujiemian.jpg");
 //   painter.drawPixmap(0,0,this->width(),this->height(),pixmap );
    painter.drawPixmap(0,0,this->width(),this->height(),pixmap);
}

