#ifndef KUNNANMOSHI_H
#define KUNNANMOSHI_H

#include <QMainWindow>

class Kunnanmoshi : public QMainWindow
{
    Q_OBJECT
public:
    explicit Kunnanmoshi(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

};

#endif // KUNNANMOSHI_H
