/********************************************************************************
** Form generated from reading UI file 'statistic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTIC_H
#define UI_STATISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Statistic
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *TextResultLabel;
    QGridLayout *gridLayout;
    QLabel *TextResultFailLebel;
    QLabel *TextResultWinLebel;
    QLabel *ValueResultWinLebel;
    QLabel *ValueResultFailLebel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *MenuButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *RestartButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Statistic)
    {
        if (Statistic->objectName().isEmpty())
            Statistic->setObjectName(QString::fromUtf8("Statistic"));
        Statistic->resize(469, 232);
        centralwidget = new QWidget(Statistic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        TextResultLabel = new QLabel(centralwidget);
        TextResultLabel->setObjectName(QString::fromUtf8("TextResultLabel"));

        verticalLayout->addWidget(TextResultLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextResultFailLebel = new QLabel(centralwidget);
        TextResultFailLebel->setObjectName(QString::fromUtf8("TextResultFailLebel"));

        gridLayout->addWidget(TextResultFailLebel, 0, 0, 1, 1);

        TextResultWinLebel = new QLabel(centralwidget);
        TextResultWinLebel->setObjectName(QString::fromUtf8("TextResultWinLebel"));

        gridLayout->addWidget(TextResultWinLebel, 1, 0, 1, 1);

        ValueResultWinLebel = new QLabel(centralwidget);
        ValueResultWinLebel->setObjectName(QString::fromUtf8("ValueResultWinLebel"));

        gridLayout->addWidget(ValueResultWinLebel, 0, 1, 1, 1);

        ValueResultFailLebel = new QLabel(centralwidget);
        ValueResultFailLebel->setObjectName(QString::fromUtf8("ValueResultFailLebel"));

        gridLayout->addWidget(ValueResultFailLebel, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MenuButton = new QPushButton(centralwidget);
        MenuButton->setObjectName(QString::fromUtf8("MenuButton"));

        horizontalLayout->addWidget(MenuButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        RestartButton = new QPushButton(centralwidget);
        RestartButton->setObjectName(QString::fromUtf8("RestartButton"));

        horizontalLayout->addWidget(RestartButton);


        verticalLayout->addLayout(horizontalLayout);

        Statistic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Statistic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 469, 26));
        Statistic->setMenuBar(menubar);

        retranslateUi(Statistic);

        QMetaObject::connectSlotsByName(Statistic);
    } // setupUi

    void retranslateUi(QMainWindow *Statistic)
    {
        Statistic->setWindowTitle(QCoreApplication::translate("Statistic", "MainWindow", nullptr));
        TextResultLabel->setText(QCoreApplication::translate("Statistic", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213:", nullptr));
        TextResultFailLebel->setText(QCoreApplication::translate("Statistic", "\320\237\320\276\320\261\320\265\320\264", nullptr));
        TextResultWinLebel->setText(QCoreApplication::translate("Statistic", "\320\236\321\210\320\270\320\261\320\276\320\272", nullptr));
        ValueResultWinLebel->setText(QCoreApplication::translate("Statistic", "0", nullptr));
        ValueResultFailLebel->setText(QCoreApplication::translate("Statistic", "0", nullptr));
        MenuButton->setText(QCoreApplication::translate("Statistic", "\320\222 \320\274\320\265\320\275\321\216", nullptr));
        RestartButton->setText(QCoreApplication::translate("Statistic", "\320\240\320\265\321\201\321\202\320\260\321\200\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statistic: public Ui_Statistic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTIC_H
