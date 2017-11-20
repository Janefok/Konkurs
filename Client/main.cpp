#include "model.h"

#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

int main(int argc, char ** argv)
{
    QGuiApplication app(argc, argv);

    AnimalModel model;
    model.addAnimal(Animal("Wolf", "Medium"));
    model.addAnimal(Animal("Polar bear", "Large"));
    model.addAnimal(Animal("Quoll", "Small"));

//    QQuickView userdata;
//    userdata.setResizeMode(QQuickView::SizeRootObjectToView);
//    QQmlContext *ctxt = userdata.rootContext();
//    ctxt->setContextProperty("myModel", &model);
//    userdata.setSource(QUrl("qrc:view.qml"));

    QQmlApplicationEngine engine;
    qmlRegisterType<AnimalModel>("anima", 1, 0, "AnimaModel");
    //qmlRegisterType<model>("aff",1,0,"AnModel");
    engine.load(QUrl(QLatin1String("FrameMain.qml")));

//    userdata.show();
    return app.exec();
}
