#ifndef CONNEXIONMAINMENU_H
#define CONNEXIONMAINMENU_H

#include <QMainWindow>

namespace Ui {
class connexionmainmenu;
}

class connexionmainmenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit connexionmainmenu(QWidget *parent = 0);
    ~connexionmainmenu();

private:
    Ui::connexionmainmenu *ui;

};

#endif // CONNEXIONMAINMENU_H
