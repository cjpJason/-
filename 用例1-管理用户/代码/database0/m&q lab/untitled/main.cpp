#include "log_in.h"
#include "register.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    log_in l;
    Register r;

    QObject::connect(&l,SIGNAL(l2r()),&r,SLOT(receive()));
    QObject::connect(&r,SIGNAL(r2l()),&l,SLOT(receive()));

    l.show();
    r.hide();

    return a.exec();
}
