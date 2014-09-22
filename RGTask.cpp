#include "RGTask.h"
#include <QDebug>

RGTask::RGTask()
{
}

RGTask::RGTask(const QString& strGuid, const QString& strName, RGTaskType type,
               RGTaskCycle cycle, int nDoneScore, int nFailedScore)
    : m_guid(strGuid)
    , m_name(strName)
    , m_type(type)
    , m_cycle(cycle)
    , m_doneScore(nDoneScore)
    , m_failedScore(nFailedScore)
{

}

RGTask::~RGTask()
{
    qDebug() << "~RGTask guid : " << m_guid;
}

RGTaskType RGTask::type() const
{
    return m_type;
}

void RGTask::setType(const RGTaskType& type)
{
    m_type = type;
}
QString RGTask::name() const
{
    return m_name;
}

void RGTask::setName(const QString& name)
{
    m_name = name;
}
RGTaskCycle RGTask::cycle() const
{
    return m_cycle;
}

void RGTask::setCycle(const RGTaskCycle& cycle)
{
    m_cycle = cycle;
}
int RGTask::doneScore() const
{
    return m_doneScore;
}

void RGTask::setDoneScore(int doneScore)
{
    m_doneScore = doneScore;
}
int RGTask::failedScore() const
{
    return m_failedScore;
}

void RGTask::setFailedScore(int failedScore)
{
    m_failedScore = failedScore;
}
QString RGTask::guid() const
{
    return m_guid;
}

void RGTask::setGuid(const QString& guid)
{
    m_guid = guid;
}
RGTaskStatus RGTask::status() const
{
    return m_status;
}

void RGTask::setStatus(const RGTaskStatus& status)
{
    m_status = status;
}







