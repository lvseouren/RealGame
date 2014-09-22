#ifndef RGTASKDATASOURCE_H
#define RGTASKDATASOURCE_H

#include "RGDefine.h"

class RGTaskList;

class RGTaskDataSource
{
public:
    RGTaskDataSource();

    //TODO:
    bool getTasksByCycle(RGTaskCycle taskCycle, RGTaskList *dailyTaskList);
    bool getDailyTasks(RGTaskList *dailyTaskList);
    bool getWeeklyTasks(RGTaskList *weeklyTaskList);
    bool getMonthlyTasks(RGTaskList *monthlyTaskList);
    bool getYearlyTasks(RGTaskList *yearlyTaskList);

};

#endif // RGTASKDATASOURCE_H
