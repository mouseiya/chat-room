#include "chatview.h"
#include "ui_chatview.h"

ChatView::ChatView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatView)
{
    ui->setupUi(this);
}

ChatView::~ChatView()
{
    delete ui;
}
