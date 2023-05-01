#include <QCoreApplication>
#include "lib/ObjectDetection.h"
#include <QDebug>
#include "TestClass.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ObjectDetection det;
    TestClass tester;
    qDebug()<<det.Print();
    QObject::connect(&det, SIGNAL(NewObjectDetected(int)), &tester, SLOT(Completed(int)));
    det.DetectObject(2);
    return a.exec();
}
