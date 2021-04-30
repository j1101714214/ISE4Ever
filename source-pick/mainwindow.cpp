
/*
 * author by Man & Liu.
 * Begi: 2021/03/15
 * Endi: 2021/04/28
 */


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Serch.h"
#include"Courses.h"
#include<QDir>
#include "About.h"
extern Courses crs;       //get object crs from init part

bool deleteDirectory(const QString &path)
{
    if (path.isEmpty())
        return false;

    QDir dir(path);
    if(!dir.exists())
        return true;

    dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot);
    QFileInfoList fileList = dir.entryInfoList();
    foreach (QFileInfo fi, fileList)
    {
        if (fi.isFile())
            fi.dir().remove(fi.fileName());
        else
            deleteDirectory(fi.absoluteFilePath());
    }
    return dir.rmpath(dir.absolutePath());}       //del dir with files


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    currentnum=0;
    setTable(currentnum);        //show last result
    ui->label->setText(QString::fromStdString("第"+std::to_string(currentnum+1)+"个/共"+std::to_string(readDir())+"个"));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_SourceControl_clicked()
{
    pickframe->show();
}

void MainWindow::on_GernerateButton_clicked()
{
    //generate button event
    deleteDirectory("result");
    readDir();        //del last result and mkdir
    SearchFun::SearchMain();        //core of search part
    currentnum=0;       //show result
    setTable(currentnum);
    ui->label->setText(QString::fromStdString("第"+std::to_string(currentnum+1)+"个/共"+std::to_string(readDir())+"个"));
}





void MainWindow::on_Lastone_clicked()
{   if(currentnum>0){
        currentnum-=1;
       setTable(currentnum);
    ui->label->setText(QString::fromStdString("第"+std::to_string(currentnum+1)+"个/共"+std::to_string(readDir())+"个"));}
    else{currentnum=readDir()-1;setTable(currentnum);        //show -1
        ui->label->setText(QString::fromStdString("第"+std::to_string(currentnum+1)+"个/共"+std::to_string(readDir())+"个"));}
}        //show last one

void MainWindow::on_Nextone_clicked()
{
    if(currentnum+1<readDir()){
            currentnum+=1;
            setTable(currentnum);
        ui->label->setText(QString::fromStdString("第"+std::to_string(currentnum+1)+"个/共"+std::to_string(readDir())+"个"));
    }
    else{currentnum=0;setTable(currentnum);        //show 0
        ui->label->setText(QString::fromStdString("第"+std::to_string(currentnum+1)+"个/共"+std::to_string(readDir())+"个"));}
}       //show next one


