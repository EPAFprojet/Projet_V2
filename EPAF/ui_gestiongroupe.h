/********************************************************************************
** Form generated from reading UI file 'gestiongroupe.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONGROUPE_H
#define UI_GESTIONGROUPE_H

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

class Ui_gestiongroupe
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestiongroupe)
    {
        if (gestiongroupe->objectName().isEmpty())
            gestiongroupe->setObjectName(QStringLiteral("gestiongroupe"));
        gestiongroupe->resize(800, 600);
        menubar = new QMenuBar(gestiongroupe);
        menubar->setObjectName(QStringLiteral("menubar"));
        gestiongroupe->setMenuBar(menubar);
        centralwidget = new QWidget(gestiongroupe);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gestiongroupe->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(gestiongroupe);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestiongroupe->setStatusBar(statusbar);

        retranslateUi(gestiongroupe);

        QMetaObject::connectSlotsByName(gestiongroupe);
    } // setupUi

    void retranslateUi(QMainWindow *gestiongroupe)
    {
        gestiongroupe->setWindowTitle(QApplication::translate("gestiongroupe", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestiongroupe: public Ui_gestiongroupe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONGROUPE_H
