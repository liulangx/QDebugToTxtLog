#include "widget.h"
#include <QApplication>
#include <QDebug>

//#define _DEBUG
//#include <iostream>
//#include <cstdlib>
//#include <QFile>
//#include <QString>
//#include <QTextStream>
//#include <QMutex>
//#include <QDateTime>

//using namespace std;
//QMutex mutex;
//QString timePoint;

////日志生成
//void LogMsgOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
//{
//    mutex.lock();
//    cout << msg.toStdString() << endl;
//    QByteArray localMsg = msg.toLocal8Bit();
//    QString log;
//    switch (type) {
//    case QtDebugMsg:
//        log.append(QString("Debug File: %1 %2 Line: %3 Content:%4").arg(context.file).arg(context.function).arg(context.line).arg(msg));
//        break;
//    case QtInfoMsg:
//        log.append(QString("Info: %1 %2 %3 %4").arg(localMsg.constData()).arg(context.file).arg(context.line).arg(context.function));
//        break;
//    case QtWarningMsg:
//        log.append(QString("Warning: %1  %2  %3  %4").arg(localMsg.constData()).arg(context.file).arg(context.line).arg(context.function));
//        break;
//    case QtCriticalMsg:
//        log.append(QString("Critical: %1  %2  %3  %4").arg(localMsg.constData()).arg(context.file).arg(context.line).arg(context.function));
//        break;
//    case QtFatalMsg:
//        log.append(QString("Fatal: %1  %2  %3  %4").arg(localMsg.constData()).arg(context.file).arg(context.line).arg(context.function));
//        abort();
//    }

//    QFile file;
//    QString path = QString("log%1.lgt").arg(timePoint);
//    file.setFileName(path);
//    if(!file.open(QIODevice::ReadWrite | QIODevice::Append))
//    {
//        QString erinfo = file.errorString();
//        cout << erinfo.toStdString() << endl;
//        return;
//    }
//    QTextStream out(&file);
//    out << "\n\r" << log;
//    file.close();
//    mutex.unlock();
//}
#include "qdebugtolog.h"

int main(int argc, char *argv[])
{
    Heaven::useTxtLog();

//#ifndef _DEBUG

//#endif
    QApplication a(argc, argv);
    Widget w;

    w.show();
    int b;
    qDebug() << "this is a test!";

    return a.exec();
}
