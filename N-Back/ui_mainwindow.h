/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *NBacklabel;
    QPushButton *StartButton;
    QPushButton *RulesButton;
    QPushButton *PlusButton;
    QPushButton *MinusButton;
    QLabel *Numberlabel;
    QPushButton *CloseButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(350, 250));
        MainWindow->setMaximumSize(QSize(350, 250));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        NBacklabel = new QLabel(centralwidget);
        NBacklabel->setObjectName(QString::fromUtf8("NBacklabel"));
        NBacklabel->setGeometry(QRect(80, 20, 180, 70));
        sizePolicy.setHeightForWidth(NBacklabel->sizePolicy().hasHeightForWidth());
        NBacklabel->setSizePolicy(sizePolicy);
        NBacklabel->setMinimumSize(QSize(180, 70));
        NBacklabel->setMaximumSize(QSize(180, 70));
        StartButton = new QPushButton(centralwidget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setGeometry(QRect(130, 190, 91, 31));
        RulesButton = new QPushButton(centralwidget);
        RulesButton->setObjectName(QString::fromUtf8("RulesButton"));
        RulesButton->setGeometry(QRect(280, 10, 30, 30));
        sizePolicy.setHeightForWidth(RulesButton->sizePolicy().hasHeightForWidth());
        RulesButton->setSizePolicy(sizePolicy);
        RulesButton->setMinimumSize(QSize(30, 30));
        RulesButton->setMaximumSize(QSize(30, 30));
        PlusButton = new QPushButton(centralwidget);
        PlusButton->setObjectName(QString::fromUtf8("PlusButton"));
        PlusButton->setGeometry(QRect(250, 100, 90, 90));
        sizePolicy.setHeightForWidth(PlusButton->sizePolicy().hasHeightForWidth());
        PlusButton->setSizePolicy(sizePolicy);
        PlusButton->setMinimumSize(QSize(90, 90));
        PlusButton->setMaximumSize(QSize(90, 90));
        MinusButton = new QPushButton(centralwidget);
        MinusButton->setObjectName(QString::fromUtf8("MinusButton"));
        MinusButton->setGeometry(QRect(10, 100, 90, 90));
        sizePolicy.setHeightForWidth(MinusButton->sizePolicy().hasHeightForWidth());
        MinusButton->setSizePolicy(sizePolicy);
        MinusButton->setMinimumSize(QSize(90, 90));
        MinusButton->setMaximumSize(QSize(90, 90));
        Numberlabel = new QLabel(centralwidget);
        Numberlabel->setObjectName(QString::fromUtf8("Numberlabel"));
        Numberlabel->setGeometry(QRect(130, 90, 90, 90));
        sizePolicy.setHeightForWidth(Numberlabel->sizePolicy().hasHeightForWidth());
        Numberlabel->setSizePolicy(sizePolicy);
        Numberlabel->setMinimumSize(QSize(90, 90));
        Numberlabel->setMaximumSize(QSize(90, 90));
        Numberlabel->setStyleSheet(QString::fromUtf8("color: #050505; font: 63 36pt \\\"Bahnschrift SemiBold\\\""));
        CloseButton = new QPushButton(centralwidget);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(310, 10, 30, 30));
        sizePolicy.setHeightForWidth(CloseButton->sizePolicy().hasHeightForWidth());
        CloseButton->setSizePolicy(sizePolicy);
        CloseButton->setMinimumSize(QSize(30, 30));
        CloseButton->setMaximumSize(QSize(30, 30));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        NBacklabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">N-Back!</span></p></body></html>", nullptr));
        StartButton->setText(QCoreApplication::translate("MainWindow", "Start!", nullptr));
        RulesButton->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        PlusButton->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        MinusButton->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        Numberlabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>1</p></body></html>", nullptr));
        CloseButton->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
