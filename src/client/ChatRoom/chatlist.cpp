#include "chatlist.h"
#include "ui_chatlist.h"

ChatList::ChatList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatList)
{
    ui->setupUi(this);
}

ChatList::~ChatList()
{
    delete ui;
}
