#ifndef MYSERVER_H
#define MYSERVER_H

#include <QWidget>
#include "handler.h"

class QTcpServer;
class QTextEdit;
class QTcpSocket;

class MyServer : public QWidget {
Q_OBJECT
private:
    QTcpServer* m_ptcpServer;
    QTextEdit*  m_ptxt;
    quint16     m_nNextBlockSize;
    Handler *   response = 0;

     void sendToClient(QTcpSocket* pSocket, const QString& str);
public:
    MyServer(int nPort,Handler &res, QWidget* pwgt = 0);

public slots:
    virtual void slotNewConnection();
            void slotReadClient   ();
};

#endif // MYSERVER_H
