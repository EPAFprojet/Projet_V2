#ifndef AJOUTERMODIFIERPAT_H
#define AJOUTERMODIFIERPAT_H

#include <QMainWindow>

namespace Ui {
class ajoutermodifierpat;
}

class ajoutermodifierpat : public QMainWindow
{
    Q_OBJECT

public:
    explicit ajoutermodifierpat(QWidget *parent = 0);
    ~ajoutermodifierpat();

private:
    Ui::ajoutermodifierpat *ui;
};

#endif // AJOUTERMODIFIERPAT_H
