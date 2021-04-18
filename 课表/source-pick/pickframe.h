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

private:
    Ui::Pickframe *ui;
};

#endif // PICKFRAME_H
