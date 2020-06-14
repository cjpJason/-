#-------------------------------------------------
#
# Project created by QtCreator 2020-06-08T14:55:50
#
#-------------------------------------------------

QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = database0
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    database0.cpp \
    database0.cpp \
    log_in.cpp \
    register.cpp

HEADERS += \
    db_connection.h \
    pushbtn.h \
    cregister.h \
    database0.h \
    log_in.h \
    register.h

FORMS += \
    database0.ui \
    log_in.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    test4.qrc

DISTFILES += \
    ../../../adobe XD/用户首页.png \
    ../../../adobe XD/注册商品.png

SUBDIRS += \
