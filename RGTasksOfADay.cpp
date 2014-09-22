#include "RGTasksOfADay.h"
#include "RGTaskList.h"
#include "RGUtils.h"

#include <QDebug>

RGTasksOfADay::RGTasksOfADay(QObject* parent) : QObject(parent)
{
}

RGTasksOfADay::~RGTasksOfADay()
{
    for (int i = 0; i < m_tasksMap.keys().count(); i++)
    {
        RGTaskCycle cycle = m_tasksMap.keys().at(i);
        RGTaskList *taskList = m_tasksMap.value(cycle);
        delete taskList;
        m_tasksMap.insert(cycle, 0);
    }
}

void RGTasksOfADay::initFromDataSouce()
{
    //TODO:

    for (int i = 0; i <= TaskType_Irrelevant; i++)
    {
        QString strGuid = GenGuid();
        RGTask task(strGuid, "Task_" + QString::number(i), (RGTaskType)i,
                    (RGTaskCycle)(i % TaskCycle_Yearly));
        addTask(task);
    }
}


RGTaskList *RGTasksOfADay::taskList(RGTaskCycle taskCycle)
{
    return m_tasksMap.value(taskCycle, 0);
}

void RGTasksOfADay::addTask(const RGTask& task)
{
    qDebug() << "[Add] name : " << task.name() << " guid : " << task.guid();
    if (m_tasksMap.contains(task.cycle()))
    {
        RGTaskList *taskList = m_tasksMap.value(task.cycle());
        taskList->addTask(task);
    }
    else
    {
        RGTaskList *taskList = new RGTaskList();
        taskList->addTask(task);
        m_tasksMap.insert(task.cycle(), taskList);
    }
}

void RGTasksOfADay::finishTask(const RGTask& task)
{
    if (m_tasksMap.contains(task.cycle()))
    {
        RGTaskList *taskList = m_tasksMap.value(task.cycle());
        if (taskList->finishTask(task.guid()))
        {
            emit taskProcessed(task.doneScore());
        }
    }
}

void RGTasksOfADay::failedTask(const RGTask& task)
{
    if (m_tasksMap.contains(task.cycle()))
    {
        RGTaskList *taskList = m_tasksMap.value(task.cycle());
        if (taskList->failedTask(task.guid()))
        {
            emit taskProcessed(task.doneScore());
        }
    }
}
