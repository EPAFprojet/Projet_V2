#include "listes.h"
#include "ui_listes.h"

listes::listes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::listes)
{
    ui->setupUi(this);
}

listes::~listes()
{
    delete ui;
}
