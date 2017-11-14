/********************************************************************************
** Form generated from reading UI file 'myserver.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSERVER_H
#define UI_MYSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myserver
{
public:

    void setupUi(QWidget *myserver)
    {
        if (myserver->objectName().isEmpty())
            myserver->setObjectName(QString::fromUtf8("myserver"));
        myserver->resize(400, 300);

        retranslateUi(myserver);

        QMetaObject::connectSlotsByName(myserver);
    } // setupUi

    void retranslateUi(QWidget *myserver)
    {
        myserver->setWindowTitle(QApplication::translate("myserver", "myserver", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myserver: public Ui_myserver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSERVER_H
