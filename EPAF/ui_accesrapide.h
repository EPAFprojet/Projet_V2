/********************************************************************************
** Form generated from reading UI file 'accesrapide.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESRAPIDE_H
#define UI_ACCESRAPIDE_H

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

class Ui_accesrapide
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *accesrapide)
    {
        if (accesrapide->objectName().isEmpty())
            accesrapide->setObjectName(QStringLiteral("accesrapide"));
        accesrapide->resize(800, 600);
        menubar = new QMenuBar(accesrapide);
        menubar->setObjectName(QStringLiteral("menubar"));
        accesrapide->setMenuBar(menubar);
        centralwidget = new QWidget(accesrapide);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        accesrapide->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(accesrapide);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        accesrapide->setStatusBar(statusbar);

        retranslateUi(accesrapide);

        QMetaObject::connectSlotsByName(accesrapide);
    } // setupUi

    void retranslateUi(QMainWindow *accesrapide)
    {
        accesrapide->setWindowTitle(QApplication::translate("accesrapide", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class accesrapide: public Ui_accesrapide {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESRAPIDE_H
