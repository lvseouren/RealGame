#include "RGTasksOfADay.h"
#include "RGTaskList.h"

RGTasksOfADay::RGTasksOfADay()
{
}


RGTaskList *RGTasksOfADay::taskList(RGTaskCycle taskCycle)
{
    return m_tasksMap.value(taskCycle, 0);
}

void RGTasksOfADay::addTask(const RGTask& task)
{
    if (m_tasksMap.contains(task.cycle()))
    {
        RGTaskList *taskList = m_tasksMap.value(task.cycle());
        taskList->addTask(task);
    }
}
