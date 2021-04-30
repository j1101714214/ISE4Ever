
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#ifndef PICKFRAME_H
#define PICKFRAME_H

#include <QDialog>

namespace Ui {
class Pickframe;
}

class Pickframe : public QDialog
{
    Q_OBJECT

public:
    explicit Pickframe(QWidget *parent = nullptr);
    ~Pickframe();

private slots:

    void on_Button_search_clicked();        //start search by using regex

    void on_tableWidget_cellChanged(int row,int column);        //set true or false

    void on_OK_clicked();        //press Ok to eject pickframe

private:
    Ui::Pickframe *ui;
};

#endif // PICKFRAME_H
