#ifndef SERVERUI_H
#define SERVERUI_H

#include <QWidget>

namespace Ui {
class ServerUI;
}

class ServerUI : public QWidget
{
    Q_OBJECT

public:
    explicit ServerUI(QWidget *parent = 0);
    ~ServerUI();

    void setButtons();
private:
    Ui::ServerUI *ui;
};

#endif // SERVERUI_H
