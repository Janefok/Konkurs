#include "model.h"

#include <QApplication>
#include <QQmlApplicationEngine>

#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

#include "myclient.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyClient client ("localhost", 2323);

    client.slotSendToServer("LOAD/ListUsers");
    client.slotSendToServer("LOAD/ListTeamUsers");
    client.slotSendToServer("LOAD/ListFeed");

    QQmlApplicationEngine engine;

    qmlRegisterType<AnimalModel>("anima", 1, 0, "ListModel");

    engine.load(QUrl(QLatin1String("FrameMain.qml")));

    return app.exec();
}
