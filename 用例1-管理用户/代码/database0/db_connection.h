#ifndef DB_CONNECTION_H
#define DB_CONNECTION_H
#include<QMessageBox>
#include<QSqlDatabase>
#include <QSqlQuery>
#include <QObject>
#include <QCoreApplication>
#include <QSqlError>
#include <QtDebug>
#include <QString>
#include <QByteArray>
//创建一个默认的连接，即只有一个连接
static QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
static void createConnection()
{

       db.setHostName("localhost");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
       db.setPort(3306);                 //连接数据库端口号，与设置一致
        db.setDatabaseName("database1");      //连接数据库名，与设置一致
        db.setUserName("root");          //数据库用户名，与设置一致
        db.setPassword("root");    //数据库密码，与设置一致
        db.open();
        if(!db.open())
        {
            qDebug()<<"不能连接"<<"connect to mysql error"<<db.lastError().text();
            return ;
        }
        else
        {
             qDebug()<<"连接成功"<<"connect to mysql OK";
        }

}
#endif // DB_CONNECTION_H
