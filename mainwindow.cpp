#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fileName = "/home/etc";

    ui->filenamepath->setText(fileName);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setFilePath(QString &str)
{
    ui->filenamepath->setText(str);
}

void MainWindow::on_pushButton_clicked()
{
    DialogPage2 page2;
    page2.setModal(true);
    this->hide();
    page2.exec();
    this->show();
}


void MainWindow::on_radioButton_3_clicked()
{

}

void MainWindow::on_BrowseFileButton_clicked()
{
    FileExplorerDialog fed;
    fed.setModal(true);
    this->hide();
    if(fed.exec())
    {
        fileName = fed.getFilePath();
        ui->filenamepath->setText(fileName);
    }
    this->show();
}
