#ifndef DATABASE0_H
#define DATABASE0_H

#include <QMainWindow>

namespace Ui {
class database0;
}

class database0 : public QMainWindow
{
    Q_OBJECT

public:
    explicit database0(QWidget *parent = nullptr);
    ~database0();

private:
    Ui::database0 *ui;
};

#endif // DATABASE0_H
