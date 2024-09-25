#include "mainwindow.h"
#include "ui_mainwindow.h"


/**
 * @brief MainWindow::MainWindow Constructeur de la classe
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->monCompteur = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnMoins_clicked()
{
    this->monCompteur--;
    ui->lblAffichage->setText(QString::number(this->monCompteur));
    ui->lblAffichage->adjustSize();
}


void MainWindow::on_btnPlus_clicked()
{
    this->monCompteur++;
    ui->lblAffichage->setText(QString::number(this->monCompteur));
    ui->lblAffichage->adjustSize();

}

void MainWindow::on_btnZero_clicked()
{
    ui->setupUi(this);
    this->monCompteur = 0;

}

void MainWindow::on_btnQuit_clicked()
{
    this->close();
}
