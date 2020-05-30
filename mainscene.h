#ifndef MAINSCENE_H
#define MAINSCENE_H
#include<QTimer>
#include <QMainWindow>
class MainScene : public QMainWindow
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    void  initScene();//初始化地图场景

    void paintEvent(QPaintEvent *event);
    //地图对象

};
#endif // MAINSCENE_H
