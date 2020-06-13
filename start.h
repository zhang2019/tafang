#ifndef JIDANMOSHI_H
#define JIDANMOSHI_H

#include <QMainWindow>
#include<tower.h>
#include<QTimer>
class Start : public QMainWindow
{
    Q_OBJECT
public:
    explicit Start(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    Tower a_tower;
    void mousemove(QMouseEvent * e);
    QTimer time;
    void playgame();
signals:

};

#endif // JIDANMOSHI_H
