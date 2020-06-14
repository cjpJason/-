#include "database0.h"
#include "ui_database0.h"

database0::database0(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::database0)
{
    ui->setupUi(this);
}

database0::~database0()
{
    delete ui;
}
