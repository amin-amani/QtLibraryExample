#include <QCoreApplication>
#include "ObjectDetection.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ObjectDetection det;
    qDebug()<<det.Print();

    return a.exec();
}
