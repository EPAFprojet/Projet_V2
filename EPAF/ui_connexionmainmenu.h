/********************************************************************************
** Form generated from reading UI file 'connexionmainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXIONMAINMENU_H
#define UI_CONNEXIONMAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connexionmainmenu
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuconnexions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *connexionmainmenu)
    {
        if (connexionmainmenu->objectName().isEmpty())
            connexionmainmenu->setObjectName(QStringLiteral("connexionmainmenu"));
        connexionmainmenu->resize(800, 600);
        centralwidget = new QWidget(connexionmainmenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        connexionmainmenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(connexionmainmenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuconnexions = new QMenu(menubar);
        menuconnexions->setObjectName(QStringLiteral("menuconnexions"));
        connexionmainmenu->setMenuBar(menubar);
        statusbar = new QStatusBar(connexionmainmenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        connexionmainmenu->setStatusBar(statusbar);

        menubar->addAction(menuconnexions->menuAction());

        retranslateUi(connexionmainmenu);

        QMetaObject::connectSlotsByName(connexionmainmenu);
    } // setupUi

    void retranslateUi(QMainWindow *connexionmainmenu)
    {
        connexionmainmenu->setWindowTitle(QApplication::translate("connexionmainmenu", "MainWindow", Q_NULLPTR));
        menuconnexions->setTitle(QApplication::translate("connexionmainmenu", "connexions", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class connexionmainmenu: public Ui_connexionmainmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXIONMAINMENU_H
