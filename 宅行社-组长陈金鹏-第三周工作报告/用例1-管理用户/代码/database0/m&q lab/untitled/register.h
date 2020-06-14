#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:

    void on_account_input_editingFinished();

    void on_nickname_input_editingFinished();

    void on_password_input_editingFinished();

    void on_password_again_input_editingFinished();

    void on_firstname_input_editingFinished();

    void on_lineEdit_5_editingFinished();

    void on_phone_number_input_editingFinished();

    void on_Email_input_editingFinished();

    void on_gender_input_activated(const QString &arg1);

    void on_is_merchant_input_activated(const QString &arg1);

    void on_id_card_input_activated(const QString &arg1);

    void on_payment_method1_input_activated(const QString &arg1);

    void on_payment_method2_input_activated(const QString &arg1);

    void on_id_number_input_editingFinished();

    void on_payment_account1_input_editingFinished();

    void on_payment_account2_input_editingFinished();

    void receive();

    void on_cancel_clicked();

signals:
    void r2l();

    void r2y();

    void r2n();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
