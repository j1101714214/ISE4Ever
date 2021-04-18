#include "pickframe.h"
#include "ui_pickframe.h"

Pickframe::Pickframe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pickframe)
{
    ui->setupUi(this);
}

Pickframe::~Pickframe()
{
    delete ui;
}
