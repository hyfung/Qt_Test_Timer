#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>
#include <QObject>

class MyTimer : public QTimer
{
    Q_OBJECT
public:
    MyTimer(int ms);
};

#endif // MYTIMER_H
