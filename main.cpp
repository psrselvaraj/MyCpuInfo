#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "model.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterType<Model>("Model", 1, 0, "Model");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

