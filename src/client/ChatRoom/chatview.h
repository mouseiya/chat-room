#ifndef CHATVIEW_H
#define CHATVIEW_H

#include <QDialog>

namespace Ui {
class ChatView;
}

class ChatView : public QDialog
{
    Q_OBJECT

public:
    explicit ChatView(QWidget *parent = nullptr);
    ~ChatView();

private:
    Ui::ChatView *ui;
};

#endif // CHATVIEW_H
