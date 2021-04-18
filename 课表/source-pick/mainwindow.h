#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pickframe.h"

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
    void on_SourceControl_clicked();

    void on_GernerateButton_clicked();

    void on_n_1_activated(int index);


private:
    Ui::MainWindow *ui;
    Pickframe *pickframe= new Pickframe;
};
#endif // MAINWINDOW_H
