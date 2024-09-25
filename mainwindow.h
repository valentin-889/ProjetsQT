#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QLabel>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

private :
    QPushButton *monbouton ;
    QPushButton *monbouton2 ;
    QPushButton *monbouton3 ;
    QLabel *monAffichage;
    int compteur;

private slots:
    void clicBouton();

private slots:
    void clicBouton2();

private slots:
    void clicBouton3() ;





};
#endif // MAINWINDOW_H
