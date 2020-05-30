#ifndef JIDANMOSHI_H
#define JIDANMOSHI_H

#include <QMainWindow>

class Jidanmoshi : public QMainWindow
{
    Q_OBJECT
public:
    explicit Jidanmoshi(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

};

#endif // JIDANMOSHI_H
