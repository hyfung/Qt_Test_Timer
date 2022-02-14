#include "mytimer.h"
#include <QDebug>

MyTimer::MyTimer(int ms)
{
    connect(this, &QTimer::timeout, this, [](){
        qDebug() << "Test";
    });
    this->start(ms);
}
