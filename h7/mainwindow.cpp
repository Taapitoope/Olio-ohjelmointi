#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::btnCountClicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::btnResetClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnCountClicked()
{
    qDebug()<<"Count painiketta painettu";
    counter++;
    QString luku = QString::number(counter);
    ui->txtResult->setText(luku);
    ui->labelInfo->setText("Painiketta painettu " + luku + " kertaa");
}

void MainWindow::btnResetClicked()
{
    qDebug()<<"Reset painiketta painettu";
    counter=0;
    QString luku = QString::number(counter);
    ui->txtResult->setText(luku);
    ui->labelInfo->setText("Painiketta painettu " + luku + " kertaa");
}
