/********************************************************************************
** Form generated from reading UI file 'listes.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTES_H
#define UI_LISTES_H

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

class Ui_listes
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *listes)
    {
        if (listes->objectName().isEmpty())
            listes->setObjectName(QStringLiteral("listes"));
        listes->resize(800, 600);
        menubar = new QMenuBar(listes);
        menubar->setObjectName(QStringLiteral("menubar"));
        listes->setMenuBar(menubar);
        centralwidget = new QWidget(listes);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listes->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(listes);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        listes->setStatusBar(statusbar);

        retranslateUi(listes);

        QMetaObject::connectSlotsByName(listes);
    } // setupUi

    void retranslateUi(QMainWindow *listes)
    {
        listes->setWindowTitle(QApplication::translate("listes", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class listes: public Ui_listes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTES_H
