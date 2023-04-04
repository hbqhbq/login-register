#ifndef MAINWINDOW_MENU_H
#define MAINWINDOW_MENU_H

#include <QMainWindow>
class ListWidget;

namespace Ui {
class MainWindow_menu;
}

class MainWindow_menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_menu(QWidget *parent = 0);
    ~MainWindow_menu();
private slots:
    //登录成功后接收用户名
    void recUsrname(QString name);

private:
    Ui::MainWindow_menu *ui;
    ListWidget* listwidget_;
};

#endif // MAINWINDOW_MENU_H
