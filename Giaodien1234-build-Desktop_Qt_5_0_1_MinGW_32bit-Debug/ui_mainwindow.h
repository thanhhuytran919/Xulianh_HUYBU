/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *gBoxXL1A;
    QLabel *lb_TenFile;
    QLineEdit *ln_TenFile;
    QPushButton *bt_Chon;
    QLabel *label;
    QPushButton *bt_xlax;
    QPushButton *bt_xlam;
    QLineEdit *ln_ms;
    QLabel *lb_ms;
    QLabel *lb_mstitle;
    QPushButton *bt_xlax_ms;
    QPushButton *bt_xlam_ms;
    QLabel *lb_dtp;
    QLineEdit *ln_dtp;
    QLabel *lb_dtptitle;
    QPushButton *bt_xlax_dtp;
    QPushButton *bt_xlam_dtp;
    QLabel *lb_dtp_2;
    QLineEdit *ln_pn;
    QLabel *lb_pntitle;
    QPushButton *bt_xlpn;
    QPushButton *bt_gttt;
    QPushButton *bt_gtos;
    QPushButton *bt_vhax;
    QPushButton *bt_vham;
    QPushButton *bt_bdtth;
    QPushButton *bt_cbh;
    QGroupBox *gBox_xl2a;
    QLineEdit *ln_TenFile_xl2a_1;
    QLineEdit *ln_TenFile_xl2a_2;
    QPushButton *bt_Chon_xl2a_1;
    QPushButton *bt_Chon_xl2a_2;
    QLabel *lb_opc_1;
    QLabel *lb_opc_2;
    QLineEdit *ln_opc_1;
    QLineEdit *ln_opc_2;
    QPushButton *bt_cong2a;
    QPushButton *bt_tru2a;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(957, 634);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gBoxXL1A = new QGroupBox(centralWidget);
        gBoxXL1A->setObjectName(QStringLiteral("gBoxXL1A"));
        gBoxXL1A->setGeometry(QRect(10, 10, 621, 351));
        lb_TenFile = new QLabel(gBoxXL1A);
        lb_TenFile->setObjectName(QStringLiteral("lb_TenFile"));
        lb_TenFile->setGeometry(QRect(20, 20, 61, 21));
        ln_TenFile = new QLineEdit(gBoxXL1A);
        ln_TenFile->setObjectName(QStringLiteral("ln_TenFile"));
        ln_TenFile->setGeometry(QRect(100, 20, 371, 21));
        bt_Chon = new QPushButton(gBoxXL1A);
        bt_Chon->setObjectName(QStringLiteral("bt_Chon"));
        bt_Chon->setGeometry(QRect(500, 20, 75, 23));
        label = new QLabel(gBoxXL1A);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 61, 16));
        bt_xlax = new QPushButton(gBoxXL1A);
        bt_xlax->setObjectName(QStringLiteral("bt_xlax"));
        bt_xlax->setGeometry(QRect(370, 50, 101, 31));
        bt_xlam = new QPushButton(gBoxXL1A);
        bt_xlam->setObjectName(QStringLiteral("bt_xlam"));
        bt_xlam->setGeometry(QRect(500, 50, 101, 31));
        ln_ms = new QLineEdit(gBoxXL1A);
        ln_ms->setObjectName(QStringLiteral("ln_ms"));
        ln_ms->setGeometry(QRect(100, 110, 113, 20));
        lb_ms = new QLabel(gBoxXL1A);
        lb_ms->setObjectName(QStringLiteral("lb_ms"));
        lb_ms->setGeometry(QRect(20, 105, 61, 31));
        lb_mstitle = new QLabel(gBoxXL1A);
        lb_mstitle->setObjectName(QStringLiteral("lb_mstitle"));
        lb_mstitle->setGeometry(QRect(220, 110, 91, 21));
        bt_xlax_ms = new QPushButton(gBoxXL1A);
        bt_xlax_ms->setObjectName(QStringLiteral("bt_xlax_ms"));
        bt_xlax_ms->setGeometry(QRect(370, 100, 101, 31));
        bt_xlam_ms = new QPushButton(gBoxXL1A);
        bt_xlam_ms->setObjectName(QStringLiteral("bt_xlam_ms"));
        bt_xlam_ms->setGeometry(QRect(500, 100, 101, 31));
        lb_dtp = new QLabel(gBoxXL1A);
        lb_dtp->setObjectName(QStringLiteral("lb_dtp"));
        lb_dtp->setGeometry(QRect(20, 140, 71, 41));
        ln_dtp = new QLineEdit(gBoxXL1A);
        ln_dtp->setObjectName(QStringLiteral("ln_dtp"));
        ln_dtp->setGeometry(QRect(100, 150, 113, 20));
        lb_dtptitle = new QLabel(gBoxXL1A);
        lb_dtptitle->setObjectName(QStringLiteral("lb_dtptitle"));
        lb_dtptitle->setGeometry(QRect(220, 150, 121, 21));
        bt_xlax_dtp = new QPushButton(gBoxXL1A);
        bt_xlax_dtp->setObjectName(QStringLiteral("bt_xlax_dtp"));
        bt_xlax_dtp->setGeometry(QRect(370, 140, 101, 31));
        bt_xlam_dtp = new QPushButton(gBoxXL1A);
        bt_xlam_dtp->setObjectName(QStringLiteral("bt_xlam_dtp"));
        bt_xlam_dtp->setGeometry(QRect(500, 140, 101, 31));
        lb_dtp_2 = new QLabel(gBoxXL1A);
        lb_dtp_2->setObjectName(QStringLiteral("lb_dtp_2"));
        lb_dtp_2->setGeometry(QRect(20, 190, 71, 41));
        ln_pn = new QLineEdit(gBoxXL1A);
        ln_pn->setObjectName(QStringLiteral("ln_pn"));
        ln_pn->setGeometry(QRect(100, 200, 113, 20));
        lb_pntitle = new QLabel(gBoxXL1A);
        lb_pntitle->setObjectName(QStringLiteral("lb_pntitle"));
        lb_pntitle->setGeometry(QRect(220, 200, 121, 21));
        bt_xlpn = new QPushButton(gBoxXL1A);
        bt_xlpn->setObjectName(QStringLiteral("bt_xlpn"));
        bt_xlpn->setGeometry(QRect(370, 190, 101, 31));
        bt_gttt = new QPushButton(gBoxXL1A);
        bt_gttt->setObjectName(QStringLiteral("bt_gttt"));
        bt_gttt->setGeometry(QRect(500, 180, 101, 21));
        bt_gtos = new QPushButton(gBoxXL1A);
        bt_gtos->setObjectName(QStringLiteral("bt_gtos"));
        bt_gtos->setGeometry(QRect(500, 210, 101, 21));
        bt_vhax = new QPushButton(gBoxXL1A);
        bt_vhax->setObjectName(QStringLiteral("bt_vhax"));
        bt_vhax->setGeometry(QRect(130, 250, 111, 31));
        bt_vham = new QPushButton(gBoxXL1A);
        bt_vham->setObjectName(QStringLiteral("bt_vham"));
        bt_vham->setGeometry(QRect(370, 250, 111, 31));
        bt_bdtth = new QPushButton(gBoxXL1A);
        bt_bdtth->setObjectName(QStringLiteral("bt_bdtth"));
        bt_bdtth->setGeometry(QRect(110, 300, 151, 31));
        bt_cbh = new QPushButton(gBoxXL1A);
        bt_cbh->setObjectName(QStringLiteral("bt_cbh"));
        bt_cbh->setGeometry(QRect(350, 300, 151, 31));
        gBox_xl2a = new QGroupBox(centralWidget);
        gBox_xl2a->setObjectName(QStringLiteral("gBox_xl2a"));
        gBox_xl2a->setGeometry(QRect(10, 370, 621, 191));
        ln_TenFile_xl2a_1 = new QLineEdit(gBox_xl2a);
        ln_TenFile_xl2a_1->setObjectName(QStringLiteral("ln_TenFile_xl2a_1"));
        ln_TenFile_xl2a_1->setGeometry(QRect(10, 30, 371, 21));
        ln_TenFile_xl2a_2 = new QLineEdit(gBox_xl2a);
        ln_TenFile_xl2a_2->setObjectName(QStringLiteral("ln_TenFile_xl2a_2"));
        ln_TenFile_xl2a_2->setGeometry(QRect(10, 70, 371, 21));
        bt_Chon_xl2a_1 = new QPushButton(gBox_xl2a);
        bt_Chon_xl2a_1->setObjectName(QStringLiteral("bt_Chon_xl2a_1"));
        bt_Chon_xl2a_1->setGeometry(QRect(400, 30, 75, 23));
        bt_Chon_xl2a_2 = new QPushButton(gBox_xl2a);
        bt_Chon_xl2a_2->setObjectName(QStringLiteral("bt_Chon_xl2a_2"));
        bt_Chon_xl2a_2->setGeometry(QRect(400, 70, 75, 23));
        lb_opc_1 = new QLabel(gBox_xl2a);
        lb_opc_1->setObjectName(QStringLiteral("lb_opc_1"));
        lb_opc_1->setGeometry(QRect(10, 100, 71, 41));
        lb_opc_2 = new QLabel(gBox_xl2a);
        lb_opc_2->setObjectName(QStringLiteral("lb_opc_2"));
        lb_opc_2->setGeometry(QRect(10, 150, 71, 21));
        ln_opc_1 = new QLineEdit(gBox_xl2a);
        ln_opc_1->setObjectName(QStringLiteral("ln_opc_1"));
        ln_opc_1->setGeometry(QRect(100, 110, 113, 20));
        ln_opc_2 = new QLineEdit(gBox_xl2a);
        ln_opc_2->setObjectName(QStringLiteral("ln_opc_2"));
        ln_opc_2->setGeometry(QRect(100, 150, 113, 20));
        bt_cong2a = new QPushButton(gBox_xl2a);
        bt_cong2a->setObjectName(QStringLiteral("bt_cong2a"));
        bt_cong2a->setGeometry(QRect(270, 130, 91, 23));
        bt_tru2a = new QPushButton(gBox_xl2a);
        bt_tru2a->setObjectName(QStringLiteral("bt_tru2a"));
        bt_tru2a->setGeometry(QRect(400, 130, 91, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 957, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        gBoxXL1A->setTitle(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 1 \341\272\243nh", 0));
        lb_TenFile->setText(QApplication::translate("MainWindow", "T\303\252n file \341\272\243nh", 0));
        bt_Chon->setText(QApplication::translate("MainWindow", "Ch\341\273\215n", 0));
        label->setText(QApplication::translate("MainWindow", "\341\272\242nh \303\242m b\341\272\243n", 0));
        bt_xlax->setText(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 \341\272\243nh x\303\241m ", 0));
        bt_xlam->setText(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 \341\272\243nh m\303\240u", 0));
        lb_ms->setText(QApplication::translate("MainWindow", "M\341\273\251c s\303\241ng", 0));
        lb_mstitle->setText(QApplication::translate("MainWindow", "> 0 t\304\203ng, < 0 gi\341\272\243m ", 0));
        bt_xlax_ms->setText(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 \341\272\243nh x\303\241m ", 0));
        bt_xlam_ms->setText(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 \341\272\243nh m\303\240u", 0));
        lb_dtp->setText(QApplication::translate("MainWindow", "\304\220\341\273\231 t\306\260\306\241ng ph\341\272\243n", 0));
        lb_dtptitle->setText(QApplication::translate("MainWindow", "> 1 t\304\203ng, 0 < c < 1 gi\341\272\243m", 0));
        bt_xlax_dtp->setText(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 \341\272\243nh x\303\241m ", 0));
        bt_xlam_dtp->setText(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 \341\272\243nh m\303\240u", 0));
        lb_dtp_2->setText(QApplication::translate("MainWindow", "Ph\303\242n ng\306\260\341\273\241ng ", 0));
        lb_pntitle->setText(QApplication::translate("MainWindow", "> n tr\341\272\257ng, < n \304\221en", 0));
        bt_xlpn->setText(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 ph\303\242n ng\306\260\341\273\241ng", 0));
        bt_gttt->setText(QApplication::translate("MainWindow", "Gi\341\272\243i thu\341\272\255t tu\341\272\247n t\341\273\261 ", 0));
        bt_gtos->setText(QApplication::translate("MainWindow", "Gi\341\272\243i thu\341\272\255t Otsu", 0));
        bt_vhax->setText(QApplication::translate("MainWindow", "V\341\272\275 histogram \341\272\243nh x\303\241m", 0));
        bt_vham->setText(QApplication::translate("MainWindow", "V\341\272\275 histogram \341\272\243nh m\303\240u", 0));
        bt_bdtth->setText(QApplication::translate("MainWindow", "Bi\341\272\277n \304\221\341\273\225i tuy\341\272\277n t\303\255nh histogram ", 0));
        bt_cbh->setText(QApplication::translate("MainWindow", "C\303\242n b\341\272\261ng histogram", 0));
        gBox_xl2a->setTitle(QApplication::translate("MainWindow", "X\341\273\255 l\303\255 2 \341\272\243nh", 0));
        bt_Chon_xl2a_1->setText(QApplication::translate("MainWindow", "Ch\341\273\215n \341\272\243nh 1", 0));
        bt_Chon_xl2a_2->setText(QApplication::translate("MainWindow", "Ch\341\273\215n \341\272\243nh 2", 0));
        lb_opc_1->setText(QApplication::translate("MainWindow", "Opacity \341\272\243nh 1", 0));
        lb_opc_2->setText(QApplication::translate("MainWindow", "Opacity \341\272\243nh 2", 0));
        bt_cong2a->setText(QApplication::translate("MainWindow", "C\341\273\231ng 2 \341\272\243nh", 0));
        bt_tru2a->setText(QApplication::translate("MainWindow", "Tr\341\273\253 2 \341\272\243nh ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
