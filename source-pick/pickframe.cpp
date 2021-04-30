
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#include "pickframe.h"
#include "ui_pickframe.h"
#include "Courses.h"
#include "QStandardItemModel"
#include <regex>

extern Courses crs;

Pickframe::Pickframe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pickframe)
{
    ui->setupUi(this);
    on_Button_search_clicked();
}

Pickframe::~Pickframe()
{
    delete ui;
}


void Pickframe::on_Button_search_clicked()
{
    //add generic match here//all changed to modelx
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    std::string ff=ui->searchT->toPlainText().toStdString();
    int oppp=crs.gettotal();
    for(int i=0;i<oppp;i++){
    std::string str = crs.getCoursesName(i);
    if (std::regex_search(str,regex(ff,std::regex::icase))){
        int k = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(k);
        QTableWidgetItem *nameItem = new QTableWidgetItem(QString::fromStdString(str));
        QTableWidgetItem *ketouItem = new QTableWidgetItem(QString::fromStdString(crs.getCoursesNum(i)));
        QTableWidgetItem *teacherItem = new QTableWidgetItem(QString::fromStdString(crs.getCoursesTeacher(i)));
        QTableWidgetItem *boolItem = new QTableWidgetItem(QString::fromStdString(crs.getCoursesBool(i)));
        ui->tableWidget->setItem(k,1,nameItem);
        ui->tableWidget->setItem(k,0,ketouItem);
        ui->tableWidget->setItem(k,2,teacherItem);
        ui->tableWidget->setItem(k,3,boolItem);
        QTableWidgetItem *headItem = new QTableWidgetItem(QString::fromStdString(std::to_string(i)));
        ui->tableWidget->setVerticalHeaderItem(k,headItem);
    }//match courses by using regex

    else{
         continue;
    }
    }
}

void Pickframe::on_tableWidget_cellChanged(int row,int column)
{
    //Ui_Pickframe::tableWidget.cell change to false
    if(column==3){
       QTableWidgetItem *qit=ui->tableWidget->currentItem();
       if (qit!=NULL)
       {QString status = qit->text();
           if(status==QString::fromStdString("t")){
               ui->tableWidget->currentItem()->setText(QString::fromStdString("true"));
               return;
           }
           else if(status==QString::fromStdString("T")){
               ui->tableWidget->currentItem()->setText(QString::fromStdString("true"));
               return;
           }
           else if(status==QString::fromStdString("f")){
               ui->tableWidget->currentItem()->setText(QString::fromStdString("false"));
               return;
           }
           else if(status==QString::fromStdString("F")){
               ui->tableWidget->currentItem()->setText(QString::fromStdString("false"));
               return;
           }
           else if(status==QString::fromStdString("true")){
               ui->tableWidget->currentItem()->setText(QString::fromStdString("true"));
               crs.setCoursesBool(atoi(ui->tableWidget->verticalHeaderItem(row)->text().toStdString().c_str()),true);
               return;
           }
           else if(status==QString::fromStdString("false")){
               ui->tableWidget->currentItem()->setText(QString::fromStdString("false"));
               crs.setCoursesBool(atoi(ui->tableWidget->verticalHeaderItem(row)->text().toStdString().c_str()),false);
               return;
           }
           else{ui->tableWidget->currentItem()->setText(QString::fromStdString("false"));return;}
           }
           else{return;}}

       else
           return;

    // set true false and other wrong situation
}

void Pickframe::on_OK_clicked()
{
    this->close();
}//close frame
