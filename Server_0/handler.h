#ifndef HANDLER_H
#define HANDLER_H

#include "base.h"

class Handler
{
     Base * bd = 0;
public:
    Handler();
    QString Setfunc(QString str);
    ~Handler();
};

#endif // HANDLER_H
