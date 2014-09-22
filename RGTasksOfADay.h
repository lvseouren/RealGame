#ifndef RGTASKSOFADAY_H
#define RGTASKSOFADAY_H

#include <QMap>
#include "RGTask.h"

class RGTaskList;

class RGTasksOfADay
{
public:
    RGTasksOfADay();

    //TODO:
    void initFromDataSouce();

    RGTaskList *taskList(RGTaskCycle taskCycle);
    void addTask(const RGTask& task);

private:
    QMap<RGTaskCycle, RGTaskList*> m_tasksMap;

};

#endif // RGTASKSOFADAY_H
