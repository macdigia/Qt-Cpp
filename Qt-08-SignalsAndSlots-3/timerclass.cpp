#include "timerclass.h"

TimerClass::TimerClass()
{
    timer = new QTimer;
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerSlot()));

    timeCount = 0;
}

void TimerClass::timerSlot()
{
    qDebug()<< "timeCount--->>" << timeCount;

    emit timerCustomSignal(timeCount);

    timeCount++;
}
