#include "RGTaskList.h"

RGTaskList::RGTaskList()
{
}

void RGTaskList::addTask(const RGTask& task)
{
    m_taskMap.insert(task.guid(), task);
}

void RGTaskList::removeTask(const QString& strGuid)
{
    m_taskMap.remove(strGuid);
}
