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
    void  initScene();//��ʼ����ͼ����

    void paintEvent(QPaintEvent *event);
    //��ͼ����

};
#endif // MAINSCENE_H
