#ifndef RGTask_H
#define RGTask_H

#include <QString>
#include "RGDefine.h"

class RGTask
{
public:
    RGTask();

    RGTaskType type() const;
    void setType(const RGTaskType& type);

    QString name() const;
    void setName(const QString& name);

    RGTaskCycle cycle() const;
    void setCycle(const RGTaskCycle& cycle);

    int doneScore() const;
    void setDoneScore(int doneScore);

    int failedScore() const;
    void setFailedScore(int failedScore);

    QString guid() const;
    void setGuid(const QString& guid);

private:
    QString m_guid;
    QString m_name;
    RGTaskType m_type;
    RGTaskCycle m_cycle;
    int m_doneScore;
    int m_failedScore;
};

#endif // RGTask_H
