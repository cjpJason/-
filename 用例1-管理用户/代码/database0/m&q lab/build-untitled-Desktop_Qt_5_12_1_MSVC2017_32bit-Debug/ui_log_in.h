/********************************************************************************
** Form generated from reading UI file 'log_in.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_IN_H
#define UI_LOG_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_in
{
public:
    QWidget *centralWidget;
    QPushButton *log_in_2;
    QPushButton *register_2;
    QLabel *title;
    QLabel *account_lable;
    QLabel *password_lable;
    QLineEdit *account_input;
    QLineEdit *password_input;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *log_in)
    {
        if (log_in->objectName().isEmpty())
            log_in->setObjectName(QString::fromUtf8("log_in"));
        log_in->resize(376, 260);
        centralWidget = new QWidget(log_in);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        log_in_2 = new QPushButton(centralWidget);
        log_in_2->setObjectName(QString::fromUtf8("log_in_2"));
        log_in_2->setGeometry(QRect(70, 200, 71, 28));
        register_2 = new QPushButton(centralWidget);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setGeometry(QRect(210, 200, 71, 28));
        title = new QLabel(centralWidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(80, 20, 221, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));
        account_lable = new QLabel(centralWidget);
        account_lable->setObjectName(QString::fromUtf8("account_lable"));
        account_lable->setGeometry(QRect(40, 90, 41, 16));
        password_lable = new QLabel(centralWidget);
        password_lable->setObjectName(QString::fromUtf8("password_lable"));
        password_lable->setGeometry(QRect(40, 140, 41, 16));
        account_input = new QLineEdit(centralWidget);
        account_input->setObjectName(QString::fromUtf8("account_input"));
        account_input->setGeometry(QRect(90, 90, 211, 21));
        account_input->setStyleSheet(QString::fromUtf8(""));
        password_input = new QLineEdit(centralWidget);
        password_input->setObjectName(QString::fromUtf8("password_input"));
        password_input->setGeometry(QRect(90, 130, 211, 21));
        password_input->setEchoMode(QLineEdit::Password);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 411, 311));
        QFont font1;
        font1.setPointSize(10);
        graphicsView->setFont(font1);
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/timg.jpg);"));
        log_in->setCentralWidget(centralWidget);
        graphicsView->raise();
        log_in_2->raise();
        register_2->raise();
        title->raise();
        account_lable->raise();
        password_lable->raise();
        account_input->raise();
        password_input->raise();

        retranslateUi(log_in);

        QMetaObject::connectSlotsByName(log_in);
    } // setupUi

    void retranslateUi(QMainWindow *log_in)
    {
        log_in->setWindowTitle(QApplication::translate("log_in", "log_in", nullptr));
        log_in_2->setText(QApplication::translate("log_in", "\347\231\273\345\275\225", nullptr));
        register_2->setText(QApplication::translate("log_in", "\346\263\250\345\206\214", nullptr));
        title->setText(QApplication::translate("log_in", "\345\256\205\350\241\214\347\244\276\347\224\265\345\225\206\347\263\273\347\273\237\347\231\273\345\275\225", nullptr));
        account_lable->setText(QApplication::translate("log_in", "\350\264\246\345\217\267", nullptr));
        password_lable->setText(QApplication::translate("log_in", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log_in: public Ui_log_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_IN_H
