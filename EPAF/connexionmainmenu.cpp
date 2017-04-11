#include "connexionmainmenu.h"
#include "ui_connexionmainmenu.h"

connexionmainmenu::connexionmainmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::connexionmainmenu)
{
    ui->setupUi(this);
}

connexionmainmenu::~connexionmainmenu()
{
    delete ui;
}
