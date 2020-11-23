#include "duck.h"
#include <QDebug>

Duck::Duck()
{

}

void Duck::swim()
{
    qDebug() << "Class Base: Boi giong nhu mot con vit";
}

void Duck::display()
{
    qDebug() << "Class Base: Hien thi giong nhu mot con vit";
}
