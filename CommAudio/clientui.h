#ifndef CLIENTUI_H
#define CLIENTUI_H

#include <QWidget>

namespace Ui {
class ClientUI;
}

class ClientUI : public QWidget
{
    Q_OBJECT

public:
    explicit ClientUI(QWidget *parent = 0);
    ~ClientUI();

    void setButtons();
private:
    Ui::ClientUI *ui;
};

#endif // CLIENTUI_H