void MainWindow::setTable(int num){
    if(num>-6){  //clear current Ns
        ui->n_1->clear();
        ui->n_2->clear();
        ui->n_3->clear();
        ui->n_4->clear();
        ui->n_5->clear();
        ui->n_6->clear();
        ui->n_7->clear();
        ui->n_8->clear();
        ui->n_9->clear();
        ui->n_10->clear();
        ui->n_11->clear();
        ui->n_12->clear();
        ui->n_13->clear();
        ui->n_14->clear();
        ui->n_15->clear();
        ui->n_16->clear();
        ui->n_17->clear();
        ui->n_18->clear();
        ui->n_19->clear();
        ui->n_20->clear();
        ui->n_21->clear();
        ui->n_22->clear();
        ui->n_23->clear();
        ui->n_24->clear();
        ui->n_25->clear();
        ui->n_26->clear();
        ui->n_27->clear();
        ui->n_28->clear();
        ui->n_29->clear();
        ui->n_30->clear();
        ui->n_31->clear();
        ui->n_32->clear();
        ui->n_33->clear();
        ui->n_34->clear();
        ui->n_35->clear();
        ui->n_36->clear();
        ui->n_37->clear();
        ui->n_38->clear();
        ui->n_39->clear();
        ui->n_40->clear();
        ui->n_41->clear();
        ui->n_42->clear();
        ui->n_43->clear();
        ui->n_44->clear();
        ui->n_45->clear();
        ui->n_46->clear();
        ui->n_47->clear();
        ui->n_48->clear();
        ui->n_49->clear();
        ui->n_50->clear();
        ui->n_51->clear();
        ui->n_52->clear();
        ui->n_53->clear();
        ui->n_54->clear();
        ui->n_55->clear();
        ui->n_56->clear();
        ui->n_57->clear();
        ui->n_58->clear();
        ui->n_59->clear();
        ui->n_60->clear();
        ui->n_61->clear();
        ui->n_62->clear();
        ui->n_63->clear();
        ui->n_64->clear();
        ui->n_65->clear();
        ui->n_66->clear();
        ui->n_67->clear();
        ui->n_68->clear();
        ui->n_69->clear();
        ui->n_70->clear();
        ui->n_71->clear();
        ui->n_72->clear();
        ui->n_73->clear();
        ui->n_74->clear();
        ui->n_75->clear();
        ui->n_76->clear();
        ui->n_77->clear();
        ui->n_78->clear();
        ui->n_79->clear();
        ui->n_80->clear();
        ui->n_81->clear();
        ui->n_82->clear();
        ui->n_83->clear();
        ui->n_84->clear();
        ui->n_85->clear();
        ui->n_86->clear();
        ui->n_87->clear();
        ui->n_88->clear();
        ui->n_89->clear();
        ui->n_90->clear();
        ui->n_91->clear();
    }//clear
    if(readDir()!=0){
    //set info to each N
    crs.setFileInfo(num);
    for(int i=0;i<(int)crs.getFileInfo(1).size();i++){ui->n_1->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(1)[i]).name)+"_"+std::to_string(crs.getFileInfo(1)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(2).size();i++){ui->n_2->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(2)[i]).name)+"_"+std::to_string(crs.getFileInfo(2)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(3).size();i++){ui->n_3->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(3)[i]).name)+"_"+std::to_string(crs.getFileInfo(3)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(4).size();i++){ui->n_4->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(4)[i]).name)+"_"+std::to_string(crs.getFileInfo(4)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(5).size();i++){ui->n_5->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(5)[i]).name)+"_"+std::to_string(crs.getFileInfo(5)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(6).size();i++){ui->n_6->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(6)[i]).name)+"_"+std::to_string(crs.getFileInfo(6)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(7).size();i++){ui->n_7->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(7)[i]).name)+"_"+std::to_string(crs.getFileInfo(7)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(8).size();i++){ui->n_8->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(8)[i]).name)+"_"+std::to_string(crs.getFileInfo(8)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(9).size();i++){ui->n_9->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(9)[i]).name)+"_"+std::to_string(crs.getFileInfo(9)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(10).size();i++){ui->n_10->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(10)[i]).name)+"_"+std::to_string(crs.getFileInfo(10)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(11).size();i++){ui->n_11->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(11)[i]).name)+"_"+std::to_string(crs.getFileInfo(11)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(12).size();i++){ui->n_12->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(12)[i]).name)+"_"+std::to_string(crs.getFileInfo(12)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(13).size();i++){ui->n_13->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(13)[i]).name)+"_"+std::to_string(crs.getFileInfo(13)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(14).size();i++){ui->n_14->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(14)[i]).name)+"_"+std::to_string(crs.getFileInfo(14)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(15).size();i++){ui->n_15->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(15)[i]).name)+"_"+std::to_string(crs.getFileInfo(15)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(16).size();i++){ui->n_16->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(16)[i]).name)+"_"+std::to_string(crs.getFileInfo(16)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(17).size();i++){ui->n_17->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(17)[i]).name)+"_"+std::to_string(crs.getFileInfo(17)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(18).size();i++){ui->n_18->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(18)[i]).name)+"_"+std::to_string(crs.getFileInfo(18)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(19).size();i++){ui->n_19->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(19)[i]).name)+"_"+std::to_string(crs.getFileInfo(19)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(20).size();i++){ui->n_20->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(20)[i]).name)+"_"+std::to_string(crs.getFileInfo(20)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(21).size();i++){ui->n_21->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(21)[i]).name)+"_"+std::to_string(crs.getFileInfo(21)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(22).size();i++){ui->n_22->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(22)[i]).name)+"_"+std::to_string(crs.getFileInfo(22)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(23).size();i++){ui->n_23->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(23)[i]).name)+"_"+std::to_string(crs.getFileInfo(23)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(24).size();i++){ui->n_24->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(24)[i]).name)+"_"+std::to_string(crs.getFileInfo(24)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(25).size();i++){ui->n_25->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(25)[i]).name)+"_"+std::to_string(crs.getFileInfo(25)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(26).size();i++){ui->n_26->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(26)[i]).name)+"_"+std::to_string(crs.getFileInfo(26)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(27).size();i++){ui->n_27->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(27)[i]).name)+"_"+std::to_string(crs.getFileInfo(27)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(28).size();i++){ui->n_28->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(28)[i]).name)+"_"+std::to_string(crs.getFileInfo(28)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(29).size();i++){ui->n_29->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(29)[i]).name)+"_"+std::to_string(crs.getFileInfo(29)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(30).size();i++){ui->n_30->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(30)[i]).name)+"_"+std::to_string(crs.getFileInfo(30)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(31).size();i++){ui->n_31->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(31)[i]).name)+"_"+std::to_string(crs.getFileInfo(31)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(32).size();i++){ui->n_32->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(32)[i]).name)+"_"+std::to_string(crs.getFileInfo(32)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(33).size();i++){ui->n_33->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(33)[i]).name)+"_"+std::to_string(crs.getFileInfo(33)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(34).size();i++){ui->n_34->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(34)[i]).name)+"_"+std::to_string(crs.getFileInfo(34)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(35).size();i++){ui->n_35->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(35)[i]).name)+"_"+std::to_string(crs.getFileInfo(35)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(36).size();i++){ui->n_36->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(36)[i]).name)+"_"+std::to_string(crs.getFileInfo(36)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(37).size();i++){ui->n_37->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(37)[i]).name)+"_"+std::to_string(crs.getFileInfo(37)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(38).size();i++){ui->n_38->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(38)[i]).name)+"_"+std::to_string(crs.getFileInfo(38)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(39).size();i++){ui->n_39->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(39)[i]).name)+"_"+std::to_string(crs.getFileInfo(39)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(40).size();i++){ui->n_40->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(40)[i]).name)+"_"+std::to_string(crs.getFileInfo(40)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(41).size();i++){ui->n_41->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(41)[i]).name)+"_"+std::to_string(crs.getFileInfo(41)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(42).size();i++){ui->n_42->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(42)[i]).name)+"_"+std::to_string(crs.getFileInfo(42)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(43).size();i++){ui->n_43->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(43)[i]).name)+"_"+std::to_string(crs.getFileInfo(43)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(44).size();i++){ui->n_44->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(44)[i]).name)+"_"+std::to_string(crs.getFileInfo(44)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(45).size();i++){ui->n_45->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(45)[i]).name)+"_"+std::to_string(crs.getFileInfo(45)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(46).size();i++){ui->n_46->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(46)[i]).name)+"_"+std::to_string(crs.getFileInfo(46)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(47).size();i++){ui->n_47->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(47)[i]).name)+"_"+std::to_string(crs.getFileInfo(47)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(48).size();i++){ui->n_48->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(48)[i]).name)+"_"+std::to_string(crs.getFileInfo(48)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(49).size();i++){ui->n_49->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(49)[i]).name)+"_"+std::to_string(crs.getFileInfo(49)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(50).size();i++){ui->n_50->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(50)[i]).name)+"_"+std::to_string(crs.getFileInfo(50)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(51).size();i++){ui->n_51->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(51)[i]).name)+"_"+std::to_string(crs.getFileInfo(51)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(52).size();i++){ui->n_52->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(52)[i]).name)+"_"+std::to_string(crs.getFileInfo(52)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(53).size();i++){ui->n_53->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(53)[i]).name)+"_"+std::to_string(crs.getFileInfo(53)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(54).size();i++){ui->n_54->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(54)[i]).name)+"_"+std::to_string(crs.getFileInfo(54)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(55).size();i++){ui->n_55->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(55)[i]).name)+"_"+std::to_string(crs.getFileInfo(55)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(56).size();i++){ui->n_56->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(56)[i]).name)+"_"+std::to_string(crs.getFileInfo(56)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(57).size();i++){ui->n_57->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(57)[i]).name)+"_"+std::to_string(crs.getFileInfo(57)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(58).size();i++){ui->n_58->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(58)[i]).name)+"_"+std::to_string(crs.getFileInfo(58)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(59).size();i++){ui->n_59->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(59)[i]).name)+"_"+std::to_string(crs.getFileInfo(59)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(60).size();i++){ui->n_60->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(60)[i]).name)+"_"+std::to_string(crs.getFileInfo(60)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(61).size();i++){ui->n_61->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(61)[i]).name)+"_"+std::to_string(crs.getFileInfo(61)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(62).size();i++){ui->n_62->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(62)[i]).name)+"_"+std::to_string(crs.getFileInfo(62)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(63).size();i++){ui->n_63->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(63)[i]).name)+"_"+std::to_string(crs.getFileInfo(63)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(64).size();i++){ui->n_64->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(64)[i]).name)+"_"+std::to_string(crs.getFileInfo(64)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(65).size();i++){ui->n_65->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(65)[i]).name)+"_"+std::to_string(crs.getFileInfo(65)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(66).size();i++){ui->n_66->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(66)[i]).name)+"_"+std::to_string(crs.getFileInfo(66)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(67).size();i++){ui->n_67->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(67)[i]).name)+"_"+std::to_string(crs.getFileInfo(67)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(68).size();i++){ui->n_68->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(68)[i]).name)+"_"+std::to_string(crs.getFileInfo(68)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(69).size();i++){ui->n_69->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(69)[i]).name)+"_"+std::to_string(crs.getFileInfo(69)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(70).size();i++){ui->n_70->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(70)[i]).name)+"_"+std::to_string(crs.getFileInfo(70)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(71).size();i++){ui->n_71->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(71)[i]).name)+"_"+std::to_string(crs.getFileInfo(71)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(72).size();i++){ui->n_72->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(72)[i]).name)+"_"+std::to_string(crs.getFileInfo(72)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(73).size();i++){ui->n_73->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(73)[i]).name)+"_"+std::to_string(crs.getFileInfo(73)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(74).size();i++){ui->n_74->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(74)[i]).name)+"_"+std::to_string(crs.getFileInfo(74)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(75).size();i++){ui->n_75->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(75)[i]).name)+"_"+std::to_string(crs.getFileInfo(75)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(76).size();i++){ui->n_76->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(76)[i]).name)+"_"+std::to_string(crs.getFileInfo(76)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(77).size();i++){ui->n_77->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(77)[i]).name)+"_"+std::to_string(crs.getFileInfo(77)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(78).size();i++){ui->n_78->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(78)[i]).name)+"_"+std::to_string(crs.getFileInfo(78)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(79).size();i++){ui->n_79->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(79)[i]).name)+"_"+std::to_string(crs.getFileInfo(79)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(80).size();i++){ui->n_80->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(80)[i]).name)+"_"+std::to_string(crs.getFileInfo(80)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(81).size();i++){ui->n_81->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(81)[i]).name)+"_"+std::to_string(crs.getFileInfo(81)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(82).size();i++){ui->n_82->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(82)[i]).name)+"_"+std::to_string(crs.getFileInfo(82)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(83).size();i++){ui->n_83->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(83)[i]).name)+"_"+std::to_string(crs.getFileInfo(83)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(84).size();i++){ui->n_84->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(84)[i]).name)+"_"+std::to_string(crs.getFileInfo(84)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(85).size();i++){ui->n_85->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(85)[i]).name)+"_"+std::to_string(crs.getFileInfo(85)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(86).size();i++){ui->n_86->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(86)[i]).name)+"_"+std::to_string(crs.getFileInfo(86)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(87).size();i++){ui->n_87->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(87)[i]).name)+"_"+std::to_string(crs.getFileInfo(87)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(88).size();i++){ui->n_88->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(88)[i]).name)+"_"+std::to_string(crs.getFileInfo(88)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(89).size();i++){ui->n_89->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(89)[i]).name)+"_"+std::to_string(crs.getFileInfo(89)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(90).size();i++){ui->n_90->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(90)[i]).name)+"_"+std::to_string(crs.getFileInfo(90)[i])));}
    for(int i=0;i<(int)crs.getFileInfo(91).size();i++){ui->n_91->addItem(QString::fromStdString((crs.searchIndex(crs.getFileInfo(91)[i]).name)+"_"+std::to_string(crs.getFileInfo(91)[i])));}
}       //set table info
}



