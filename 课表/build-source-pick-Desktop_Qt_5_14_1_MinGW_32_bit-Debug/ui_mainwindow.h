/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionimport;
    QAction *actionexport;
    QAction *actionabout;
    QAction *actionexit;
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *SourceControl;
    QLabel *space;
    QPushButton *GernerateButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QComboBox *n_35;
    QComboBox *n_77;
    QComboBox *n_8;
    QComboBox *n_91;
    QComboBox *n_31;
    QComboBox *n_14;
    QComboBox *n_65;
    QComboBox *n_12;
    QComboBox *n_81;
    QComboBox *n_37;
    QComboBox *n_48;
    QComboBox *n_69;
    QComboBox *n_10;
    QComboBox *n_15;
    QComboBox *n_54;
    QComboBox *n_67;
    QComboBox *n_13;
    QComboBox *n_18;
    QComboBox *n_7;
    QComboBox *n_46;
    QComboBox *n_71;
    QComboBox *n_24;
    QComboBox *n_80;
    QComboBox *n_2;
    QComboBox *n_83;
    QComboBox *n_43;
    QComboBox *n_29;
    QComboBox *n_63;
    QComboBox *n_26;
    QComboBox *n_33;
    QComboBox *n_4;
    QComboBox *n_64;
    QComboBox *n_59;
    QComboBox *n_84;
    QComboBox *n_42;
    QComboBox *n_44;
    QComboBox *n_87;
    QComboBox *n_79;
    QComboBox *n_21;
    QComboBox *n_40;
    QComboBox *n_66;
    QComboBox *n_72;
    QComboBox *n_74;
    QComboBox *n_60;
    QComboBox *n_61;
    QComboBox *n_20;
    QComboBox *n_39;
    QComboBox *n_36;
    QComboBox *n_32;
    QComboBox *n_88;
    QComboBox *n_22;
    QComboBox *n_16;
    QComboBox *n_73;
    QComboBox *n_56;
    QComboBox *n_34;
    QComboBox *n_68;
    QComboBox *n_76;
    QComboBox *n_45;
    QComboBox *n_86;
    QComboBox *n_9;
    QComboBox *n_57;
    QComboBox *n_6;
    QComboBox *n_62;
    QComboBox *n_27;
    QComboBox *n_38;
    QComboBox *n_90;
    QComboBox *n_89;
    QComboBox *n_82;
    QComboBox *n_70;
    QComboBox *n_49;
    QComboBox *n_78;
    QComboBox *n_25;
    QComboBox *n_50;
    QComboBox *n_11;
    QComboBox *n_3;
    QComboBox *n_75;
    QComboBox *n_51;
    QComboBox *n_5;
    QComboBox *n_41;
    QComboBox *n_30;
    QComboBox *n_1;
    QComboBox *n_19;
    QComboBox *n_23;
    QComboBox *n_85;
    QComboBox *n_52;
    QComboBox *n_53;
    QComboBox *n_28;
    QComboBox *n_47;
    QComboBox *n_17;
    QComboBox *n_55;
    QComboBox *n_58;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Lastone;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Nextone;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *copyright;
    QSpacerItem *horizontalSpacer_6;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(822, 623);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(8192, 4608));
        MainWindow->setSizeIncrement(QSize(50, 50));
        MainWindow->setBaseSize(QSize(800, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/1/skr.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Triangular);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionimport = new QAction(MainWindow);
        actionimport->setObjectName(QString::fromUtf8("actionimport"));
        actionexport = new QAction(MainWindow);
        actionexport->setObjectName(QString::fromUtf8("actionexport"));
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QString::fromUtf8("actionabout"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(800, 500));
        centralwidget->setSizeIncrement(QSize(50, 50));
        centralwidget->setBaseSize(QSize(800, 500));
        centralwidget->setAutoFillBackground(true);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(8, -23, 821, 621));
        frame->setStyleSheet(QString::fromUtf8("background-image: url(:/1/f1.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 807, 567));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        SourceControl = new QPushButton(gridLayoutWidget_2);
        SourceControl->setObjectName(QString::fromUtf8("SourceControl"));
        SourceControl->setEnabled(true);

        horizontalLayout->addWidget(SourceControl);

        space = new QLabel(gridLayoutWidget_2);
        space->setObjectName(QString::fromUtf8("space"));

        horizontalLayout->addWidget(space);

        GernerateButton = new QPushButton(gridLayoutWidget_2);
        GernerateButton->setObjectName(QString::fromUtf8("GernerateButton"));

        horizontalLayout->addWidget(GernerateButton);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        n_35 = new QComboBox(gridLayoutWidget_2);
        n_35->setObjectName(QString::fromUtf8("n_35"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(n_35->sizePolicy().hasHeightForWidth());
        n_35->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_35, 8, 2, 1, 1);

        n_77 = new QComboBox(gridLayoutWidget_2);
        n_77->setObjectName(QString::fromUtf8("n_77"));
        sizePolicy1.setHeightForWidth(n_77->sizePolicy().hasHeightForWidth());
        n_77->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_77, 11, 5, 1, 1);

        n_8 = new QComboBox(gridLayoutWidget_2);
        n_8->setObjectName(QString::fromUtf8("n_8"));
        sizePolicy1.setHeightForWidth(n_8->sizePolicy().hasHeightForWidth());
        n_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_8, 7, 0, 1, 1);

        n_91 = new QComboBox(gridLayoutWidget_2);
        n_91->setObjectName(QString::fromUtf8("n_91"));
        sizePolicy1.setHeightForWidth(n_91->sizePolicy().hasHeightForWidth());
        n_91->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_91, 12, 6, 1, 1);

        n_31 = new QComboBox(gridLayoutWidget_2);
        n_31->setObjectName(QString::fromUtf8("n_31"));
        sizePolicy1.setHeightForWidth(n_31->sizePolicy().hasHeightForWidth());
        n_31->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_31, 4, 2, 1, 1);

        n_14 = new QComboBox(gridLayoutWidget_2);
        n_14->addItem(QString());
        n_14->setObjectName(QString::fromUtf8("n_14"));
        sizePolicy1.setHeightForWidth(n_14->sizePolicy().hasHeightForWidth());
        n_14->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_14, 0, 1, 1, 1);

        n_65 = new QComboBox(gridLayoutWidget_2);
        n_65->setObjectName(QString::fromUtf8("n_65"));
        sizePolicy1.setHeightForWidth(n_65->sizePolicy().hasHeightForWidth());
        n_65->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_65, 12, 4, 1, 1);

        n_12 = new QComboBox(gridLayoutWidget_2);
        n_12->setObjectName(QString::fromUtf8("n_12"));
        sizePolicy1.setHeightForWidth(n_12->sizePolicy().hasHeightForWidth());
        n_12->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_12, 11, 0, 1, 1);

        n_81 = new QComboBox(gridLayoutWidget_2);
        n_81->setObjectName(QString::fromUtf8("n_81"));
        sizePolicy1.setHeightForWidth(n_81->sizePolicy().hasHeightForWidth());
        n_81->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_81, 2, 6, 1, 1);

        n_37 = new QComboBox(gridLayoutWidget_2);
        n_37->setObjectName(QString::fromUtf8("n_37"));
        sizePolicy1.setHeightForWidth(n_37->sizePolicy().hasHeightForWidth());
        n_37->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_37, 10, 2, 1, 1);

        n_48 = new QComboBox(gridLayoutWidget_2);
        n_48->setObjectName(QString::fromUtf8("n_48"));
        sizePolicy1.setHeightForWidth(n_48->sizePolicy().hasHeightForWidth());
        n_48->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_48, 8, 3, 1, 1);

        n_69 = new QComboBox(gridLayoutWidget_2);
        n_69->setObjectName(QString::fromUtf8("n_69"));
        sizePolicy1.setHeightForWidth(n_69->sizePolicy().hasHeightForWidth());
        n_69->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_69, 3, 5, 1, 1);

        n_10 = new QComboBox(gridLayoutWidget_2);
        n_10->setObjectName(QString::fromUtf8("n_10"));
        sizePolicy1.setHeightForWidth(n_10->sizePolicy().hasHeightForWidth());
        n_10->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_10, 9, 0, 1, 1);

        n_15 = new QComboBox(gridLayoutWidget_2);
        n_15->setObjectName(QString::fromUtf8("n_15"));
        sizePolicy1.setHeightForWidth(n_15->sizePolicy().hasHeightForWidth());
        n_15->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_15, 1, 1, 1, 1);

        n_54 = new QComboBox(gridLayoutWidget_2);
        n_54->setObjectName(QString::fromUtf8("n_54"));
        sizePolicy1.setHeightForWidth(n_54->sizePolicy().hasHeightForWidth());
        n_54->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_54, 1, 4, 1, 1);

        n_67 = new QComboBox(gridLayoutWidget_2);
        n_67->setObjectName(QString::fromUtf8("n_67"));
        sizePolicy1.setHeightForWidth(n_67->sizePolicy().hasHeightForWidth());
        n_67->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_67, 1, 5, 1, 1);

        n_13 = new QComboBox(gridLayoutWidget_2);
        n_13->setObjectName(QString::fromUtf8("n_13"));
        sizePolicy1.setHeightForWidth(n_13->sizePolicy().hasHeightForWidth());
        n_13->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_13, 12, 0, 1, 1);

        n_18 = new QComboBox(gridLayoutWidget_2);
        n_18->setObjectName(QString::fromUtf8("n_18"));
        sizePolicy1.setHeightForWidth(n_18->sizePolicy().hasHeightForWidth());
        n_18->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_18, 4, 1, 1, 1);

        n_7 = new QComboBox(gridLayoutWidget_2);
        n_7->setObjectName(QString::fromUtf8("n_7"));
        sizePolicy1.setHeightForWidth(n_7->sizePolicy().hasHeightForWidth());
        n_7->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_7, 6, 0, 1, 1);

        n_46 = new QComboBox(gridLayoutWidget_2);
        n_46->setObjectName(QString::fromUtf8("n_46"));
        sizePolicy1.setHeightForWidth(n_46->sizePolicy().hasHeightForWidth());
        n_46->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_46, 6, 3, 1, 1);

        n_71 = new QComboBox(gridLayoutWidget_2);
        n_71->setObjectName(QString::fromUtf8("n_71"));
        sizePolicy1.setHeightForWidth(n_71->sizePolicy().hasHeightForWidth());
        n_71->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_71, 5, 5, 1, 1);

        n_24 = new QComboBox(gridLayoutWidget_2);
        n_24->setObjectName(QString::fromUtf8("n_24"));
        sizePolicy1.setHeightForWidth(n_24->sizePolicy().hasHeightForWidth());
        n_24->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_24, 10, 1, 1, 1);

        n_80 = new QComboBox(gridLayoutWidget_2);
        n_80->setObjectName(QString::fromUtf8("n_80"));
        sizePolicy1.setHeightForWidth(n_80->sizePolicy().hasHeightForWidth());
        n_80->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_80, 1, 6, 1, 1);

        n_2 = new QComboBox(gridLayoutWidget_2);
        n_2->addItem(QString());
        n_2->setObjectName(QString::fromUtf8("n_2"));
        sizePolicy1.setHeightForWidth(n_2->sizePolicy().hasHeightForWidth());
        n_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_2, 1, 0, 1, 1);

        n_83 = new QComboBox(gridLayoutWidget_2);
        n_83->setObjectName(QString::fromUtf8("n_83"));
        sizePolicy1.setHeightForWidth(n_83->sizePolicy().hasHeightForWidth());
        n_83->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_83, 4, 6, 1, 1);

        n_43 = new QComboBox(gridLayoutWidget_2);
        n_43->setObjectName(QString::fromUtf8("n_43"));
        sizePolicy1.setHeightForWidth(n_43->sizePolicy().hasHeightForWidth());
        n_43->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_43, 3, 3, 1, 1);

        n_29 = new QComboBox(gridLayoutWidget_2);
        n_29->setObjectName(QString::fromUtf8("n_29"));
        sizePolicy1.setHeightForWidth(n_29->sizePolicy().hasHeightForWidth());
        n_29->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_29, 2, 2, 1, 1);

        n_63 = new QComboBox(gridLayoutWidget_2);
        n_63->setObjectName(QString::fromUtf8("n_63"));
        sizePolicy1.setHeightForWidth(n_63->sizePolicy().hasHeightForWidth());
        n_63->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_63, 10, 4, 1, 1);

        n_26 = new QComboBox(gridLayoutWidget_2);
        n_26->setObjectName(QString::fromUtf8("n_26"));
        sizePolicy1.setHeightForWidth(n_26->sizePolicy().hasHeightForWidth());
        n_26->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_26, 12, 1, 1, 1);

        n_33 = new QComboBox(gridLayoutWidget_2);
        n_33->setObjectName(QString::fromUtf8("n_33"));
        sizePolicy1.setHeightForWidth(n_33->sizePolicy().hasHeightForWidth());
        n_33->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_33, 6, 2, 1, 1);

        n_4 = new QComboBox(gridLayoutWidget_2);
        n_4->setObjectName(QString::fromUtf8("n_4"));
        sizePolicy1.setHeightForWidth(n_4->sizePolicy().hasHeightForWidth());
        n_4->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_4, 3, 0, 1, 1);

        n_64 = new QComboBox(gridLayoutWidget_2);
        n_64->setObjectName(QString::fromUtf8("n_64"));
        sizePolicy1.setHeightForWidth(n_64->sizePolicy().hasHeightForWidth());
        n_64->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_64, 11, 4, 1, 1);

        n_59 = new QComboBox(gridLayoutWidget_2);
        n_59->setObjectName(QString::fromUtf8("n_59"));
        sizePolicy1.setHeightForWidth(n_59->sizePolicy().hasHeightForWidth());
        n_59->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_59, 6, 4, 1, 1);

        n_84 = new QComboBox(gridLayoutWidget_2);
        n_84->setObjectName(QString::fromUtf8("n_84"));
        sizePolicy1.setHeightForWidth(n_84->sizePolicy().hasHeightForWidth());
        n_84->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_84, 5, 6, 1, 1);

        n_42 = new QComboBox(gridLayoutWidget_2);
        n_42->setObjectName(QString::fromUtf8("n_42"));
        sizePolicy1.setHeightForWidth(n_42->sizePolicy().hasHeightForWidth());
        n_42->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_42, 2, 3, 1, 1);

        n_44 = new QComboBox(gridLayoutWidget_2);
        n_44->setObjectName(QString::fromUtf8("n_44"));
        sizePolicy1.setHeightForWidth(n_44->sizePolicy().hasHeightForWidth());
        n_44->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_44, 4, 3, 1, 1);

        n_87 = new QComboBox(gridLayoutWidget_2);
        n_87->setObjectName(QString::fromUtf8("n_87"));
        sizePolicy1.setHeightForWidth(n_87->sizePolicy().hasHeightForWidth());
        n_87->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_87, 8, 6, 1, 1);

        n_79 = new QComboBox(gridLayoutWidget_2);
        n_79->addItem(QString());
        n_79->setObjectName(QString::fromUtf8("n_79"));
        sizePolicy1.setHeightForWidth(n_79->sizePolicy().hasHeightForWidth());
        n_79->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_79, 0, 6, 1, 1);

        n_21 = new QComboBox(gridLayoutWidget_2);
        n_21->setObjectName(QString::fromUtf8("n_21"));
        sizePolicy1.setHeightForWidth(n_21->sizePolicy().hasHeightForWidth());
        n_21->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_21, 7, 1, 1, 1);

        n_40 = new QComboBox(gridLayoutWidget_2);
        n_40->setObjectName(QString::fromUtf8("n_40"));
        sizePolicy1.setHeightForWidth(n_40->sizePolicy().hasHeightForWidth());
        n_40->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_40, 0, 3, 1, 1);

        n_66 = new QComboBox(gridLayoutWidget_2);
        n_66->addItem(QString());
        n_66->setObjectName(QString::fromUtf8("n_66"));
        sizePolicy1.setHeightForWidth(n_66->sizePolicy().hasHeightForWidth());
        n_66->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_66, 0, 5, 1, 1);

        n_72 = new QComboBox(gridLayoutWidget_2);
        n_72->setObjectName(QString::fromUtf8("n_72"));
        sizePolicy1.setHeightForWidth(n_72->sizePolicy().hasHeightForWidth());
        n_72->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_72, 6, 5, 1, 1);

        n_74 = new QComboBox(gridLayoutWidget_2);
        n_74->setObjectName(QString::fromUtf8("n_74"));
        sizePolicy1.setHeightForWidth(n_74->sizePolicy().hasHeightForWidth());
        n_74->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_74, 8, 5, 1, 1);

        n_60 = new QComboBox(gridLayoutWidget_2);
        n_60->setObjectName(QString::fromUtf8("n_60"));
        sizePolicy1.setHeightForWidth(n_60->sizePolicy().hasHeightForWidth());
        n_60->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_60, 7, 4, 1, 1);

        n_61 = new QComboBox(gridLayoutWidget_2);
        n_61->setObjectName(QString::fromUtf8("n_61"));
        sizePolicy1.setHeightForWidth(n_61->sizePolicy().hasHeightForWidth());
        n_61->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_61, 8, 4, 1, 1);

        n_20 = new QComboBox(gridLayoutWidget_2);
        n_20->setObjectName(QString::fromUtf8("n_20"));
        sizePolicy1.setHeightForWidth(n_20->sizePolicy().hasHeightForWidth());
        n_20->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_20, 6, 1, 1, 1);

        n_39 = new QComboBox(gridLayoutWidget_2);
        n_39->setObjectName(QString::fromUtf8("n_39"));
        sizePolicy1.setHeightForWidth(n_39->sizePolicy().hasHeightForWidth());
        n_39->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_39, 12, 2, 1, 1);

        n_36 = new QComboBox(gridLayoutWidget_2);
        n_36->setObjectName(QString::fromUtf8("n_36"));
        sizePolicy1.setHeightForWidth(n_36->sizePolicy().hasHeightForWidth());
        n_36->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_36, 9, 2, 1, 1);

        n_32 = new QComboBox(gridLayoutWidget_2);
        n_32->setObjectName(QString::fromUtf8("n_32"));
        sizePolicy1.setHeightForWidth(n_32->sizePolicy().hasHeightForWidth());
        n_32->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_32, 5, 2, 1, 1);

        n_88 = new QComboBox(gridLayoutWidget_2);
        n_88->setObjectName(QString::fromUtf8("n_88"));
        sizePolicy1.setHeightForWidth(n_88->sizePolicy().hasHeightForWidth());
        n_88->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_88, 9, 6, 1, 1);

        n_22 = new QComboBox(gridLayoutWidget_2);
        n_22->setObjectName(QString::fromUtf8("n_22"));
        sizePolicy1.setHeightForWidth(n_22->sizePolicy().hasHeightForWidth());
        n_22->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_22, 8, 1, 1, 1);

        n_16 = new QComboBox(gridLayoutWidget_2);
        n_16->setObjectName(QString::fromUtf8("n_16"));
        sizePolicy1.setHeightForWidth(n_16->sizePolicy().hasHeightForWidth());
        n_16->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_16, 2, 1, 1, 1);

        n_73 = new QComboBox(gridLayoutWidget_2);
        n_73->setObjectName(QString::fromUtf8("n_73"));
        sizePolicy1.setHeightForWidth(n_73->sizePolicy().hasHeightForWidth());
        n_73->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_73, 7, 5, 1, 1);

        n_56 = new QComboBox(gridLayoutWidget_2);
        n_56->setObjectName(QString::fromUtf8("n_56"));
        sizePolicy1.setHeightForWidth(n_56->sizePolicy().hasHeightForWidth());
        n_56->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_56, 3, 4, 1, 1);

        n_34 = new QComboBox(gridLayoutWidget_2);
        n_34->setObjectName(QString::fromUtf8("n_34"));
        sizePolicy1.setHeightForWidth(n_34->sizePolicy().hasHeightForWidth());
        n_34->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_34, 7, 2, 1, 1);

        n_68 = new QComboBox(gridLayoutWidget_2);
        n_68->setObjectName(QString::fromUtf8("n_68"));
        sizePolicy1.setHeightForWidth(n_68->sizePolicy().hasHeightForWidth());
        n_68->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_68, 2, 5, 1, 1);

        n_76 = new QComboBox(gridLayoutWidget_2);
        n_76->setObjectName(QString::fromUtf8("n_76"));
        sizePolicy1.setHeightForWidth(n_76->sizePolicy().hasHeightForWidth());
        n_76->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_76, 10, 5, 1, 1);

        n_45 = new QComboBox(gridLayoutWidget_2);
        n_45->setObjectName(QString::fromUtf8("n_45"));
        sizePolicy1.setHeightForWidth(n_45->sizePolicy().hasHeightForWidth());
        n_45->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_45, 5, 3, 1, 1);

        n_86 = new QComboBox(gridLayoutWidget_2);
        n_86->setObjectName(QString::fromUtf8("n_86"));
        sizePolicy1.setHeightForWidth(n_86->sizePolicy().hasHeightForWidth());
        n_86->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_86, 7, 6, 1, 1);

        n_9 = new QComboBox(gridLayoutWidget_2);
        n_9->setObjectName(QString::fromUtf8("n_9"));
        sizePolicy1.setHeightForWidth(n_9->sizePolicy().hasHeightForWidth());
        n_9->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_9, 8, 0, 1, 1);

        n_57 = new QComboBox(gridLayoutWidget_2);
        n_57->setObjectName(QString::fromUtf8("n_57"));
        sizePolicy1.setHeightForWidth(n_57->sizePolicy().hasHeightForWidth());
        n_57->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_57, 4, 4, 1, 1);

        n_6 = new QComboBox(gridLayoutWidget_2);
        n_6->setObjectName(QString::fromUtf8("n_6"));
        sizePolicy1.setHeightForWidth(n_6->sizePolicy().hasHeightForWidth());
        n_6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_6, 5, 0, 1, 1);

        n_62 = new QComboBox(gridLayoutWidget_2);
        n_62->setObjectName(QString::fromUtf8("n_62"));
        sizePolicy1.setHeightForWidth(n_62->sizePolicy().hasHeightForWidth());
        n_62->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_62, 9, 4, 1, 1);

        n_27 = new QComboBox(gridLayoutWidget_2);
        n_27->addItem(QString());
        n_27->setObjectName(QString::fromUtf8("n_27"));
        sizePolicy1.setHeightForWidth(n_27->sizePolicy().hasHeightForWidth());
        n_27->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_27, 0, 2, 1, 1);

        n_38 = new QComboBox(gridLayoutWidget_2);
        n_38->setObjectName(QString::fromUtf8("n_38"));
        sizePolicy1.setHeightForWidth(n_38->sizePolicy().hasHeightForWidth());
        n_38->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_38, 11, 2, 1, 1);

        n_90 = new QComboBox(gridLayoutWidget_2);
        n_90->setObjectName(QString::fromUtf8("n_90"));
        sizePolicy1.setHeightForWidth(n_90->sizePolicy().hasHeightForWidth());
        n_90->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_90, 11, 6, 1, 1);

        n_89 = new QComboBox(gridLayoutWidget_2);
        n_89->setObjectName(QString::fromUtf8("n_89"));
        sizePolicy1.setHeightForWidth(n_89->sizePolicy().hasHeightForWidth());
        n_89->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_89, 10, 6, 1, 1);

        n_82 = new QComboBox(gridLayoutWidget_2);
        n_82->setObjectName(QString::fromUtf8("n_82"));
        sizePolicy1.setHeightForWidth(n_82->sizePolicy().hasHeightForWidth());
        n_82->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_82, 3, 6, 1, 1);

        n_70 = new QComboBox(gridLayoutWidget_2);
        n_70->setObjectName(QString::fromUtf8("n_70"));
        sizePolicy1.setHeightForWidth(n_70->sizePolicy().hasHeightForWidth());
        n_70->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_70, 4, 5, 1, 1);

        n_49 = new QComboBox(gridLayoutWidget_2);
        n_49->setObjectName(QString::fromUtf8("n_49"));
        sizePolicy1.setHeightForWidth(n_49->sizePolicy().hasHeightForWidth());
        n_49->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_49, 9, 3, 1, 1);

        n_78 = new QComboBox(gridLayoutWidget_2);
        n_78->setObjectName(QString::fromUtf8("n_78"));
        sizePolicy1.setHeightForWidth(n_78->sizePolicy().hasHeightForWidth());
        n_78->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_78, 12, 5, 1, 1);

        n_25 = new QComboBox(gridLayoutWidget_2);
        n_25->setObjectName(QString::fromUtf8("n_25"));
        sizePolicy1.setHeightForWidth(n_25->sizePolicy().hasHeightForWidth());
        n_25->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_25, 11, 1, 1, 1);

        n_50 = new QComboBox(gridLayoutWidget_2);
        n_50->setObjectName(QString::fromUtf8("n_50"));
        sizePolicy1.setHeightForWidth(n_50->sizePolicy().hasHeightForWidth());
        n_50->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_50, 10, 3, 1, 1);

        n_11 = new QComboBox(gridLayoutWidget_2);
        n_11->setObjectName(QString::fromUtf8("n_11"));
        sizePolicy1.setHeightForWidth(n_11->sizePolicy().hasHeightForWidth());
        n_11->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_11, 10, 0, 1, 1);

        n_3 = new QComboBox(gridLayoutWidget_2);
        n_3->setObjectName(QString::fromUtf8("n_3"));
        sizePolicy1.setHeightForWidth(n_3->sizePolicy().hasHeightForWidth());
        n_3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_3, 2, 0, 1, 1);

        n_75 = new QComboBox(gridLayoutWidget_2);
        n_75->setObjectName(QString::fromUtf8("n_75"));
        sizePolicy1.setHeightForWidth(n_75->sizePolicy().hasHeightForWidth());
        n_75->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_75, 9, 5, 1, 1);

        n_51 = new QComboBox(gridLayoutWidget_2);
        n_51->setObjectName(QString::fromUtf8("n_51"));
        sizePolicy1.setHeightForWidth(n_51->sizePolicy().hasHeightForWidth());
        n_51->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_51, 11, 3, 1, 1);

        n_5 = new QComboBox(gridLayoutWidget_2);
        n_5->setObjectName(QString::fromUtf8("n_5"));
        sizePolicy1.setHeightForWidth(n_5->sizePolicy().hasHeightForWidth());
        n_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_5, 4, 0, 1, 1);

        n_41 = new QComboBox(gridLayoutWidget_2);
        n_41->setObjectName(QString::fromUtf8("n_41"));
        sizePolicy1.setHeightForWidth(n_41->sizePolicy().hasHeightForWidth());
        n_41->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_41, 1, 3, 1, 1);

        n_30 = new QComboBox(gridLayoutWidget_2);
        n_30->setObjectName(QString::fromUtf8("n_30"));
        sizePolicy1.setHeightForWidth(n_30->sizePolicy().hasHeightForWidth());
        n_30->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_30, 3, 2, 1, 1);

        n_1 = new QComboBox(gridLayoutWidget_2);
        n_1->addItem(QString());
        n_1->addItem(QString());
        n_1->addItem(QString());
        n_1->setObjectName(QString::fromUtf8("n_1"));
        sizePolicy1.setHeightForWidth(n_1->sizePolicy().hasHeightForWidth());
        n_1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_1, 0, 0, 1, 1);

        n_19 = new QComboBox(gridLayoutWidget_2);
        n_19->setObjectName(QString::fromUtf8("n_19"));
        sizePolicy1.setHeightForWidth(n_19->sizePolicy().hasHeightForWidth());
        n_19->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_19, 5, 1, 1, 1);

        n_23 = new QComboBox(gridLayoutWidget_2);
        n_23->setObjectName(QString::fromUtf8("n_23"));
        sizePolicy1.setHeightForWidth(n_23->sizePolicy().hasHeightForWidth());
        n_23->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_23, 9, 1, 1, 1);

        n_85 = new QComboBox(gridLayoutWidget_2);
        n_85->setObjectName(QString::fromUtf8("n_85"));
        sizePolicy1.setHeightForWidth(n_85->sizePolicy().hasHeightForWidth());
        n_85->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_85, 6, 6, 1, 1);

        n_52 = new QComboBox(gridLayoutWidget_2);
        n_52->setObjectName(QString::fromUtf8("n_52"));
        sizePolicy1.setHeightForWidth(n_52->sizePolicy().hasHeightForWidth());
        n_52->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_52, 12, 3, 1, 1);

        n_53 = new QComboBox(gridLayoutWidget_2);
        n_53->setObjectName(QString::fromUtf8("n_53"));
        sizePolicy1.setHeightForWidth(n_53->sizePolicy().hasHeightForWidth());
        n_53->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_53, 0, 4, 1, 1);

        n_28 = new QComboBox(gridLayoutWidget_2);
        n_28->setObjectName(QString::fromUtf8("n_28"));
        sizePolicy1.setHeightForWidth(n_28->sizePolicy().hasHeightForWidth());
        n_28->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_28, 1, 2, 1, 1);

        n_47 = new QComboBox(gridLayoutWidget_2);
        n_47->setObjectName(QString::fromUtf8("n_47"));
        sizePolicy1.setHeightForWidth(n_47->sizePolicy().hasHeightForWidth());
        n_47->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_47, 7, 3, 1, 1);

        n_17 = new QComboBox(gridLayoutWidget_2);
        n_17->setObjectName(QString::fromUtf8("n_17"));
        sizePolicy1.setHeightForWidth(n_17->sizePolicy().hasHeightForWidth());
        n_17->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_17, 3, 1, 1, 1);

        n_55 = new QComboBox(gridLayoutWidget_2);
        n_55->setObjectName(QString::fromUtf8("n_55"));
        sizePolicy1.setHeightForWidth(n_55->sizePolicy().hasHeightForWidth());
        n_55->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_55, 2, 4, 1, 1);

        n_58 = new QComboBox(gridLayoutWidget_2);
        n_58->setObjectName(QString::fromUtf8("n_58"));
        sizePolicy1.setHeightForWidth(n_58->sizePolicy().hasHeightForWidth());
        n_58->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(n_58, 5, 4, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 1);
        gridLayout->setColumnStretch(5, 1);
        gridLayout->setColumnStretch(6, 1);
        gridLayout->setColumnMinimumWidth(0, 1);
        gridLayout->setColumnMinimumWidth(1, 1);
        gridLayout->setColumnMinimumWidth(2, 1);
        gridLayout->setColumnMinimumWidth(3, 1);
        gridLayout->setColumnMinimumWidth(4, 1);
        gridLayout->setColumnMinimumWidth(5, 1);
        gridLayout->setColumnMinimumWidth(6, 1);

        horizontalLayout_5->addLayout(gridLayout);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Lastone = new QPushButton(gridLayoutWidget_2);
        Lastone->setObjectName(QString::fromUtf8("Lastone"));

        horizontalLayout_2->addWidget(Lastone);

        horizontalSpacer = new QSpacerItem(198, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Nextone = new QPushButton(gridLayoutWidget_2);
        Nextone->setObjectName(QString::fromUtf8("Nextone"));

        horizontalLayout_2->addWidget(Nextone);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 10);
        horizontalLayout_2->setStretch(2, 10);
        horizontalLayout_2->setStretch(3, 10);
        horizontalLayout_2->setStretch(4, 10);
        horizontalLayout_2->setStretch(5, 10);
        horizontalLayout_2->setStretch(6, 3);

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        copyright = new QLabel(gridLayoutWidget_2);
        copyright->setObjectName(QString::fromUtf8("copyright"));

        horizontalLayout_3->addWidget(copyright);

        horizontalSpacer_6 = new QSpacerItem(258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 8);
        verticalLayout_2->setStretch(3, 2);
        verticalLayout_2->setStretch(4, 2);

        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 822, 29));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionimport);
        menu->addAction(actionexport);
        menu->addAction(actionabout);
        menu->addSeparator();
        menu->addAction(actionexit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "[ISE]\346\231\272\350\203\275\351\200\211\350\257\276\347\263\273\347\273\237", nullptr));
        actionimport->setText(QCoreApplication::translate("MainWindow", "import", nullptr));
        actionexport->setText(QCoreApplication::translate("MainWindow", "export", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
        actionexit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        SourceControl->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\350\257\276\347\250\213", nullptr));
        space->setText(QString());
        GernerateButton->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
        n_14->setItemText(0, QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247\350\257\255\350\250\200\347\250\213\345\272\217\350\256\276\350\256\241", nullptr));

        n_2->setItemText(0, QCoreApplication::translate("MainWindow", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));

        n_79->setItemText(0, QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247\350\257\255\350\250\200\347\250\213\345\272\217\350\256\276\350\256\241", nullptr));

        n_66->setItemText(0, QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247\350\257\255\350\250\200\347\250\213\345\272\217\350\256\276\350\256\241", nullptr));

        n_27->setItemText(0, QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247\350\257\255\350\250\200\347\250\213\345\272\217\350\256\276\350\256\241", nullptr));

        n_1->setItemText(0, QCoreApplication::translate("MainWindow", "\347\246\273\346\225\243\346\225\260\345\255\246", nullptr));
        n_1->setItemText(1, QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247\350\257\255\350\250\200\347\250\213\345\272\217\350\256\276\350\256\241", nullptr));
        n_1->setItemText(2, QCoreApplication::translate("MainWindow", "\347\272\277\346\200\247\344\273\243\346\225\260", nullptr));

        Lastone->setText(QCoreApplication::translate("MainWindow", "<\344\270\212\344\270\200\344\270\252", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\254\2541\344\270\252/\345\205\2611\344\270\252", nullptr));
        Nextone->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252>", nullptr));
        copyright->setText(QCoreApplication::translate("MainWindow", "Made by Liu,He & Man  \302\251Copy 2021. All Right Reserved.", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
