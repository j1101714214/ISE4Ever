
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#ifndef ABOUT_H
#define ABOUT_H
//About Frame Class
#include <QDialog>

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    int callinfo(int index,int useless=0);
    ~About();

private:
    Ui::About *ui;
};

#endif // ABOUT_H
