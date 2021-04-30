
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */

/*
 *需求分析：
 *1)	学校课程种类繁多，学生容易陷入选课困难
 *2)	课程时间错综复杂，学生难以合理规划课程
 *3)	学生个人习惯不同，学生难以个性化安排课表
 *4)	成功选课概率较小，学生需要选课备选方案
 */


#include "mainwindow.h"
#include "Courses.h"
#include "About.h"
#include <QApplication>
#include<Serch.h>

int main(int argc, char *argv[])
{
    readDir();       //find ./result if not, make a new one.
    extern Courses crs;       //get object crs from init part
    crs.inputInfo();        //get last result and put it to mainwindow
    QApplication a(argc, argv);       //Init QT followings
    MainWindow w;
    w.show();
    return a.exec();
}
