#-------------------------------------------------
#
# Project created by QtCreator 2018-05-04T19:25:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#!!!!!!!!!!!!!!!
#Release版本的输出却没有文件信息、行数等信息
#原因是：文件信息、行数等信息在Release版本默认舍弃。我们只要在.pro文件定义一个宏
#DEFINES += QT_MESSAGELOGCONTEXT
include(QDeToTxtlog.pri)


TARGET = qDebugToTxtLog
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp

HEADERS += \
        widget.h \
    qdebugtolog.h

DISTFILES += \
    QDeToTxtlog.pri
