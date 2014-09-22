#ifndef RGDEFINE_H
#define RGDEFINE_H

#define  RG_FILE_VERSION   0.1
#define  RG_APP_VERSION   0.1


enum RGTaskType
{
    TaskType_None,
    TaskType_Necessary,
    TaskType_Beneficial,
    TaskType_Forbidden,
    TaskType_Encourage,
    TaskType_Irrelevant
};

enum RGTaskStatus
{
    TaskStatus_None,
    TaskStatus_Unfinished,
    TaskStatus_Finished,
    TaskStatus_Failed,
    TaskStatus_Unknow
};

enum RGTaskCycle
{
    TaskCycle_None,
    TaskCycle_Once,
    TaskCycle_Daily,
    TaskCycle_Weekly,
    TaskCycle_Monthly,
    TaskCycle_Yearly
};


#endif // RGDEFINE_H
