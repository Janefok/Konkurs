/********************************************************************************
** Form generated from reading UI file 'myserver.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSERVER_H
#define UI_MYSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myserver
{
public:

    void setupUi(QWidget *myserver)
    {
        if (myserver->objectName().isEmpty())
            myserver->setObjectName(QStringLiteral("myserver"));
        myserver->resize(400, 300);

        retranslateUi(myserver);

        QMetaObject::connectSlotsByName(myserver);
    } // setupUi

    void retranslateUi(QWidget *myserver)
    {
        myserver->setWindowTitle(QApplication::translate("myserver", "myserver", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class myserver: public Ui_myserver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSERVER_H
