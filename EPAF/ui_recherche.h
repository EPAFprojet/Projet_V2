/********************************************************************************
** Form generated from reading UI file 'recherche.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHERCHE_H
#define UI_RECHERCHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recherche
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *recherche)
    {
        if (recherche->objectName().isEmpty())
            recherche->setObjectName(QStringLiteral("recherche"));
        recherche->resize(800, 600);
        menubar = new QMenuBar(recherche);
        menubar->setObjectName(QStringLiteral("menubar"));
        recherche->setMenuBar(menubar);
        centralwidget = new QWidget(recherche);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        recherche->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(recherche);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        recherche->setStatusBar(statusbar);

        retranslateUi(recherche);

        QMetaObject::connectSlotsByName(recherche);
    } // setupUi

    void retranslateUi(QMainWindow *recherche)
    {
        recherche->setWindowTitle(QApplication::translate("recherche", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class recherche: public Ui_recherche {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHERCHE_H
