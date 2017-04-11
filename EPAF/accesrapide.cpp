#include "accesrapide.h"
#include "ui_accesrapide.h"

accesrapide::accesrapide(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::accesrapide)
{
    ui->setupUi(this);
}

accesrapide::~accesrapide()
{
    delete ui;
}
