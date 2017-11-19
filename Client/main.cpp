#include <QApplication>
#include "myclient.h"
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyClient client("localhost", 2323);

    client.slotSendToServer("LOAD/ListUsers");
    client.slotSendToServer("LOAD/ListTeamUsers");
    client.slotSendToServer("LOAD/ListFeed");

    //подключение qml
    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("FrameMain.qml")));

    return a.exec();
}
