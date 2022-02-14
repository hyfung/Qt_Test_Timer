#include <QCoreApplication>
#include <QTimer>
#include <mytimer.h>
#include <QDebug>

void on_timer_timeout()
{
    qDebug() << "Timer timed out!";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyTimer *myTimer = new MyTimer(1000);

    QObject::connect(myTimer, &QTimer::timeout, &a, &on_timer_timeout);

    QObject::connect(myTimer, &QTimer::timeout, &a, [](){
        qDebug() << "From main!";
    });

    return a.exec();
}
