TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    model.cpp

RESOURCES += qml.qrc

# path to use in Qt Creator code model
QML_IMPORT_PATH =

# For deployment.
include(deploy.pri)

HEADERS += \
    model.h

