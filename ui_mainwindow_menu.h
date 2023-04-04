/********************************************************************************
** Form generated from reading UI file 'mainwindow_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_MENU_H
#define UI_MAINWINDOW_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_menu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_menu)
    {
        if (MainWindow_menu->objectName().isEmpty())
            MainWindow_menu->setObjectName(QString::fromUtf8("MainWindow_menu"));
        MainWindow_menu->setWindowModality(Qt::NonModal);
        MainWindow_menu->resize(800, 600);
        MainWindow_menu->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgb(255, 255, 127);\n"
"	background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));\n"
"}"));
        centralwidget = new QWidget(MainWindow_menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 25, 191, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        MainWindow_menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow_menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow_menu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow_menu->setStatusBar(statusbar);

        retranslateUi(MainWindow_menu);

        QMetaObject::connectSlotsByName(MainWindow_menu);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_menu)
    {
        MainWindow_menu->setWindowTitle(QCoreApplication::translate("MainWindow_menu", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow_menu", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_menu: public Ui_MainWindow_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_MENU_H
