
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
    void on_actionFont_triggered();

    void on_actionSuperscript_triggered();

    void on_actionSubscript_triggered();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
