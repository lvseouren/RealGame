#include "RGUtils.h"
#include <QUuid>

RGUtils::RGUtils()
{
}


QString GenGuid()
{
    QUuid guid = QUuid::createUuid();
    QString str = guid.toString();
    str.remove(0, 1);
    str.remove(str.length() - 1, 1);
    return str;
}
