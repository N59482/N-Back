/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rules
{
public:
    QWidget *centralwidget;
    QTextBrowser *Rulestext;
    QPushButton *CloseButton;

    void setupUi(QMainWindow *Rules)
    {
        if (Rules->objectName().isEmpty())
            Rules->setObjectName(QString::fromUtf8("Rules"));
        Rules->resize(250, 425);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Rules->sizePolicy().hasHeightForWidth());
        Rules->setSizePolicy(sizePolicy);
        Rules->setMinimumSize(QSize(250, 425));
        Rules->setMaximumSize(QSize(250, 425));
        centralwidget = new QWidget(Rules);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Rulestext = new QTextBrowser(centralwidget);
        Rulestext->setObjectName(QString::fromUtf8("Rulestext"));
        Rulestext->setGeometry(QRect(0, 30, 248, 398));
        sizePolicy.setHeightForWidth(Rulestext->sizePolicy().hasHeightForWidth());
        Rulestext->setSizePolicy(sizePolicy);
        Rulestext->setMinimumSize(QSize(248, 398));
        Rulestext->setMaximumSize(QSize(248, 398));
        CloseButton = new QPushButton(centralwidget);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(220, 0, 25, 25));
        CloseButton->setMinimumSize(QSize(25, 25));
        CloseButton->setMaximumSize(QSize(25, 25));
        Rules->setCentralWidget(centralwidget);

        retranslateUi(Rules);

        QMetaObject::connectSlotsByName(Rules);
    } // setupUi

    void retranslateUi(QMainWindow *Rules)
    {
        Rules->setWindowTitle(QCoreApplication::translate("Rules", "MainWindow", nullptr));
        Rulestext->setHtml(QCoreApplication::translate("Rules", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\225\321\201\320\273\320\270 \320\262\321\213 \320\275\320\270\320\272\320\276\320\263\320\264\320\260 \321\200\320\260\320\275\321\214\321\210\320\265 \320\275\320\265 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\273\320\270 \321\215\321\202\321\203 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203, \320\264\320\273\321\217 \320\275\320\260\321\207\320\260\320\273\320\260 \320\262\320\276\321\201\320\277\320\276\320\273\321"
                        "\214\320\267\321\203\320\271\321\202\320\265\321\201\321\214 \320\264\320\260\320\275\320\275\321\213\320\274 \320\272\321\200\320\260\321\202\320\272\320\270\320\274 \321\200\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276\320\274. \320\241\321\203\321\202\321\214 \320\274\320\265\321\202\320\276\320\264\320\260 \320\267\320\260\320\272\320\273\321\216\321\207\320\260\320\265\321\202\321\201\321\217 \320\262 \320\275\320\265\320\277\321\200\320\265\321\200\321\213\320\262\320\275\320\276\320\274 \320\267\320\260\320\277\320\276\320\274\320\270\320\275\320\260\320\275\320\270\320\270 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270. \320\235\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\276\321\202\320\274\320\265\321\207\320\260\321\202\321\214 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\265 \321\202\320\265"
                        "\320\272\321\203\321\211\320\265\320\263\320\276 \321\201\320\270\320\274\320\262\320\276\320\273\320\260 \321\201\320\270\320\274\320\262\320\276\320\273\321\203, \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\275\320\275\320\276\320\274\321\203 n-\321\210\320\260\320\263\320\276\320\262 \320\275\320\260\320\267\320\260\320\264. \320\236\321\202\321\201\321\216\320\264\320\260 \320\270 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \342\200\224 n-back. \320\224\320\273\321\217 \320\277\321\200\320\270\320\274\320\265\321\200\320\260 \321\200\320\260\321\201\321\201\320\274\320\276\321\202\321\200\320\270\320\274 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\276\321\207\320\265\321\200\321\221\320\264\320\275\320\276 \320\262\321\213\320\262\320\276\320\264\320\270\320\274\321\213\321\205 \321\206\320\270\321\204\321\200: </span>"
                        "</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">1 4 </span><span style=\" font-size:10pt; font-weight:600; color:#000000;\">6</span><span style=\" font-size:10pt; font-weight:600;\"> 4 1 6 3 </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\224\320\273\321\217 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217 2-back, \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \321\203\320\272\320\260\320\267\321\213\320\262\320\260\321\202\321\214 \320\275\320\260 \321\201\320\276\320\262\320\277\320\260\320\264\320\265\320\275\320\270\321\217 \321\202\320\265\320\272\321\203\321"
                        "\211\320\265\320\263\320\276 \321\201\320\270\320\274\320\262\320\276\320\273\320\260 \321\201 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\274, \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274 2 \320\277\320\276\320\267\320\270\321\206\320\270\320\270 \320\275\320\260\320\267\320\260\320\264 :</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">1 </span><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">4</span><span style=\" font-size:10pt; font-weight:600;\"> 6 </span><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">4</span><span style=\" font-size:10pt; font-weight:600;\"> 1 6 3</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\243\320"
                        "\272\320\260\320\267\320\260\321\202\321\214 \320\275\320\260 \321\201\320\276\320\262\320\277\320\260\320\264\320\265\320\275\320\270\320\265, \320\262 \320\264\320\260\320\275\320\275\320\276\320\274 \320\277\321\200\320\270\320\274\320\265\321\200\320\265, \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262 \320\274\320\276\320\274\320\265\320\275\321\202 \320\277\320\276\321\217\320\262\320\273\320\265\320\275\320\270\321\217 \320\262\321\202\320\276\321\200\320\276\320\271 \321\206\320\270\321\204\321\200\321\213 4. \320\224\320\273\321\217 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217 4-back, \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\265\320\275\320\275\320\276: </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"
                        "\"><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">1</span><span style=\" font-size:10pt; font-weight:600;\"> 4 6 4 </span><span style=\" font-size:10pt; font-weight:600; color:#ff0000;\">1</span><span style=\" font-size:10pt; font-weight:600;\"> 6 3 </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \320\275\320\276\320\262\320\265\320\271\321\210\320\265\320\263\320\276 \320\270\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217, \320\276\320\277\321\203\320\261\320\273\320\270\320\272\320\276\320\262\320\260\320\275\320\275\320\276\320\263\320\276 \320\262 PNAS, \320\270\320\267\320\262\320\265\321\201\321\202\320\275\320\265\320\271\321\210\320\265\320\274 \320\275\320\260\321\203\321\207\320\275\320\276\320\274 \320\266\321"
                        "\203\321\200\320\275\320\260\320\273\320\265, \320\277\320\276\320\272\320\260\320\267\321\213\320\262\320\260\321\216\321\202, \321\207\321\202\320\276 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\265 \320\274\320\265\320\275\321\202\320\260\320\273\321\214\320\275\321\213\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217 N-Back, \320\274\320\276\320\263\321\203\321\202 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\203\320\273\321\203\321\207\321\210\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203 \320\277\320\260\320\274\321\217\321\202\320\270 (\320\232\320\222\320\237, \320\272\321\200\320\260\321\202\320\272\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271 \320\277\320\260\320\274\321\217\321\202\320\270) \320\270 \320\277\320\276\320\264\320\262\320\270\320\266\320\275\320\276\320\263\320\276 \320\270\320\275"
                        "\321\202\320\265\320\273\320\273\320\265\320\272\321\202\320\260. \320\237\320\276\320\264\320\262\320\270\320\266\320\275\321\213\320\271 \320\270\320\275\321\202\320\265\320\273\320\273\320\265\320\272\321\202 (fluid intelligence) \342\200\224 \321\215\321\202\320\276 \321\201\320\277\320\276\321\201\320\276\320\261\320\275\320\276\321\201\321\202\321\214 \320\262\320\276\321\201\320\277\321\200\320\270\320\275\320\270\320\274\320\260\321\202\321\214 \320\270 \320\267\320\260\320\277\320\276\320\274\320\270\320\275\320\260\321\202\321\214 \320\275\320\276\320\262\320\276\320\265, \321\200\320\265\321\210\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\265 \320\277\321\200\320\276\320\261\320\273\320\265\320\274\321\213, \321\201 \320\272\320\276\321\202\320\276\321\200\321\213\320\274\320\270 \321\207\320\265\320\273\320\276\320\262\320\265\320\272 \321\200\320\260\320\275\321\214\321\210\320\265 \320\275\320\265 \321\201\321\202\320\260\320\273\320\272\320\270\320\262\320\260\320\273\321\201\321"
                        "\217. \320\222 \320\276\321\202\320\273\320\270\321\207\320\270\320\265 \320\276\321\202 \321\202\320\260\320\272 \320\275\320\260\320\267\321\213\320\262\320\260\320\265\320\274\320\276\320\263\320\276 \302\253\320\275\320\260\320\272\320\276\320\277\320\273\320\265\320\275\320\275\320\276\320\263\320\276\302\273 \320\270\320\275\321\202\320\265\320\273\320\273\320\265\320\272\321\202\320\260, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\276\321\201\320\275\320\276\320\262\320\260\320\275 \320\275\320\260 \320\277\321\200\320\270\320\276\320\261\321\200\320\265\321\202\321\221\320\275\320\275\321\213\321\205 \320\267\320\275\320\260\320\275\320\270\321\217\321\205 (\320\274\320\260\321\202\320\265\320\274\320\260\321\202\320\270\320\272\320\260, \321\201\320\273\320\276\320\262\320\260\321\200\320\275\321\213\320\271 \320\267\320\260\320\277\320\260\321\201 \320\270 \321\202.\320\264.), \320\277\320\276\320\264\320\262\320\270\320\266\320\275\321\213\320\271 \320\270\320\275\321\202\320\265\320"
                        "\273\320\273\320\265\320\272\321\202 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\321\221\320\275 \320\276\321\202 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">.</span></p></body></html>", nullptr));
        CloseButton->setText(QCoreApplication::translate("Rules", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Rules: public Ui_Rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H
