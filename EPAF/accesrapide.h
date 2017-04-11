#ifndef ACCESRAPIDE_H
#define ACCESRAPIDE_H

#include <QMainWindow>

namespace Ui {
class accesrapide;
}

class accesrapide : public QMainWindow
{
    Q_OBJECT

public:
    explicit accesrapide(QWidget *parent = 0);
    ~accesrapide();

private:
    Ui::accesrapide *ui;
};

#endif // ACCESRAPIDE_H
