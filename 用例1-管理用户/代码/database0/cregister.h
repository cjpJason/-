#ifndef CREGISTER_H
#define CREGISTER_H
#include <QString>
#include<iostream>
#include<stdio.h>
#include<string>
#include <fstream>
#include <QtWidgets>
#include <QByteArray>
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include "db_connection.h"
using namespace std;
class CRegister{
private:
public:
    CRegister(QString N, QString ID, QString P, QString PQ,QString PA) {
        QString sql="insert into account values("+ID+","+P+","+N+","+PQ+","+PA+";";
        QByteArray ba=sql.toLatin1();
        char *ch;
        ch=ba.data();
        QSqlQuery query=QSqlQuery(db);
        query.exec(QObject::tr(ch));
    }
};
#endif // CREGISTER_H
