#include "log_in.h"
#include "ui_log_in.h"

log_in::log_in(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::log_in)
{
    ui->setupUi(this);
}

log_in::~log_in()
{
    delete ui;
}

void log_in::on_account_input_editingFinished()
{
    QString account = ui->account_input->text();
}

void log_in::on_password_input_editingFinished()
{
    QString password = ui->password_input->text();
}
void log_in::receice()
{
    this->show();
}

void log_in::on_register_2_clicked()
{
    this->hide();
    emit l2r();
}
