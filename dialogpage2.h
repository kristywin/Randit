#ifndef DIALOGPAGE2_H
#define DIALOGPAGE2_H

#include <QDialog>

namespace Ui {
class DialogPage2;
}

class DialogPage2 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPage2(QWidget *parent = 0);
    ~DialogPage2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogPage2 *ui;
};

#endif // DIALOGPAGE2_H
