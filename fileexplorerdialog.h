#ifndef FILEEXPLORERDIALOG_H
#define FILEEXPLORERDIALOG_H

#include <QDialog>
#include <mainwindow.h>
#include <qfilesystemmodel.h>

namespace Ui {
class FileExplorerDialog;
}

class FileExplorerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FileExplorerDialog(QWidget *parent = 0);
    ~FileExplorerDialog();

    QString filePath;


    QString getFilePath() const;
    void setFilePath(const QString &value);

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_listView_clicked(const QModelIndex &index);

private:
    Ui::FileExplorerDialog *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
};

#endif // FILEEXPLORERDIALOG_H
