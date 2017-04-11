#include "ajoutermodifierpat.h"
#include "ui_ajoutermodifierpat.h"

ajoutermodifierpat::ajoutermodifierpat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ajoutermodifierpat)
{
    ui->setupUi(this);
}

ajoutermodifierpat::~ajoutermodifierpat()
{
    delete ui;
}
