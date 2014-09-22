#ifndef RGTASKSOFADAY_H
#define RGTASKSOFADAY_H

#include <QObject>
#include <QMap>
#include "RGTask.h"

class RGTaskList;

class RGTasksOfADay : public QObject
{
    Q_OBJECT
public:
    RGTasksOfADay(QObject *parent = 0);
    ~RGTasksOfADay();

    void initFromDataSouce();

    RGTaskList *taskList(RGTaskCycle taskCycle);
    void addTask(const RGTask& task);

    void finishTask(const RGTask& task);
    void failedTask(const RGTask& task);

signals:
    void taskProcessed(int nScore);

private:
    QMap<RGTaskCycle, RGTaskList*> m_tasksMap;

};

#endif // RGTASKSOFADAY_H
