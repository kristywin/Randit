#include "report.h"
#include "ui_report.h"

Report::Report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Report)
{
    ui->setupUi(this);
}

Report::~Report()
{
    delete ui;
}

void Report::on_pushButton_2_clicked()
{
    this->destroy();

}

void Report::on_pushButton_clicked()
{
    this->hide();
}
