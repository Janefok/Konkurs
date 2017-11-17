#ifndef HANDLER_H
#define HANDLER_H

#include "base.h"
#include <QJsonDocument>
#include <QJsonArray>

class Handler
{
     Base * bd = 0;
public:
    Handler();
    QString Setfunc(QString str);
    ~Handler();
};

#endif // HANDLER_H
