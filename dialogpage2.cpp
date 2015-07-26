#include "dialogpage2.h"
#include "ui_dialogpage2.h"
#include "report.h"

DialogPage2::DialogPage2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPage2)
{
    ui->setupUi(this);
}

DialogPage2::~DialogPage2()
{
    delete ui;
}

void DialogPage2::on_pushButton_clicked()
{
    Report newReport;
    newReport.setModal(true);
    this->hide();
    newReport.exec();
    //MainWindow.show();
}
