/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser_2;
    QLabel *label_version;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(500, 400));
        AboutDialog->setMaximumSize(QSize(500, 400));
        AboutDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser_2 = new QTextBrowser(AboutDialog);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setMinimumSize(QSize(0, 50));
        textBrowser_2->setMaximumSize(QSize(16777215, 60));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255,0);\n"
"border-color: rgb(255, 255, 255,0);"));
        textBrowser_2->setFrameShape(QFrame::NoFrame);
        textBrowser_2->setFrameShadow(QFrame::Plain);
        textBrowser_2->setLineWidth(0);

        verticalLayout->addWidget(textBrowser_2);

        label_version = new QLabel(AboutDialog);
        label_version->setObjectName(QString::fromUtf8("label_version"));
        label_version->setMinimumSize(QSize(0, 22));
        QFont font;
        font.setPointSize(11);
        label_version->setFont(font);
        label_version->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255,0);\n"
"border-color: rgb(255, 255, 255,0);"));
        label_version->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_version);

        textBrowser = new QTextBrowser(AboutDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255,0);\n"
"border-color: rgb(255, 255, 255,0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setLineWidth(0);
        textBrowser->setReadOnly(true);
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About PlotJuggler", nullptr));
        textBrowser_2->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu-light'; font-size:26pt; color:#ce0e73;\">Plot</span><span style=\" font-family:'Ubuntu-light'; font-size:26pt; color:#1b72cf;\">Juggler</span></p></body></html>", nullptr));
        label_version->setText(QApplication::translate("AboutDialog", "version:", nullptr));
        textBrowser->setHtml(QApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:10pt;\">PlotJuggler was built with love for you by </span><span style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:600;\">Davide Faconti.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.plotjuggler.io\"><span style=\" font-size:12pt; text-decoration: underline; color:#0000ff;\">www.plotjuggler.io</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:10pt;\">The official GitHub repository where you can download the source code and report issues is: </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/facontidavide/PlotJuggler\"><span style=\" font-family:'Sans Serif'; font-size:10pt; text-decoration: underline; color:#0000ff;\">https://github.com/facontidavide/PlotJuggler</span></a></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:10pt;\">Don't hesitate to contact me to give feedback or share suggestions; if you like PlotJuggler, let me know!</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-in"
                        "dent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:600; color:#f704f8;\">davide.faconti@gmail.com</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
