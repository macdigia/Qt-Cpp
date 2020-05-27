#ifndef TIMERCLASS_H
#define TIMERCLASS_H

#include<QTimer>
#include <QDebug>
#include<QObject>

class TimerClass : public QObject
{
    Q_OBJECT

public:
    TimerClass();

private slots:
    void timerSlot();

signals:
    void timerCustomSignal(int);

private:
    QTimer *timer;

    int timeCount;
};

#endif // TIMERCLASS_H
