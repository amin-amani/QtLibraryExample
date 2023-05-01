#include "ObjectDetection.h"

ObjectDetection::ObjectDetection()
{

}

void ObjectDetection::DetectObject(int input)
{
    emit NewObjectDetected(input++);
}

int ObjectDetection::Print()
{
return 100;
}
