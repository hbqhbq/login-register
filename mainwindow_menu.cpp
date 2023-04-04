#include "mainwindow_menu.h"
#include "ui_mainwindow_menu.h"
#include "listwidget.h"

MainWindow_menu::MainWindow_menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_menu)
{
    ui->setupUi(this);
    listwidget_ = new ListWidget(this);
//    this->setCentralWidget(listwidget_);
    listwidget_->setGeometry(100, 100, 600, 260);
}

MainWindow_menu::~MainWindow_menu()
{
    delete ui;
}

void MainWindow_menu::recUsrname(QString name)
{
    QString str = QString("欢迎你! %1").arg(name);
    ui->label->setText(str);
}
