/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *FrequenciaLayout;
    QLabel *FrequenciaLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *AmostragemLayout;
    QLabel *AmostragemLabel;
    QSpinBox *AmostragemValue;
    QVBoxLayout *ArmazenamentoLayout;
    QLabel *ArmazenamentoLabel;
    QSpinBox *ArmazenamentoValue;
    QVBoxLayout *DataeHoraLayout;
    QLabel *DataeHoraLabel;
    QHBoxLayout *ModoLayout;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *ManualButton;
    QSpacerItem *horizontalSpacer;
    QRadioButton *AutomaticoButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *CalendarioLayout;
    QCalendarWidget *Calendario;
    QTimeEdit *Hora;
    QVBoxLayout *SaveLayout;
    QLabel *SaveLabel;
    QHBoxLayout *OpcoesLayout;
    QPushButton *SaveButton;
    QPushButton *VoltarButton;
    QLabel *AdaLabel;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(704, 739);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(20, 0, 668, 532));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_3->setContentsMargins(0, 0, 0, 10);
        FrequenciaLayout = new QVBoxLayout();
        FrequenciaLayout->setObjectName(QString::fromUtf8("FrequenciaLayout"));
        FrequenciaLayout->setContentsMargins(5, 5, 5, 5);
        FrequenciaLabel = new QLabel(verticalLayoutWidget_6);
        FrequenciaLabel->setObjectName(QString::fromUtf8("FrequenciaLabel"));
        QPalette palette;
        QBrush brush(QColor(170, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        FrequenciaLabel->setPalette(palette);
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        FrequenciaLabel->setFont(font);
        FrequenciaLabel->setAlignment(Qt::AlignCenter);

        FrequenciaLayout->addWidget(FrequenciaLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AmostragemLayout = new QVBoxLayout();
        AmostragemLayout->setSpacing(10);
        AmostragemLayout->setObjectName(QString::fromUtf8("AmostragemLayout"));
        AmostragemLayout->setContentsMargins(10, 10, 10, 10);
        AmostragemLabel = new QLabel(verticalLayoutWidget_6);
        AmostragemLabel->setObjectName(QString::fromUtf8("AmostragemLabel"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        AmostragemLabel->setPalette(palette1);
        QFont font1;
        font1.setPointSize(20);
        AmostragemLabel->setFont(font1);
        AmostragemLabel->setAlignment(Qt::AlignCenter);

        AmostragemLayout->addWidget(AmostragemLabel);

        AmostragemValue = new QSpinBox(verticalLayoutWidget_6);
        AmostragemValue->setObjectName(QString::fromUtf8("AmostragemValue"));

        AmostragemLayout->addWidget(AmostragemValue);


        horizontalLayout->addLayout(AmostragemLayout);

        ArmazenamentoLayout = new QVBoxLayout();
        ArmazenamentoLayout->setSpacing(10);
        ArmazenamentoLayout->setObjectName(QString::fromUtf8("ArmazenamentoLayout"));
        ArmazenamentoLayout->setContentsMargins(10, 10, 10, 10);
        ArmazenamentoLabel = new QLabel(verticalLayoutWidget_6);
        ArmazenamentoLabel->setObjectName(QString::fromUtf8("ArmazenamentoLabel"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ArmazenamentoLabel->setPalette(palette2);
        ArmazenamentoLabel->setFont(font1);
        ArmazenamentoLabel->setAlignment(Qt::AlignCenter);

        ArmazenamentoLayout->addWidget(ArmazenamentoLabel);

        ArmazenamentoValue = new QSpinBox(verticalLayoutWidget_6);
        ArmazenamentoValue->setObjectName(QString::fromUtf8("ArmazenamentoValue"));

        ArmazenamentoLayout->addWidget(ArmazenamentoValue);


        horizontalLayout->addLayout(ArmazenamentoLayout);


        FrequenciaLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(FrequenciaLayout);

        DataeHoraLayout = new QVBoxLayout();
        DataeHoraLayout->setObjectName(QString::fromUtf8("DataeHoraLayout"));
        DataeHoraLayout->setContentsMargins(5, 5, 5, 5);
        DataeHoraLabel = new QLabel(verticalLayoutWidget_6);
        DataeHoraLabel->setObjectName(QString::fromUtf8("DataeHoraLabel"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        DataeHoraLabel->setPalette(palette3);
        DataeHoraLabel->setFont(font);
        DataeHoraLabel->setAlignment(Qt::AlignCenter);

        DataeHoraLayout->addWidget(DataeHoraLabel);

        ModoLayout = new QHBoxLayout();
        ModoLayout->setObjectName(QString::fromUtf8("ModoLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ModoLayout->addItem(horizontalSpacer_2);

        ManualButton = new QRadioButton(verticalLayoutWidget_6);
        ManualButton->setObjectName(QString::fromUtf8("ManualButton"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        ManualButton->setPalette(palette4);
        QFont font2;
        font2.setPointSize(15);
        ManualButton->setFont(font2);

        ModoLayout->addWidget(ManualButton, 0, Qt::AlignRight);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ModoLayout->addItem(horizontalSpacer);

        AutomaticoButton = new QRadioButton(verticalLayoutWidget_6);
        AutomaticoButton->setObjectName(QString::fromUtf8("AutomaticoButton"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        AutomaticoButton->setPalette(palette5);
        AutomaticoButton->setFont(font2);

        ModoLayout->addWidget(AutomaticoButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ModoLayout->addItem(horizontalSpacer_3);


        DataeHoraLayout->addLayout(ModoLayout);

        CalendarioLayout = new QHBoxLayout();
        CalendarioLayout->setObjectName(QString::fromUtf8("CalendarioLayout"));
        Calendario = new QCalendarWidget(verticalLayoutWidget_6);
        Calendario->setObjectName(QString::fromUtf8("Calendario"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Calendario->sizePolicy().hasHeightForWidth());
        Calendario->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(10);
        Calendario->setFont(font3);

        CalendarioLayout->addWidget(Calendario);

        Hora = new QTimeEdit(verticalLayoutWidget_6);
        Hora->setObjectName(QString::fromUtf8("Hora"));
        Hora->setMinimumSize(QSize(300, 40));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush2(QColor(170, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        Hora->setPalette(palette6);
        Hora->setFont(font2);
        Hora->setTime(QTime(0, 0, 0));

        CalendarioLayout->addWidget(Hora);


        DataeHoraLayout->addLayout(CalendarioLayout);


        verticalLayout_3->addLayout(DataeHoraLayout);

        SaveLayout = new QVBoxLayout();
        SaveLayout->setObjectName(QString::fromUtf8("SaveLayout"));
        SaveLayout->setContentsMargins(5, 5, 5, 5);
        SaveLabel = new QLabel(verticalLayoutWidget_6);
        SaveLabel->setObjectName(QString::fromUtf8("SaveLabel"));
        SaveLabel->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SaveLabel->sizePolicy().hasHeightForWidth());
        SaveLabel->setSizePolicy(sizePolicy2);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        SaveLabel->setPalette(palette7);
        SaveLabel->setFont(font2);
        SaveLabel->setAlignment(Qt::AlignCenter);

        SaveLayout->addWidget(SaveLabel);

        OpcoesLayout = new QHBoxLayout();
        OpcoesLayout->setSpacing(0);
        OpcoesLayout->setObjectName(QString::fromUtf8("OpcoesLayout"));
        OpcoesLayout->setSizeConstraint(QLayout::SetMinimumSize);
        SaveButton = new QPushButton(verticalLayoutWidget_6);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SaveButton->sizePolicy().hasHeightForWidth());
        SaveButton->setSizePolicy(sizePolicy3);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        SaveButton->setPalette(palette8);
        SaveButton->setFont(font1);

        OpcoesLayout->addWidget(SaveButton);

        VoltarButton = new QPushButton(verticalLayoutWidget_6);
        VoltarButton->setObjectName(QString::fromUtf8("VoltarButton"));
        sizePolicy3.setHeightForWidth(VoltarButton->sizePolicy().hasHeightForWidth());
        VoltarButton->setSizePolicy(sizePolicy3);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        VoltarButton->setPalette(palette9);
        VoltarButton->setFont(font1);

        OpcoesLayout->addWidget(VoltarButton);


        SaveLayout->addLayout(OpcoesLayout);


        verticalLayout_3->addLayout(SaveLayout);

        AdaLabel = new QLabel(centralwidget);
        AdaLabel->setObjectName(QString::fromUtf8("AdaLabel"));
        AdaLabel->setEnabled(true);
        AdaLabel->setGeometry(QRect(20, 570, 311, 91));
        AdaLabel->setMinimumSize(QSize(100, 29));
        AdaLabel->setMaximumSize(QSize(16777214, 16777215));
        AdaLabel->setFont(font1);
        AdaLabel->setPixmap(QPixmap(QString::fromUtf8(":/:/Imgs/Imgs/logo_ada.png")));
        AdaLabel->setScaledContents(true);
        AdaLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 704, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        FrequenciaLabel->setText(QCoreApplication::translate("MainWindow", "Frequ\303\252ncia", nullptr));
        AmostragemLabel->setText(QCoreApplication::translate("MainWindow", "Amostragem", nullptr));
        ArmazenamentoLabel->setText(QCoreApplication::translate("MainWindow", "Armazenamento", nullptr));
        DataeHoraLabel->setText(QCoreApplication::translate("MainWindow", "Data e Hora", nullptr));
        ManualButton->setText(QCoreApplication::translate("MainWindow", "Manual", nullptr));
        AutomaticoButton->setText(QCoreApplication::translate("MainWindow", "Autom\303\241tico", nullptr));
        Hora->setDisplayFormat(QCoreApplication::translate("MainWindow", "HH:mm:ss", nullptr));
        SaveLabel->setText(QCoreApplication::translate("MainWindow", "Salvo!", nullptr));
        SaveButton->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        VoltarButton->setText(QCoreApplication::translate("MainWindow", "Voltar", nullptr));
#if QT_CONFIG(tooltip)
        AdaLabel->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/Resources/Imagens/logo_ada.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        AdaLabel->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
