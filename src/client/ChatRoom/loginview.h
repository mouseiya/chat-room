#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <QDialog>

namespace Ui {
class LoginView;
}

class LoginView : public QDialog
{
    Q_OBJECT

public:
    explicit LoginView(QWidget *parent = nullptr);
    ~LoginView();

private:
    Ui::LoginView *ui;
};

#endif // LOGINVIEW_H
