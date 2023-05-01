#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>
#include <QDebug>

class TestClass : public QObject
{
    Q_OBJECT
public:
    explicit TestClass(QObject *parent = nullptr);
    void Start(int value);

signals:
    void DoCalc(int );

public slots:
    void Completed(int result);

};

#endif // TESTCLASS_H
