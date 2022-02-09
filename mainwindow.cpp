#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    textIO = new QTextEdit(this);
    textIO->setGeometry(QRect(QPoint(0,0), QSize(500,500)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
