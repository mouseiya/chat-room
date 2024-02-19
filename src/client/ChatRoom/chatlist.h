#ifndef CHATLIST_H
#define CHATLIST_H

#include <QDialog>

namespace Ui {
class ChatList;
}

class ChatList : public QDialog
{
    Q_OBJECT

public:
    explicit ChatList(QWidget *parent = nullptr);
    ~ChatList();

private:
    Ui::ChatList *ui;
};

#endif // CHATLIST_H
