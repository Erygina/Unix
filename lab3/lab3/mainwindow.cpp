#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

const double k = 0.02;
int random = rand();
double euro, dollar;
int day = 1;

void MainWindow::on_startButton_clicked()
{
    euro=ui->euroEd->value();
    dollar=ui->dollarEd->value();
    euro=euro*(1+k*(rand()%1-0.5));
    dollar=dollar*(1+k*(rand()%1-0.5));
    ui->eurolabel->setNum(euro);
    ui->dollarlabel->setNum(dollar);
    ui->euroEd->setValue(euro);
    ui->dollarEd->setValue(dollar);
    day++;
}

