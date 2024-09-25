#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(): QWidget()
{
    this->compteur = 0;
    setFixedSize(150, 100);

    monbouton = new QPushButton("bouton", this);
    monbouton->move(10, 10);
    monbouton2 = new QPushButton("moins", this);
    monbouton2->move(10, 50);
    monbouton3 = new QPushButton("zero", this);
    monbouton3->move(10, 70) ;
    monAffichage = new QLabel("0", this);
    monAffichage->move(10, 50);

    connect(monbouton, SIGNAL(clicked()), this, SLOT(clicBouton()));
    connect(monbouton2, SIGNAL(clicked()), this, SLOT(clicBouton2()));
    connect(monbouton3, SIGNAL(clicked()), this, SLOT(clicBouton3()));

}

MainWindow::~MainWindow()
{

}

void MainWindow::clicBouton()
{
    this->compteur++;
    this->monAffichage->setText(QString::number(this->compteur));
    this->monAffichage->adjustSize();
}

void MainWindow::clicBouton2()
{
    this->compteur--;
    this->monAffichage->setText(QString::number(this->compteur));
    this->monAffichage->adjustSize();
}

void MainWindow::clicBouton3()
{
    this->compteur = 0;
    this->monAffichage->setText(QString::number(this->compteur));
    this->monAffichage->adjustSize();
}
