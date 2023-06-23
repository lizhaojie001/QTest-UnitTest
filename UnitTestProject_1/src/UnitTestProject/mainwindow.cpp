#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "DllDraw.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DllDraw().DrawCircle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

