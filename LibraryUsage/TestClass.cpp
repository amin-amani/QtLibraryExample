#include "TestClass.h"

TestClass::TestClass(QObject *parent) : QObject(parent)
{

}

void TestClass::Start(int value)
{
    qDebug()<<"run tester";
   emit DoCalc(value);
}

void TestClass::Completed(int result)
{
 qDebug()<<"result"<<result;
}
