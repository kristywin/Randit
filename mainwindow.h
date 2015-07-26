#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "ui_mainwindow.h"
#include "dialogpage2.h"
#include "fileexplorerdialog.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setFilePath(QString &str);

private slots:
    void on_pushButton_clicked();

    void on_radioButton_3_clicked();

    void on_BrowseFileButton_clicked();

private:
    Ui::MainWindow *ui;

    QString fileName;

};

#endif // MAINWINDOW_H
