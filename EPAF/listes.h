#ifndef LISTES_H
#define LISTES_H

#include <QMainWindow>

namespace Ui {
class listes;
}

class listes : public QMainWindow
{
    Q_OBJECT

public:
    explicit listes(QWidget *parent = 0);
    ~listes();

private:
    Ui::listes *ui;
};

#endif // LISTES_H
