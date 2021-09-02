/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QWidget *centralwidget;
    QLabel *AdaLabel;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *TituloLayout;
    QLabel *SMPLabel;
    QSpacerItem *horizontalSpacer_9;
    QLabel *TituloLabel;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *ConexaoLayout;
    QHBoxLayout *PortaLayout;
    QSpacerItem *horizontalSpacer_7;
    QLabel *PortaLabel;
    QComboBox *PortasComboBox;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *ConectarLayout;
    QPushButton *ConectarButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *StatusLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *StatusTxtLabel;
    QLabel *StatusLabel;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *OpcoesLayout;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *BotoesLayout;
    QPushButton *DadosButton;
    QPushButton *ConfigButton;
    QHBoxLayout *SairLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SairButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QString::fromUtf8("TelaPrincipal"));
        TelaPrincipal->resize(735, 667);
        centralwidget = new QWidget(TelaPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        AdaLabel = new QLabel(centralwidget);
        AdaLabel->setObjectName(QString::fromUtf8("AdaLabel"));
        AdaLabel->setGeometry(QRect(20, 520, 311, 91));
        AdaLabel->setMinimumSize(QSize(100, 29));
        AdaLabel->setMaximumSize(QSize(311, 91));
        AdaLabel->setStyleSheet(QString::fromUtf8(""));
        AdaLabel->setPixmap(QPixmap(QString::fromUtf8(":/:/Imgs/Imgs/logo_ada.png")));
        AdaLabel->setScaledContents(true);
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(90, 20, 531, 481));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        TituloLayout = new QHBoxLayout();
        TituloLayout->setObjectName(QString::fromUtf8("TituloLayout"));
        SMPLabel = new QLabel(verticalLayoutWidget_3);
        SMPLabel->setObjectName(QString::fromUtf8("SMPLabel"));
        SMPLabel->setMaximumSize(QSize(175, 181));
        SMPLabel->setPixmap(QPixmap(QString::fromUtf8(":/:/Imgs/Imgs/logo.png")));
        SMPLabel->setScaledContents(true);

        TituloLayout->addWidget(SMPLabel);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TituloLayout->addItem(horizontalSpacer_9);

        TituloLabel = new QLabel(verticalLayoutWidget_3);
        TituloLabel->setObjectName(QString::fromUtf8("TituloLabel"));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        TituloLabel->setFont(font);
        TituloLabel->setMouseTracking(false);
        TituloLabel->setAcceptDrops(false);
        TituloLabel->setStyleSheet(QString::fromUtf8("color: #A22"));
        TituloLabel->setTextFormat(Qt::AutoText);
        TituloLabel->setScaledContents(false);
        TituloLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TituloLabel->setWordWrap(true);

        TituloLayout->addWidget(TituloLabel);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        TituloLayout->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(TituloLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        ConexaoLayout = new QVBoxLayout();
        ConexaoLayout->setObjectName(QString::fromUtf8("ConexaoLayout"));
        PortaLayout = new QHBoxLayout();
        PortaLayout->setObjectName(QString::fromUtf8("PortaLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        PortaLayout->addItem(horizontalSpacer_7);

        PortaLabel = new QLabel(verticalLayoutWidget_3);
        PortaLabel->setObjectName(QString::fromUtf8("PortaLabel"));
        QFont font1;
        font1.setPointSize(25);
        PortaLabel->setFont(font1);
        PortaLabel->setMouseTracking(false);
        PortaLabel->setAcceptDrops(false);
        PortaLabel->setStyleSheet(QString::fromUtf8("color: #A22"));
        PortaLabel->setTextFormat(Qt::AutoText);
        PortaLabel->setScaledContents(false);
        PortaLabel->setWordWrap(true);

        PortaLayout->addWidget(PortaLabel);

        PortasComboBox = new QComboBox(verticalLayoutWidget_3);
        PortasComboBox->setObjectName(QString::fromUtf8("PortasComboBox"));
        PortasComboBox->setFont(font1);

        PortaLayout->addWidget(PortasComboBox);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        PortaLayout->addItem(horizontalSpacer_8);


        ConexaoLayout->addLayout(PortaLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ConexaoLayout->addItem(verticalSpacer);

        ConectarLayout = new QHBoxLayout();
        ConectarLayout->setObjectName(QString::fromUtf8("ConectarLayout"));
        ConectarLayout->setContentsMargins(150, -1, 150, -1);
        ConectarButton = new QPushButton(verticalLayoutWidget_3);
        ConectarButton->setObjectName(QString::fromUtf8("ConectarButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConectarButton->sizePolicy().hasHeightForWidth());
        ConectarButton->setSizePolicy(sizePolicy);
        ConectarButton->setFont(font1);
        ConectarButton->setStyleSheet(QString::fromUtf8("color:#A22"));

        ConectarLayout->addWidget(ConectarButton);


        ConexaoLayout->addLayout(ConectarLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ConexaoLayout->addItem(verticalSpacer_2);

        StatusLayout = new QHBoxLayout();
        StatusLayout->setObjectName(QString::fromUtf8("StatusLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        StatusLayout->addItem(horizontalSpacer_3);

        StatusTxtLabel = new QLabel(verticalLayoutWidget_3);
        StatusTxtLabel->setObjectName(QString::fromUtf8("StatusTxtLabel"));
        StatusTxtLabel->setFont(font1);
        StatusTxtLabel->setMouseTracking(false);
        StatusTxtLabel->setAcceptDrops(false);
        StatusTxtLabel->setStyleSheet(QString::fromUtf8("color: #A22"));
        StatusTxtLabel->setTextFormat(Qt::AutoText);
        StatusTxtLabel->setScaledContents(false);
        StatusTxtLabel->setWordWrap(true);

        StatusLayout->addWidget(StatusTxtLabel);

        StatusLabel = new QLabel(verticalLayoutWidget_3);
        StatusLabel->setObjectName(QString::fromUtf8("StatusLabel"));
        StatusLabel->setFont(font1);
        StatusLabel->setMouseTracking(false);
        StatusLabel->setAcceptDrops(false);
        StatusLabel->setStyleSheet(QString::fromUtf8("color: #3B3"));
        StatusLabel->setTextFormat(Qt::AutoText);
        StatusLabel->setScaledContents(false);
        StatusLabel->setWordWrap(true);

        StatusLayout->addWidget(StatusLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        StatusLayout->addItem(horizontalSpacer_4);


        ConexaoLayout->addLayout(StatusLayout);


        verticalLayout_3->addLayout(ConexaoLayout);

        OpcoesLayout = new QVBoxLayout();
        OpcoesLayout->setObjectName(QString::fromUtf8("OpcoesLayout"));
        OpcoesLayout->setContentsMargins(0, 10, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        OpcoesLayout->addItem(verticalSpacer_4);

        BotoesLayout = new QHBoxLayout();
        BotoesLayout->setObjectName(QString::fromUtf8("BotoesLayout"));
        DadosButton = new QPushButton(verticalLayoutWidget_3);
        DadosButton->setObjectName(QString::fromUtf8("DadosButton"));
        QFont font2;
        font2.setPointSize(20);
        DadosButton->setFont(font2);
        DadosButton->setStyleSheet(QString::fromUtf8("color:#A22"));

        BotoesLayout->addWidget(DadosButton);

        ConfigButton = new QPushButton(verticalLayoutWidget_3);
        ConfigButton->setObjectName(QString::fromUtf8("ConfigButton"));
        ConfigButton->setFont(font2);
        ConfigButton->setStyleSheet(QString::fromUtf8("color:#A22"));

        BotoesLayout->addWidget(ConfigButton);


        OpcoesLayout->addLayout(BotoesLayout);

        SairLayout = new QHBoxLayout();
        SairLayout->setObjectName(QString::fromUtf8("SairLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SairLayout->addItem(horizontalSpacer_2);

        SairButton = new QPushButton(verticalLayoutWidget_3);
        SairButton->setObjectName(QString::fromUtf8("SairButton"));
        QFont font3;
        font3.setPointSize(15);
        SairButton->setFont(font3);
        SairButton->setStyleSheet(QString::fromUtf8("color:#A22"));

        SairLayout->addWidget(SairButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        SairLayout->addItem(horizontalSpacer);


        OpcoesLayout->addLayout(SairLayout);


        verticalLayout_3->addLayout(OpcoesLayout);

        TelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 735, 21));
        TelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaPrincipal->setStatusBar(statusbar);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QCoreApplication::translate("TelaPrincipal", "SMP", nullptr));
        AdaLabel->setText(QString());
        SMPLabel->setText(QString());
        TituloLabel->setText(QCoreApplication::translate("TelaPrincipal", "Sistema de Monitoramento de Press\303\243o", nullptr));
        PortaLabel->setText(QCoreApplication::translate("TelaPrincipal", "Porta:", nullptr));
        ConectarButton->setText(QCoreApplication::translate("TelaPrincipal", "Conectar", nullptr));
        StatusTxtLabel->setText(QCoreApplication::translate("TelaPrincipal", "Status:", nullptr));
        StatusLabel->setText(QCoreApplication::translate("TelaPrincipal", "Conectado!", nullptr));
        DadosButton->setText(QCoreApplication::translate("TelaPrincipal", "Dados", nullptr));
        ConfigButton->setText(QCoreApplication::translate("TelaPrincipal", "Configura\303\247\303\265es", nullptr));
        SairButton->setText(QCoreApplication::translate("TelaPrincipal", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
