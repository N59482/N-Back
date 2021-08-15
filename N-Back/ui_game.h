/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label2;
    QLabel *label3;
    QLabel *label5;
    QLabel *label6;
    QLabel *label4;
    QLabel *label1;
    QLabel *label7;
    QLabel *label8;
    QLabel *label9;
    QPushButton *MatchButton;
    QLabel *TextNbackLabel;
    QLabel *ValueNbackLabel;
    QLabel *TextFailLabel;
    QLabel *ValueFailLabel;
    QPushButton *closeGameButton;
    QLabel *ValueWinLabel;
    QLabel *TextWinLabel;
    QPushButton *pauseGameButton;
    QPushButton *menuButton;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QString::fromUtf8("Game"));
        Game->resize(550, 550);
        Game->setMinimumSize(QSize(550, 550));
        Game->setMaximumSize(QSize(550, 550));
        gridLayoutWidget = new QWidget(Game);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(80, 90, 377, 377));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label2 = new QLabel(gridLayoutWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label2->sizePolicy().hasHeightForWidth());
        label2->setSizePolicy(sizePolicy);
        label2->setMinimumSize(QSize(120, 120));
        label2->setMaximumSize(QSize(120, 120));
        label2->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label2, 0, 1, 1, 1);

        label3 = new QLabel(gridLayoutWidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        sizePolicy.setHeightForWidth(label3->sizePolicy().hasHeightForWidth());
        label3->setSizePolicy(sizePolicy);
        label3->setMinimumSize(QSize(120, 120));
        label3->setMaximumSize(QSize(120, 120));
        label3->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label3, 0, 2, 1, 1);

        label5 = new QLabel(gridLayoutWidget);
        label5->setObjectName(QString::fromUtf8("label5"));
        sizePolicy.setHeightForWidth(label5->sizePolicy().hasHeightForWidth());
        label5->setSizePolicy(sizePolicy);
        label5->setMinimumSize(QSize(120, 120));
        label5->setMaximumSize(QSize(120, 120));
        label5->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label5, 1, 1, 1, 1);

        label6 = new QLabel(gridLayoutWidget);
        label6->setObjectName(QString::fromUtf8("label6"));
        sizePolicy.setHeightForWidth(label6->sizePolicy().hasHeightForWidth());
        label6->setSizePolicy(sizePolicy);
        label6->setMinimumSize(QSize(120, 120));
        label6->setMaximumSize(QSize(120, 120));
        label6->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label6, 1, 2, 1, 1);

        label4 = new QLabel(gridLayoutWidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        sizePolicy.setHeightForWidth(label4->sizePolicy().hasHeightForWidth());
        label4->setSizePolicy(sizePolicy);
        label4->setMinimumSize(QSize(120, 120));
        label4->setMaximumSize(QSize(120, 120));
        label4->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label4, 1, 0, 1, 1);

        label1 = new QLabel(gridLayoutWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMinimumSize(QSize(121, 121));
        label1->setMaximumSize(QSize(121, 121));
        label1->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        label7 = new QLabel(gridLayoutWidget);
        label7->setObjectName(QString::fromUtf8("label7"));
        sizePolicy.setHeightForWidth(label7->sizePolicy().hasHeightForWidth());
        label7->setSizePolicy(sizePolicy);
        label7->setMinimumSize(QSize(120, 120));
        label7->setMaximumSize(QSize(120, 120));
        label7->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label7, 2, 0, 1, 1);

        label8 = new QLabel(gridLayoutWidget);
        label8->setObjectName(QString::fromUtf8("label8"));
        sizePolicy.setHeightForWidth(label8->sizePolicy().hasHeightForWidth());
        label8->setSizePolicy(sizePolicy);
        label8->setMinimumSize(QSize(120, 120));
        label8->setMaximumSize(QSize(120, 120));
        label8->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label8, 2, 1, 1, 1);

        label9 = new QLabel(gridLayoutWidget);
        label9->setObjectName(QString::fromUtf8("label9"));
        sizePolicy.setHeightForWidth(label9->sizePolicy().hasHeightForWidth());
        label9->setSizePolicy(sizePolicy);
        label9->setMinimumSize(QSize(120, 120));
        label9->setMaximumSize(QSize(120, 120));
        label9->setPixmap(QPixmap(QString::fromUtf8(":/img/Res/gray.jpg")));

        gridLayout->addWidget(label9, 2, 2, 1, 1);

        MatchButton = new QPushButton(Game);
        MatchButton->setObjectName(QString::fromUtf8("MatchButton"));
        MatchButton->setGeometry(QRect(200, 490, 130, 40));
        sizePolicy.setHeightForWidth(MatchButton->sizePolicy().hasHeightForWidth());
        MatchButton->setSizePolicy(sizePolicy);
        MatchButton->setMinimumSize(QSize(130, 40));
        MatchButton->setMaximumSize(QSize(130, 40));
        TextNbackLabel = new QLabel(Game);
        TextNbackLabel->setObjectName(QString::fromUtf8("TextNbackLabel"));
        TextNbackLabel->setGeometry(QRect(80, 20, 90, 50));
        sizePolicy.setHeightForWidth(TextNbackLabel->sizePolicy().hasHeightForWidth());
        TextNbackLabel->setSizePolicy(sizePolicy);
        TextNbackLabel->setMinimumSize(QSize(90, 50));
        TextNbackLabel->setMaximumSize(QSize(90, 50));
        ValueNbackLabel = new QLabel(Game);
        ValueNbackLabel->setObjectName(QString::fromUtf8("ValueNbackLabel"));
        ValueNbackLabel->setGeometry(QRect(170, 20, 50, 50));
        ValueNbackLabel->setMinimumSize(QSize(50, 50));
        ValueNbackLabel->setMaximumSize(QSize(50, 50));
        TextFailLabel = new QLabel(Game);
        TextFailLabel->setObjectName(QString::fromUtf8("TextFailLabel"));
        TextFailLabel->setGeometry(QRect(210, 20, 90, 50));
        TextFailLabel->setMinimumSize(QSize(90, 50));
        TextFailLabel->setMaximumSize(QSize(90, 50));
        ValueFailLabel = new QLabel(Game);
        ValueFailLabel->setObjectName(QString::fromUtf8("ValueFailLabel"));
        ValueFailLabel->setGeometry(QRect(280, 20, 50, 50));
        ValueFailLabel->setMinimumSize(QSize(50, 50));
        ValueFailLabel->setMaximumSize(QSize(50, 50));
        closeGameButton = new QPushButton(Game);
        closeGameButton->setObjectName(QString::fromUtf8("closeGameButton"));
        closeGameButton->setGeometry(QRect(510, 10, 30, 30));
        sizePolicy.setHeightForWidth(closeGameButton->sizePolicy().hasHeightForWidth());
        closeGameButton->setSizePolicy(sizePolicy);
        closeGameButton->setMinimumSize(QSize(30, 30));
        closeGameButton->setMaximumSize(QSize(30, 30));
        ValueWinLabel = new QLabel(Game);
        ValueWinLabel->setObjectName(QString::fromUtf8("ValueWinLabel"));
        ValueWinLabel->setGeometry(QRect(400, 20, 50, 50));
        ValueWinLabel->setMinimumSize(QSize(50, 50));
        ValueWinLabel->setMaximumSize(QSize(50, 50));
        TextWinLabel = new QLabel(Game);
        TextWinLabel->setObjectName(QString::fromUtf8("TextWinLabel"));
        TextWinLabel->setGeometry(QRect(330, 20, 90, 50));
        TextWinLabel->setMinimumSize(QSize(90, 50));
        TextWinLabel->setMaximumSize(QSize(90, 50));
        pauseGameButton = new QPushButton(Game);
        pauseGameButton->setObjectName(QString::fromUtf8("pauseGameButton"));
        pauseGameButton->setGeometry(QRect(10, 10, 30, 30));
        sizePolicy.setHeightForWidth(pauseGameButton->sizePolicy().hasHeightForWidth());
        pauseGameButton->setSizePolicy(sizePolicy);
        pauseGameButton->setMinimumSize(QSize(30, 30));
        pauseGameButton->setMaximumSize(QSize(30, 30));
        menuButton = new QPushButton(Game);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setGeometry(QRect(200, 490, 130, 40));
        sizePolicy.setHeightForWidth(menuButton->sizePolicy().hasHeightForWidth());
        menuButton->setSizePolicy(sizePolicy);
        menuButton->setMinimumSize(QSize(130, 40));
        menuButton->setMaximumSize(QSize(130, 40));
        TextWinLabel->raise();
        gridLayoutWidget->raise();
        MatchButton->raise();
        TextNbackLabel->raise();
        ValueNbackLabel->raise();
        TextFailLabel->raise();
        ValueFailLabel->raise();
        closeGameButton->raise();
        pauseGameButton->raise();
        ValueWinLabel->raise();
        menuButton->raise();

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Form", nullptr));
        label2->setText(QString());
        label3->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
        label4->setText(QString());
        label1->setText(QString());
        label7->setText(QString());
        label8->setText(QString());
        label9->setText(QString());
        MatchButton->setText(QCoreApplication::translate("Game", "Match!", nullptr));
        TextNbackLabel->setText(QCoreApplication::translate("Game", "<html><head/><body><p><span style=\" font-size:16pt;\">N-Back:</span></p></body></html>", nullptr));
        ValueNbackLabel->setText(QCoreApplication::translate("Game", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">A</span></p></body></html>", nullptr));
        TextFailLabel->setText(QCoreApplication::translate("Game", "<html><head/><body><p><span style=\" font-size:16pt;\">Fail:</span></p></body></html>", nullptr));
        ValueFailLabel->setText(QCoreApplication::translate("Game", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">S</span></p></body></html>", nullptr));
        closeGameButton->setText(QCoreApplication::translate("Game", "X", nullptr));
        ValueWinLabel->setText(QCoreApplication::translate("Game", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">E</span></p></body></html>", nullptr));
        TextWinLabel->setText(QCoreApplication::translate("Game", "<html><head/><body><p><span style=\" font-size:16pt;\">Wins:</span></p></body></html>", nullptr));
        pauseGameButton->setText(QCoreApplication::translate("Game", "||", nullptr));
        menuButton->setText(QCoreApplication::translate("Game", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
