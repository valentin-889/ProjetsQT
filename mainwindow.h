#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnMoins_clicked();
    void on_btnPlus_clicked();
    void on_btnZero_clicked();
    void on_btnQuit_clicked();


private:
    Ui::MainWindow *ui;

    int monCompteur;

};
#endif // MAINWINDOW_H
