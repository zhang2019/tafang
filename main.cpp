#include "mainscene.h"
#include"config.h"
#include <QApplication>
#include"start.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Start w;
   w.show();
    return a.exec();

}
