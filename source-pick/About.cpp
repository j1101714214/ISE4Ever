
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#include "About.h"
#include "ui_About.h"
#include "Courses.h"


extern Courses crs;        //get object crs from init part
About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}
int About::callinfo(int index,int useless){
    Courses::CS m=crs.searchIndex(index);
    ui->label->setText(QString::fromStdString(m.name+"::"+m.num+"\n教师："+m.teacher+"\n学分："+std::to_string(m.score)+"\n"));
    return useless;
}        //show details
