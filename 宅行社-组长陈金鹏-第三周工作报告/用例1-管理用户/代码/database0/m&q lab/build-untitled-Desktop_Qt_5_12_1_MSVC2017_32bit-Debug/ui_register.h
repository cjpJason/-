/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QComboBox *payment_method1_input;
    QLineEdit *firstname_input;
    QLabel *label_15;
    QLabel *label_4;
    QLineEdit *phone_number_input;
    QLineEdit *nickname_input;
    QLabel *label_11;
    QLabel *lastname_input;
    QLabel *label_6;
    QPushButton *cancel;
    QLabel *label_12;
    QLabel *label_3;
    QLineEdit *payment_account1_input;
    QLabel *title;
    QLabel *label_14;
    QLineEdit *password_input;
    QComboBox *payment_method2_input;
    QLabel *label_13;
    QLineEdit *password_again_input;
    QLabel *label_10;
    QComboBox *id_card_input;
    QLineEdit *Email_input;
    QLabel *email_input;
    QComboBox *gender_input;
    QLabel *label_5;
    QLabel *label_2;
    QComboBox *is_merchant_input;
    QPushButton *comfirm;
    QLineEdit *account_input;
    QLabel *label_17;
    QLabel *label_8;
    QLineEdit *id_number_input;
    QLineEdit *lineEdit_5;
    QLineEdit *payment_account2_input;
    QLabel *label_9;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(851, 726);
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        payment_method1_input = new QComboBox(widget);
        payment_method1_input->addItem(QString());
        payment_method1_input->addItem(QString());
        payment_method1_input->addItem(QString());
        payment_method1_input->addItem(QString());
        payment_method1_input->setObjectName(QString::fromUtf8("payment_method1_input"));
        payment_method1_input->setGeometry(QRect(180, 490, 221, 22));
        firstname_input = new QLineEdit(widget);
        firstname_input->setObjectName(QString::fromUtf8("firstname_input"));
        firstname_input->setGeometry(QRect(180, 250, 221, 21));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(440, 370, 91, 16));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 190, 72, 15));
        phone_number_input = new QLineEdit(widget);
        phone_number_input->setObjectName(QString::fromUtf8("phone_number_input"));
        phone_number_input->setGeometry(QRect(180, 310, 221, 21));
        nickname_input = new QLineEdit(widget);
        nickname_input->setObjectName(QString::fromUtf8("nickname_input"));
        nickname_input->setGeometry(QRect(540, 130, 221, 21));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 370, 72, 15));
        lastname_input = new QLabel(widget);
        lastname_input->setObjectName(QString::fromUtf8("lastname_input"));
        lastname_input->setGeometry(QRect(440, 250, 72, 15));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(440, 430, 91, 16));
        cancel = new QPushButton(widget);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(460, 640, 93, 28));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(80, 430, 91, 16));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 130, 72, 15));
        payment_account1_input = new QLineEdit(widget);
        payment_account1_input->setObjectName(QString::fromUtf8("payment_account1_input"));
        payment_account1_input->setGeometry(QRect(540, 490, 221, 21));
        title = new QLabel(widget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(240, 40, 391, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(80, 490, 72, 15));
        password_input = new QLineEdit(widget);
        password_input->setObjectName(QString::fromUtf8("password_input"));
        password_input->setGeometry(QRect(180, 190, 221, 21));
        payment_method2_input = new QComboBox(widget);
        payment_method2_input->addItem(QString());
        payment_method2_input->addItem(QString());
        payment_method2_input->addItem(QString());
        payment_method2_input->addItem(QString());
        payment_method2_input->setObjectName(QString::fromUtf8("payment_method2_input"));
        payment_method2_input->setGeometry(QRect(180, 550, 221, 22));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(440, 490, 72, 15));
        password_again_input = new QLineEdit(widget);
        password_again_input->setObjectName(QString::fromUtf8("password_again_input"));
        password_again_input->setGeometry(QRect(540, 190, 221, 21));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(440, 550, 72, 15));
        id_card_input = new QComboBox(widget);
        id_card_input->addItem(QString());
        id_card_input->addItem(QString());
        id_card_input->addItem(QString());
        id_card_input->setObjectName(QString::fromUtf8("id_card_input"));
        id_card_input->setGeometry(QRect(180, 430, 221, 22));
        Email_input = new QLineEdit(widget);
        Email_input->setObjectName(QString::fromUtf8("Email_input"));
        Email_input->setGeometry(QRect(540, 310, 221, 21));
        email_input = new QLabel(widget);
        email_input->setObjectName(QString::fromUtf8("email_input"));
        email_input->setGeometry(QRect(440, 310, 72, 15));
        gender_input = new QComboBox(widget);
        gender_input->addItem(QString());
        gender_input->addItem(QString());
        gender_input->setObjectName(QString::fromUtf8("gender_input"));
        gender_input->setGeometry(QRect(180, 370, 221, 22));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 190, 72, 15));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 130, 72, 15));
        is_merchant_input = new QComboBox(widget);
        is_merchant_input->addItem(QString());
        is_merchant_input->addItem(QString());
        is_merchant_input->setObjectName(QString::fromUtf8("is_merchant_input"));
        is_merchant_input->setGeometry(QRect(540, 370, 221, 22));
        comfirm = new QPushButton(widget);
        comfirm->setObjectName(QString::fromUtf8("comfirm"));
        comfirm->setGeometry(QRect(240, 640, 93, 28));
        account_input = new QLineEdit(widget);
        account_input->setObjectName(QString::fromUtf8("account_input"));
        account_input->setGeometry(QRect(180, 130, 221, 21));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(80, 550, 72, 15));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 310, 72, 15));
        id_number_input = new QLineEdit(widget);
        id_number_input->setObjectName(QString::fromUtf8("id_number_input"));
        id_number_input->setGeometry(QRect(540, 430, 221, 21));
        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(540, 250, 221, 21));
        payment_account2_input = new QLineEdit(widget);
        payment_account2_input->setObjectName(QString::fromUtf8("payment_account2_input"));
        payment_account2_input->setGeometry(QRect(540, 550, 221, 21));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 250, 72, 15));
        Register->setCentralWidget(widget);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "MainWindow", nullptr));
        payment_method1_input->setItemText(0, QApplication::translate("Register", "\351\223\266\350\241\214\345\215\241", nullptr));
        payment_method1_input->setItemText(1, QApplication::translate("Register", "\345\276\256\344\277\241\346\224\257\344\273\230", nullptr));
        payment_method1_input->setItemText(2, QApplication::translate("Register", "\346\224\257\344\273\230\345\256\235", nullptr));
        payment_method1_input->setItemText(3, QApplication::translate("Register", "PayPal", nullptr));

        label_15->setText(QApplication::translate("Register", "\346\230\257\345\220\246\346\263\250\345\206\214\345\225\206\346\210\267", nullptr));
        label_4->setText(QApplication::translate("Register", "\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        label_11->setText(QApplication::translate("Register", "\346\200\247\345\210\253", nullptr));
        lastname_input->setText(QApplication::translate("Register", "\345\220\215", nullptr));
        label_6->setText(QApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\344\273\266\345\217\267\347\240\201", nullptr));
        cancel->setText(QApplication::translate("Register", "\345\217\226\346\266\210", nullptr));
        label_12->setText(QApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\344\273\266\347\261\273\345\236\213", nullptr));
        label_3->setText(QApplication::translate("Register", "\346\230\265\347\247\260", nullptr));
        title->setText(QApplication::translate("Register", "\346\254\242\350\277\216\344\275\277\347\224\250\345\256\205\350\241\214\347\244\276\347\224\265\345\225\206\347\263\273\347\273\237", nullptr));
        label_14->setText(QApplication::translate("Register", "\346\224\257\344\273\230\346\226\271\345\274\2171", nullptr));
        payment_method2_input->setItemText(0, QApplication::translate("Register", "\351\223\266\350\241\214\345\215\241", nullptr));
        payment_method2_input->setItemText(1, QApplication::translate("Register", "\345\276\256\344\277\241\346\224\257\344\273\230", nullptr));
        payment_method2_input->setItemText(2, QApplication::translate("Register", "\346\224\257\344\273\230\345\256\235", nullptr));
        payment_method2_input->setItemText(3, QApplication::translate("Register", "PayPal", nullptr));

        label_13->setText(QApplication::translate("Register", "\346\224\257\344\273\230\350\264\246\345\217\2671", nullptr));
        label_10->setText(QApplication::translate("Register", "\346\224\257\344\273\230\350\264\246\345\217\2672", nullptr));
        id_card_input->setItemText(0, QApplication::translate("Register", "\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201", nullptr));
        id_card_input->setItemText(1, QApplication::translate("Register", "\346\212\244\347\205\247\345\217\267", nullptr));
        id_card_input->setItemText(2, QApplication::translate("Register", "\346\232\202\345\261\205\350\257\201", nullptr));

        email_input->setText(QApplication::translate("Register", "\347\224\265\345\255\220\351\202\256\344\273\266", nullptr));
        gender_input->setItemText(0, QApplication::translate("Register", "\347\224\267", nullptr));
        gender_input->setItemText(1, QApplication::translate("Register", "\345\245\263", nullptr));

        label_5->setText(QApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("Register", "\350\264\246\345\217\267\345\220\215", nullptr));
        is_merchant_input->setItemText(0, QApplication::translate("Register", "\346\230\257", nullptr));
        is_merchant_input->setItemText(1, QApplication::translate("Register", "\345\220\246", nullptr));

        comfirm->setText(QApplication::translate("Register", "\347\241\256\345\256\232", nullptr));
        label_17->setText(QApplication::translate("Register", "\346\224\257\344\273\230\346\226\271\345\274\2172", nullptr));
        label_8->setText(QApplication::translate("Register", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_9->setText(QApplication::translate("Register", "\345\247\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
