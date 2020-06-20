#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include <QString>
#include <QByteArray>
#include "database0.h"
#include "log_in.h"
#include "register.h"
#include "db_connection.h"
#include <QApplication>
void connect_mysql()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
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
        QSqlQuery query=QSqlQuery(db);
        QString s1="5555";
        QString sql="insert into account values(";
        sql=sql+s1+",'2222','cjp','name','cjp')";
        QByteArray ba=sql.toLatin1();
        char *ch;
        ch=ba.data();
        query.exec(QObject::tr(ch));
}

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    createConnection();
    log_in l;
    Register r;

    QObject::connect(&l,SIGNAL(l2r()),&r,SLOT(receive()));
    QObject::connect(&r,SIGNAL(r2l()),&l,SLOT(receive()));

    l.show();
    r.hide();


    return a.exec();

}
