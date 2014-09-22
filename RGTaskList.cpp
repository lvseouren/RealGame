#include "RGTaskList.h"

RGTaskList::RGTaskList()
{
}

RGTaskList::~RGTaskList()
{
    removeAllTasks();
}

void RGTaskList::addTask(const RGTask& task)
{
    m_taskMap.insert(task.guid(), task);
}

void RGTaskList::removeTask(const QString& strGuid)
{
    m_taskMap.remove(strGuid);
}

void RGTaskList::removeAllTasks()
{
    m_taskMap.clear();
}

bool RGTaskList::finishTask(const QString& strGuid)
{
    RGTask task = m_taskMap.value(strGuid);
    if (task.status() != TaskStatus_Finished)
    {
        task.setStatus(TaskStatus_Finished);
        m_taskMap.insert(strGuid, task);

        return true;
    }
    return false;
}

bool RGTaskList::failedTask(const QString& strGuid)
{
    RGTask task = m_taskMap.value(strGuid);
    if (task.status() != TaskStatus_Failed)
    {
        task.setStatus(TaskStatus_Failed);
        m_taskMap.insert(strGuid, task);

        return true;
    }
    return false;
}
