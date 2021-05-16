#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("瓜皮快速改键");
    this->setWindowIcon(QIcon("./res/guapi.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

