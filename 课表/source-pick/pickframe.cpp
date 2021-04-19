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

void Pickframe::on_searchT_textChanged()
{
    //add generic match here

}

void Pickframe::on_Button_search_clicked()
{
    Pickframe::on_searchT_textChanged();
}

void Pickframe::on_tableWidget_cellChanged(int row, int column)
{
    //Ui_Pickframe::tableWidget.cell change to false
    //object(from COurse::Course).correct(int num);
}
