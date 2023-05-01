#ifndef OBJECTDETECTION_H
#define OBJECTDETECTION_H

#include <QObject>
#include <QTimer>


class ObjectDetection: public QObject
{

    Q_OBJECT
public:
    ObjectDetection();
    void DetectObject(int input);
    int Print();
signals:
    //===========================================================================================
    void NewObjectDetected(int );





};

#endif // OBJECTDETECTION_H
