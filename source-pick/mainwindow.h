
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pickframe.h"
#include"About.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_SourceControl_clicked();       //Open pickframe

    void on_GernerateButton_clicked();     //start generate timetable



    void on_Lastone_clicked();       //last page

    void on_Nextone_clicked();       //next page
    void setTable(int num);   //give information of course at current time index


    //for show the details
    void on_n_1_activated(int index);
    void on_n_2_activated(int index);
    void on_n_3_activated(int index);
    void on_n_4_activated(int index);
    void on_n_5_activated(int index);
    void on_n_6_activated(int index);
    void on_n_7_activated(int index);
    void on_n_8_activated(int index);
    void on_n_9_activated(int index);
    void on_n_10_activated(int index);
    void on_n_11_activated(int index);
    void on_n_12_activated(int index);
    void on_n_13_activated(int index);
    void on_n_14_activated(int index);
    void on_n_15_activated(int index);
    void on_n_16_activated(int index);
    void on_n_17_activated(int index);
    void on_n_18_activated(int index);
    void on_n_19_activated(int index);
    void on_n_20_activated(int index);
    void on_n_21_activated(int index);
    void on_n_22_activated(int index);
    void on_n_23_activated(int index);
    void on_n_24_activated(int index);
    void on_n_25_activated(int index);
    void on_n_26_activated(int index);
    void on_n_27_activated(int index);
    void on_n_28_activated(int index);
    void on_n_29_activated(int index);
    void on_n_30_activated(int index);
    void on_n_31_activated(int index);
    void on_n_32_activated(int index);
    void on_n_33_activated(int index);
    void on_n_34_activated(int index);
    void on_n_35_activated(int index);
    void on_n_36_activated(int index);
    void on_n_37_activated(int index);
    void on_n_38_activated(int index);
    void on_n_39_activated(int index);
    void on_n_40_activated(int index);
    void on_n_41_activated(int index);
    void on_n_42_activated(int index);
    void on_n_43_activated(int index);
    void on_n_44_activated(int index);
    void on_n_45_activated(int index);
    void on_n_46_activated(int index);
    void on_n_47_activated(int index);
    void on_n_48_activated(int index);
    void on_n_49_activated(int index);
    void on_n_50_activated(int index);
    void on_n_51_activated(int index);
    void on_n_52_activated(int index);
    void on_n_53_activated(int index);
    void on_n_54_activated(int index);
    void on_n_55_activated(int index);
    void on_n_56_activated(int index);
    void on_n_57_activated(int index);
    void on_n_58_activated(int index);
    void on_n_59_activated(int index);
    void on_n_60_activated(int index);
    void on_n_61_activated(int index);
    void on_n_62_activated(int index);
    void on_n_63_activated(int index);
    void on_n_64_activated(int index);
    void on_n_65_activated(int index);
    void on_n_66_activated(int index);
    void on_n_67_activated(int index);
    void on_n_68_activated(int index);
    void on_n_69_activated(int index);
    void on_n_70_activated(int index);
    void on_n_71_activated(int index);
    void on_n_72_activated(int index);
    void on_n_73_activated(int index);
    void on_n_74_activated(int index);
    void on_n_75_activated(int index);
    void on_n_76_activated(int index);
    void on_n_77_activated(int index);
    void on_n_78_activated(int index);
    void on_n_79_activated(int index);
    void on_n_80_activated(int index);
    void on_n_81_activated(int index);
    void on_n_82_activated(int index);
    void on_n_83_activated(int index);
    void on_n_84_activated(int index);
    void on_n_85_activated(int index);
    void on_n_86_activated(int index);
    void on_n_87_activated(int index);
    void on_n_88_activated(int index);
    void on_n_89_activated(int index);
    void on_n_90_activated(int index);
    void on_n_91_activated(int index);


private:
    Ui::MainWindow *ui;
    Pickframe *pickframe= new Pickframe;
    int currentnum=0;
    About k;
};
#endif // MAINWINDOW_H
