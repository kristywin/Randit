#include "fileexplorerdialog.h"
#include "ui_fileexplorerdialog.h"

FileExplorerDialog::FileExplorerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileExplorerDialog)
{
    ui->setupUi(this);

    QString sPath = "/";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirmodel->setRootPath(sPath);

    ui->treeView->setModel(dirmodel);

    filemodel = new QFileSystemModel(this);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    filemodel->setRootPath(sPath);

    ui->listView->setModel(filemodel);
}

FileExplorerDialog::~FileExplorerDialog()
{
    delete ui;
}
QString FileExplorerDialog::getFilePath() const
{
    return filePath;
}

void FileExplorerDialog::setFilePath(const QString &value)
{
    filePath = value;
}


void FileExplorerDialog::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
}

void FileExplorerDialog::on_listView_clicked(const QModelIndex &index)
{
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
    ui->lineEdit->setText(sPath);
    this->setFilePath(sPath);
}
