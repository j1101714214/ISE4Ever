/********************************************************************************
** Form generated from reading UI file 'pickframe.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKFRAME_H
#define UI_PICKFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Pickframe
{
public:
    QPushButton *OK;
    QPushButton *Button_search;
    QTextEdit *searchT;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Pickframe)
    {
        if (Pickframe->objectName().isEmpty())
            Pickframe->setObjectName(QString::fromUtf8("Pickframe"));
        Pickframe->resize(774, 486);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/1/skr.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Pickframe->setWindowIcon(icon);
        OK = new QPushButton(Pickframe);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(570, 20, 171, 51));
        Button_search = new QPushButton(Pickframe);
        Button_search->setObjectName(QString::fromUtf8("Button_search"));
        Button_search->setGeometry(QRect(390, 20, 171, 51));
        searchT = new QTextEdit(Pickframe);
        searchT->setObjectName(QString::fromUtf8("searchT"));
        searchT->setGeometry(QRect(40, 20, 321, 51));
        QFont font;
        font.setPointSize(11);
        searchT->setFont(font);
        tableWidget = new QTableWidget(Pickframe);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem8);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 90, 711, 361));
        tableWidget->setFont(font);
        tableWidget->setAutoFillBackground(false);
        tableWidget->setLineWidth(20);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSortingEnabled(true);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(60);
        tableWidget->horizontalHeader()->setDefaultSectionSize(170);

        retranslateUi(Pickframe);

        QMetaObject::connectSlotsByName(Pickframe);
    } // setupUi

    void retranslateUi(QDialog *Pickframe)
    {
        Pickframe->setWindowTitle(QCoreApplication::translate("Pickframe", "\347\255\233\351\200\211\347\252\227\345\217\243", nullptr));
        OK->setText(QCoreApplication::translate("Pickframe", "\347\241\256\345\256\232", nullptr));
        Button_search->setText(QCoreApplication::translate("Pickframe", "\346\237\245\346\211\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Pickframe", "\350\257\276\345\244\264\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Pickframe", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Pickframe", "\346\225\231\345\270\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Pickframe", "\346\230\257\345\220\246\345\267\262\351\200\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Pickframe", "1", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Pickframe", "202011112222", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Pickframe", "\351\253\230\347\272\247\350\257\255\350\250\200\350\256\276\350\256\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Pickframe", "\344\275\225\345\233\275\350\211\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Pickframe", "false", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Pickframe: public Ui_Pickframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKFRAME_H
