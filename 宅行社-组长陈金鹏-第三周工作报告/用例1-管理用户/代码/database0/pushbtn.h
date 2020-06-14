#ifndef PUSHBTN_H
#define PUSHBTN_H
#include<atlstr.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include <fstream>
#include<qpushbutton.h>
#include<qmessagebox.h>
#include<qinputdialog.h>
#include<qobject.h>
#include<cstring>
#include<Windows.h>
#include "cregister.h"
using namespace std;
class PushBtn : public QPushButton {
    Q_OBJECT
public:
    QString text0, text1, text2, text3, text4;
    HWND hwnd;
    PushBtn(QWidget *parent =0) :QPushButton(parent) {
        connect(this, SIGNAL(clicked()), this, SLOT(OnClicked()));
    }
    void OnClicked() {
        QString str;
        str = "You press" + this->text();
        QMessageBox::information(this, tr("Information"), str);
    }
private slots:


};
#endif // PUSHBTN_H