void MainWindow::on_n_1_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_1->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_2_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_2->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_3_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_3->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_4_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_4->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_5_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_5->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_6_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_6->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_7_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_7->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_8_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_8->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_9_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_9->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_10_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_10->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_11_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_11->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_12_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_12->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_13_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_13->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_14_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_14->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_15_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_15->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_16_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_16->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_17_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_17->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_18_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_18->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_19_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_19->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_20_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_20->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_21_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_21->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_22_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_22->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_23_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_23->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_24_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_24->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_25_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_25->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_26_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_26->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_27_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_27->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_28_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_28->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_29_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_29->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_30_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_30->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_31_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_31->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_32_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_32->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_33_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_33->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_34_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_34->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_35_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_35->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_36_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_36->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_37_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_37->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_38_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_38->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_39_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_39->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_40_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_40->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_41_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_41->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_42_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_42->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_43_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_43->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_44_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_44->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_45_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_45->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_46_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_46->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_47_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_47->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_48_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_48->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_49_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_49->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_50_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_50->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_51_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_51->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_52_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_52->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_53_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_53->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_54_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_54->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_55_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_55->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_56_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_56->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_57_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_57->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_58_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_58->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_59_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_59->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_60_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_60->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_61_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_61->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_62_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_62->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_63_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_63->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_64_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_64->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_65_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_65->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_66_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_66->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_67_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_67->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_68_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_68->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_69_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_69->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_70_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_70->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_71_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_71->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_72_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_72->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_73_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_73->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_74_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_74->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_75_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_75->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_76_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_76->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_77_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_77->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_78_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_78->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_79_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_79->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_80_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_80->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_81_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_81->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_82_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_82->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_83_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_83->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_84_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_84->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_85_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_85->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_86_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_86->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_87_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_87->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_88_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_88->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_89_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_89->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_90_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_90->currentText().toStdString(),1,'_'),index);k.show();}
void MainWindow::on_n_91_activated(int index){k.callinfo(SearchFun::dividestring(ui->n_91->currentText().toStdString(),1,'_'),index);k.show();}

