#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QtSql>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("MarcoServ");
    db.setUserName("EPAF");
    db.setPassword("");
    if (!db.open())
    {
        QMessageBox::critical(0,QObject::tr("database error"), db.lastError().text());
    }

   connexion = new connexionmainmenu();

   //MainWindow::close();

   connexion->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
