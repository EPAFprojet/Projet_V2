/********************************************************************************
** Form generated from reading UI file 'ajoutermodifierpat.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTERMODIFIERPAT_H
#define UI_AJOUTERMODIFIERPAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ajoutermodifierpat
{
public:
    QWidget *centralwidget;
    QWidget *ajouterPatineur;
    QLabel *label_14;
    QTabWidget *TabHockey;
    QWidget *tab;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *equipelineEdit;
    QLineEdit *catlineEdit;
    QLineEdit *positionlineEdit;
    QLineEdit *groupeHocklineEdit;
    QCheckBox *CombinecheckBox;
    QCheckBox *traiteurCheck;
    QLabel *Lieulabel;
    QLineEdit *LieulineEdit;
    QHBoxLayout *horizontalLayout;
    QRadioButton *gaucheradioButton;
    QRadioButton *droitierradioButton;
    QWidget *traiteurWid;
    QFormLayout *traiteurLayout;
    QLabel *label_28;
    QLineEdit *traitLundilineEdit;
    QLabel *label_29;
    QLineEdit *traitMardilineEdit;
    QLabel *label_30;
    QLineEdit *traitMercredilineEdit;
    QLabel *label_31;
    QLineEdit *traitJeudilineEdit;
    QLabel *traiteurTitre;
    QWidget *Patinage;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *clublineEdit;
    QLineEdit *danselineEdit;
    QLineEdit *stylelineEdit;
    QLineEdit *habiletelineEdit;
    QLineEdit *PAgroupelineEdit;
    QWidget *tab_3;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QLabel *label_32;
    QLabel *label_33;
    QLineEdit *gourpePOWlineEdit;
    QLineEdit *niveauPowlineEdit;
    QPushButton *ValiderpushButton;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLineEdit *villelineEdit;
    QLabel *label_9;
    QLineEdit *provincelineEdit;
    QLabel *label_10;
    QLineEdit *codePostallineEdit;
    QLabel *label_11;
    QLineEdit *ParentlineEdit;
    QLabel *label_12;
    QCheckBox *payecheckBox;
    QLabel *label_13;
    QTextEdit *NumTeltextEdit;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *IDEdit;
    QLabel *label_2;
    QLineEdit *nomlineEdit;
    QLabel *label_3;
    QLineEdit *prenomlineEdit;
    QLabel *label_4;
    QLineEdit *adresselineEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *courriellineEdit;
    QLabel *label_7;
    QTextEdit *condiMedtextEdit;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *jourlineEdit;
    QLabel *label_60;
    QLineEdit *moislineEdit;
    QLabel *label_61;
    QLineEdit *anneeLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ajoutermodifierpat)
    {
        if (ajoutermodifierpat->objectName().isEmpty())
            ajoutermodifierpat->setObjectName(QStringLiteral("ajoutermodifierpat"));
        ajoutermodifierpat->resize(1005, 796);
        centralwidget = new QWidget(ajoutermodifierpat);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ajouterPatineur = new QWidget(centralwidget);
        ajouterPatineur->setObjectName(QStringLiteral("ajouterPatineur"));
        ajouterPatineur->setGeometry(QRect(0, 10, 1001, 741));
        label_14 = new QLabel(ajouterPatineur);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(400, 10, 271, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_14->setFont(font);
        TabHockey = new QTabWidget(ajouterPatineur);
        TabHockey->setObjectName(QStringLiteral("TabHockey"));
        TabHockey->setGeometry(QRect(120, 350, 811, 341));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayoutWidget_3 = new QWidget(tab);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(0, 20, 321, 251));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(formLayoutWidget_3);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_16);

        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(formLayoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_18);

        label_19 = new QLabel(formLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_19);

        label_20 = new QLabel(formLayoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_20);

        label_21 = new QLabel(formLayoutWidget_3);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_21);

        equipelineEdit = new QLineEdit(formLayoutWidget_3);
        equipelineEdit->setObjectName(QStringLiteral("equipelineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, equipelineEdit);

        catlineEdit = new QLineEdit(formLayoutWidget_3);
        catlineEdit->setObjectName(QStringLiteral("catlineEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, catlineEdit);

        positionlineEdit = new QLineEdit(formLayoutWidget_3);
        positionlineEdit->setObjectName(QStringLiteral("positionlineEdit"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, positionlineEdit);

        groupeHocklineEdit = new QLineEdit(formLayoutWidget_3);
        groupeHocklineEdit->setObjectName(QStringLiteral("groupeHocklineEdit"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, groupeHocklineEdit);

        CombinecheckBox = new QCheckBox(formLayoutWidget_3);
        CombinecheckBox->setObjectName(QStringLiteral("CombinecheckBox"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, CombinecheckBox);

        traiteurCheck = new QCheckBox(formLayoutWidget_3);
        traiteurCheck->setObjectName(QStringLiteral("traiteurCheck"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, traiteurCheck);

        Lieulabel = new QLabel(formLayoutWidget_3);
        Lieulabel->setObjectName(QStringLiteral("Lieulabel"));

        formLayout_3->setWidget(7, QFormLayout::LabelRole, Lieulabel);

        LieulineEdit = new QLineEdit(formLayoutWidget_3);
        LieulineEdit->setObjectName(QStringLiteral("LieulineEdit"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, LieulineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gaucheradioButton = new QRadioButton(formLayoutWidget_3);
        gaucheradioButton->setObjectName(QStringLiteral("gaucheradioButton"));

        horizontalLayout->addWidget(gaucheradioButton);

        droitierradioButton = new QRadioButton(formLayoutWidget_3);
        droitierradioButton->setObjectName(QStringLiteral("droitierradioButton"));

        horizontalLayout->addWidget(droitierradioButton);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        traiteurWid = new QWidget(tab);
        traiteurWid->setObjectName(QStringLiteral("traiteurWid"));
        traiteurWid->setGeometry(QRect(330, 40, 261, 100));
        traiteurLayout = new QFormLayout(traiteurWid);
        traiteurLayout->setObjectName(QStringLiteral("traiteurLayout"));
        label_28 = new QLabel(traiteurWid);
        label_28->setObjectName(QStringLiteral("label_28"));

        traiteurLayout->setWidget(0, QFormLayout::LabelRole, label_28);

        traitLundilineEdit = new QLineEdit(traiteurWid);
        traitLundilineEdit->setObjectName(QStringLiteral("traitLundilineEdit"));

        traiteurLayout->setWidget(0, QFormLayout::FieldRole, traitLundilineEdit);

        label_29 = new QLabel(traiteurWid);
        label_29->setObjectName(QStringLiteral("label_29"));

        traiteurLayout->setWidget(1, QFormLayout::LabelRole, label_29);

        traitMardilineEdit = new QLineEdit(traiteurWid);
        traitMardilineEdit->setObjectName(QStringLiteral("traitMardilineEdit"));

        traiteurLayout->setWidget(1, QFormLayout::FieldRole, traitMardilineEdit);

        label_30 = new QLabel(traiteurWid);
        label_30->setObjectName(QStringLiteral("label_30"));

        traiteurLayout->setWidget(2, QFormLayout::LabelRole, label_30);

        traitMercredilineEdit = new QLineEdit(traiteurWid);
        traitMercredilineEdit->setObjectName(QStringLiteral("traitMercredilineEdit"));

        traiteurLayout->setWidget(2, QFormLayout::FieldRole, traitMercredilineEdit);

        label_31 = new QLabel(traiteurWid);
        label_31->setObjectName(QStringLiteral("label_31"));

        traiteurLayout->setWidget(3, QFormLayout::LabelRole, label_31);

        traitJeudilineEdit = new QLineEdit(traiteurWid);
        traitJeudilineEdit->setObjectName(QStringLiteral("traitJeudilineEdit"));

        traiteurLayout->setWidget(3, QFormLayout::FieldRole, traitJeudilineEdit);

        traiteurTitre = new QLabel(tab);
        traiteurTitre->setObjectName(QStringLiteral("traiteurTitre"));
        traiteurTitre->setGeometry(QRect(430, 20, 47, 13));
        TabHockey->addTab(tab, QString());
        Patinage = new QWidget();
        Patinage->setObjectName(QStringLiteral("Patinage"));
        formLayoutWidget_4 = new QWidget(Patinage);
        formLayoutWidget_4->setObjectName(QStringLiteral("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(9, 9, 351, 141));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(formLayoutWidget_4);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_23);

        label_24 = new QLabel(formLayoutWidget_4);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_24);

        label_25 = new QLabel(formLayoutWidget_4);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_25);

        label_26 = new QLabel(formLayoutWidget_4);
        label_26->setObjectName(QStringLiteral("label_26"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_26);

        label_27 = new QLabel(formLayoutWidget_4);
        label_27->setObjectName(QStringLiteral("label_27"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_27);

        clublineEdit = new QLineEdit(formLayoutWidget_4);
        clublineEdit->setObjectName(QStringLiteral("clublineEdit"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, clublineEdit);

        danselineEdit = new QLineEdit(formLayoutWidget_4);
        danselineEdit->setObjectName(QStringLiteral("danselineEdit"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, danselineEdit);

        stylelineEdit = new QLineEdit(formLayoutWidget_4);
        stylelineEdit->setObjectName(QStringLiteral("stylelineEdit"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, stylelineEdit);

        habiletelineEdit = new QLineEdit(formLayoutWidget_4);
        habiletelineEdit->setObjectName(QStringLiteral("habiletelineEdit"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, habiletelineEdit);

        PAgroupelineEdit = new QLineEdit(formLayoutWidget_4);
        PAgroupelineEdit->setObjectName(QStringLiteral("PAgroupelineEdit"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, PAgroupelineEdit);

        TabHockey->addTab(Patinage, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        formLayoutWidget_5 = new QWidget(tab_3);
        formLayoutWidget_5->setObjectName(QStringLiteral("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(10, 10, 281, 48));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        label_32 = new QLabel(formLayoutWidget_5);
        label_32->setObjectName(QStringLiteral("label_32"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_32);

        label_33 = new QLabel(formLayoutWidget_5);
        label_33->setObjectName(QStringLiteral("label_33"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_33);

        gourpePOWlineEdit = new QLineEdit(formLayoutWidget_5);
        gourpePOWlineEdit->setObjectName(QStringLiteral("gourpePOWlineEdit"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, gourpePOWlineEdit);

        niveauPowlineEdit = new QLineEdit(formLayoutWidget_5);
        niveauPowlineEdit->setObjectName(QStringLiteral("niveauPowlineEdit"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, niveauPowlineEdit);

        TabHockey->addTab(tab_3, QString());
        ValiderpushButton = new QPushButton(ajouterPatineur);
        ValiderpushButton->setObjectName(QStringLiteral("ValiderpushButton"));
        ValiderpushButton->setGeometry(QRect(120, 700, 801, 23));
        formLayoutWidget_2 = new QWidget(ajouterPatineur);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(600, 90, 331, 231));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        villelineEdit = new QLineEdit(formLayoutWidget_2);
        villelineEdit->setObjectName(QStringLiteral("villelineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, villelineEdit);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        provincelineEdit = new QLineEdit(formLayoutWidget_2);
        provincelineEdit->setObjectName(QStringLiteral("provincelineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, provincelineEdit);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);

        codePostallineEdit = new QLineEdit(formLayoutWidget_2);
        codePostallineEdit->setObjectName(QStringLiteral("codePostallineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, codePostallineEdit);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_11);

        ParentlineEdit = new QLineEdit(formLayoutWidget_2);
        ParentlineEdit->setObjectName(QStringLiteral("ParentlineEdit"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, ParentlineEdit);

        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_12);

        payecheckBox = new QCheckBox(formLayoutWidget_2);
        payecheckBox->setObjectName(QStringLiteral("payecheckBox"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, payecheckBox);

        label_13 = new QLabel(formLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_13);

        NumTeltextEdit = new QTextEdit(formLayoutWidget_2);
        NumTeltextEdit->setObjectName(QStringLiteral("NumTeltextEdit"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, NumTeltextEdit);

        formLayoutWidget = new QWidget(ajouterPatineur);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(120, 90, 331, 248));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        IDEdit = new QLineEdit(formLayoutWidget);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, IDEdit);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        nomlineEdit = new QLineEdit(formLayoutWidget);
        nomlineEdit->setObjectName(QStringLiteral("nomlineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nomlineEdit);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        prenomlineEdit = new QLineEdit(formLayoutWidget);
        prenomlineEdit->setObjectName(QStringLiteral("prenomlineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, prenomlineEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        adresselineEdit = new QLineEdit(formLayoutWidget);
        adresselineEdit->setObjectName(QStringLiteral("adresselineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, adresselineEdit);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        courriellineEdit = new QLineEdit(formLayoutWidget);
        courriellineEdit->setObjectName(QStringLiteral("courriellineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, courriellineEdit);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        condiMedtextEdit = new QTextEdit(formLayoutWidget);
        condiMedtextEdit->setObjectName(QStringLiteral("condiMedtextEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, condiMedtextEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        jourlineEdit = new QLineEdit(formLayoutWidget);
        jourlineEdit->setObjectName(QStringLiteral("jourlineEdit"));
        jourlineEdit->setMaxLength(2);

        horizontalLayout_5->addWidget(jourlineEdit);

        label_60 = new QLabel(formLayoutWidget);
        label_60->setObjectName(QStringLiteral("label_60"));

        horizontalLayout_5->addWidget(label_60);

        moislineEdit = new QLineEdit(formLayoutWidget);
        moislineEdit->setObjectName(QStringLiteral("moislineEdit"));
        moislineEdit->setMaxLength(2);

        horizontalLayout_5->addWidget(moislineEdit);

        label_61 = new QLabel(formLayoutWidget);
        label_61->setObjectName(QStringLiteral("label_61"));

        horizontalLayout_5->addWidget(label_61);

        anneeLineEdit = new QLineEdit(formLayoutWidget);
        anneeLineEdit->setObjectName(QStringLiteral("anneeLineEdit"));
        anneeLineEdit->setMaxLength(4);

        horizontalLayout_5->addWidget(anneeLineEdit);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_5);

        ajoutermodifierpat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ajoutermodifierpat);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1005, 21));
        ajoutermodifierpat->setMenuBar(menubar);
        statusbar = new QStatusBar(ajoutermodifierpat);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ajoutermodifierpat->setStatusBar(statusbar);

        retranslateUi(ajoutermodifierpat);

        TabHockey->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ajoutermodifierpat);
    } // setupUi

    void retranslateUi(QMainWindow *ajoutermodifierpat)
    {
        ajoutermodifierpat->setWindowTitle(QApplication::translate("ajoutermodifierpat", "Ajouter patineur", Q_NULLPTR));
        label_14->setText(QApplication::translate("ajoutermodifierpat", "Informations principales", Q_NULLPTR));
        label_15->setText(QApplication::translate("ajoutermodifierpat", "\303\211quipe", Q_NULLPTR));
        label_16->setText(QApplication::translate("ajoutermodifierpat", "Cat\303\251gorie", Q_NULLPTR));
        label_17->setText(QApplication::translate("ajoutermodifierpat", "Position", Q_NULLPTR));
        label_18->setText(QApplication::translate("ajoutermodifierpat", "Lat\303\251ralit\303\251", Q_NULLPTR));
        label_19->setText(QApplication::translate("ajoutermodifierpat", "Groupe", Q_NULLPTR));
        label_20->setText(QApplication::translate("ajoutermodifierpat", "Traiteur", Q_NULLPTR));
        label_21->setText(QApplication::translate("ajoutermodifierpat", "<html><head/><body><p>Combin\303\251</p></body></html>", Q_NULLPTR));
        CombinecheckBox->setText(QString());
        traiteurCheck->setText(QString());
        Lieulabel->setText(QApplication::translate("ajoutermodifierpat", "Lieu", Q_NULLPTR));
        gaucheradioButton->setText(QApplication::translate("ajoutermodifierpat", "Gaucher", Q_NULLPTR));
        droitierradioButton->setText(QApplication::translate("ajoutermodifierpat", "Droitier", Q_NULLPTR));
        label_28->setText(QApplication::translate("ajoutermodifierpat", "Lundi", Q_NULLPTR));
        label_29->setText(QApplication::translate("ajoutermodifierpat", "Mardi", Q_NULLPTR));
        label_30->setText(QApplication::translate("ajoutermodifierpat", "Mercredi", Q_NULLPTR));
        label_31->setText(QApplication::translate("ajoutermodifierpat", "Jeudi", Q_NULLPTR));
        traiteurTitre->setText(QApplication::translate("ajoutermodifierpat", "Traiteur", Q_NULLPTR));
        TabHockey->setTabText(TabHockey->indexOf(tab), QApplication::translate("ajoutermodifierpat", "Hockey", Q_NULLPTR));
        label_23->setText(QApplication::translate("ajoutermodifierpat", "Num\303\251ro du club", Q_NULLPTR));
        label_24->setText(QApplication::translate("ajoutermodifierpat", "Niveau de danse", Q_NULLPTR));
        label_25->setText(QApplication::translate("ajoutermodifierpat", "Niveau de style libre", Q_NULLPTR));
        label_26->setText(QApplication::translate("ajoutermodifierpat", "Niveau d'habilet\303\251", Q_NULLPTR));
        label_27->setText(QApplication::translate("ajoutermodifierpat", "Groupe", Q_NULLPTR));
        TabHockey->setTabText(TabHockey->indexOf(Patinage), QApplication::translate("ajoutermodifierpat", "Patinage Artistique", Q_NULLPTR));
        label_32->setText(QApplication::translate("ajoutermodifierpat", "Groupe", Q_NULLPTR));
        label_33->setText(QApplication::translate("ajoutermodifierpat", "Niveau", Q_NULLPTR));
        TabHockey->setTabText(TabHockey->indexOf(tab_3), QApplication::translate("ajoutermodifierpat", "PowerSkating", Q_NULLPTR));
        ValiderpushButton->setText(QApplication::translate("ajoutermodifierpat", "Valider", Q_NULLPTR));
        label_8->setText(QApplication::translate("ajoutermodifierpat", "Ville", Q_NULLPTR));
        label_9->setText(QApplication::translate("ajoutermodifierpat", "Province", Q_NULLPTR));
        label_10->setText(QApplication::translate("ajoutermodifierpat", "Code postal", Q_NULLPTR));
        label_11->setText(QApplication::translate("ajoutermodifierpat", "Parent responsable", Q_NULLPTR));
        label_12->setText(QApplication::translate("ajoutermodifierpat", "Pay\303\251", Q_NULLPTR));
        payecheckBox->setText(QString());
        label_13->setText(QApplication::translate("ajoutermodifierpat", "Num\303\251ro de t\303\251l\303\251phone", Q_NULLPTR));
        label->setText(QApplication::translate("ajoutermodifierpat", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("ajoutermodifierpat", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("ajoutermodifierpat", "Pr\303\251nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("ajoutermodifierpat", "Adresse", Q_NULLPTR));
        label_5->setText(QApplication::translate("ajoutermodifierpat", "Date de naissance", Q_NULLPTR));
        label_6->setText(QApplication::translate("ajoutermodifierpat", "Courriel du parent", Q_NULLPTR));
        label_7->setText(QApplication::translate("ajoutermodifierpat", "Condition m\303\251dicale", Q_NULLPTR));
        label_60->setText(QApplication::translate("ajoutermodifierpat", "/", Q_NULLPTR));
        label_61->setText(QApplication::translate("ajoutermodifierpat", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ajoutermodifierpat: public Ui_ajoutermodifierpat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTERMODIFIERPAT_H
