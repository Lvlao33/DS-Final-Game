#ifndef SIGNINDLG_H
#define SIGNINDLG_H

#include <QDialog>

namespace Ui {
class SignInDialog;
}

class SignInDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SignInDialog(QWidget *parent = nullptr);
    ~SignInDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignInDialog *ui;
};

#endif // SIGNINDLG_H
