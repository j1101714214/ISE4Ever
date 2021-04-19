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
    void on_searchT_textChanged();

    void on_Button_search_clicked();

    void on_tableWidget_cellChanged(int row, int column);

private:
    Ui::Pickframe *ui;
};

#endif // PICKFRAME_H
