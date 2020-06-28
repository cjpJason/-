#ifndef LOG_IN_H
#define LOG_IN_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class log_in;
}

class log_in : public QMainWindow
{
    Q_OBJECT

public:
    explicit log_in(QWidget *parent = nullptr);
    ~log_in();

private slots:
    void on_account_input_editingFinished();

    void on_password_input_editingFinished();

    void receice();

    void on_register_2_clicked();

signals:
    void l2r();

    void l2s(QString a,QString p);

private:
    Ui::log_in *ui;
};

#endif // LOG_IN_H
