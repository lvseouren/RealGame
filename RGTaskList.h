#ifndef RGTASKLIST_H
#define RGTASKLIST_H

#include <QMap>
#include <RGTask.h>

class RGTaskList
{
public:
    RGTaskList();

    void addTask(const RGTask& task);
    void removeTask(const QString& strGuid);

private:
    QMap<QString, RGTask> m_taskMap;
};

#endif // RGTASKLIST_H
