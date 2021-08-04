/********************************************************************************
** Form generated from reading UI file 'publisher_csv_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUBLISHER_CSV_DIALOG_H
#define UI_PUBLISHER_CSV_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PublisherCSV_DIalog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditStart;
    QPushButton *buttonGetStart;
    QCheckBox *checkBoxFirst;
    QLabel *label_2;
    QLineEdit *lineEditEnd;
    QPushButton *buttonGetEnd;
    QCheckBox *checkBoxLast;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *buttonRangeClip;
    QPushButton *buttonRangeFile;
    QLabel *label_4;
    QPushButton *buttonStatisticsClip;
    QPushButton *buttonStatisticsFile;
    QLabel *labelNotification;

    void setupUi(QDialog *PublisherCSV_DIalog)
    {
        if (PublisherCSV_DIalog->objectName().isEmpty())
            PublisherCSV_DIalog->setObjectName(QString::fromUtf8("PublisherCSV_DIalog"));
        PublisherCSV_DIalog->resize(400, 300);
        PublisherCSV_DIalog->setMinimumSize(QSize(400, 300));
        verticalLayout = new QVBoxLayout(PublisherCSV_DIalog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(PublisherCSV_DIalog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 400));

        verticalLayout->addWidget(textBrowser);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(PublisherCSV_DIalog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditStart = new QLineEdit(PublisherCSV_DIalog);
        lineEditStart->setObjectName(QString::fromUtf8("lineEditStart"));
        lineEditStart->setMinimumSize(QSize(0, 24));
        lineEditStart->setMaximumSize(QSize(16777215, 24));
        lineEditStart->setReadOnly(true);

        gridLayout->addWidget(lineEditStart, 0, 1, 1, 1);

        buttonGetStart = new QPushButton(PublisherCSV_DIalog);
        buttonGetStart->setObjectName(QString::fromUtf8("buttonGetStart"));
        buttonGetStart->setMinimumSize(QSize(24, 24));
        buttonGetStart->setMaximumSize(QSize(24, 24));

        gridLayout->addWidget(buttonGetStart, 0, 2, 1, 1);

        checkBoxFirst = new QCheckBox(PublisherCSV_DIalog);
        checkBoxFirst->setObjectName(QString::fromUtf8("checkBoxFirst"));

        gridLayout->addWidget(checkBoxFirst, 0, 3, 1, 1);

        label_2 = new QLabel(PublisherCSV_DIalog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditEnd = new QLineEdit(PublisherCSV_DIalog);
        lineEditEnd->setObjectName(QString::fromUtf8("lineEditEnd"));
        lineEditEnd->setMinimumSize(QSize(0, 24));
        lineEditEnd->setMaximumSize(QSize(16777215, 24));
        lineEditEnd->setReadOnly(true);

        gridLayout->addWidget(lineEditEnd, 1, 1, 1, 1);

        buttonGetEnd = new QPushButton(PublisherCSV_DIalog);
        buttonGetEnd->setObjectName(QString::fromUtf8("buttonGetEnd"));
        buttonGetEnd->setMinimumSize(QSize(24, 24));
        buttonGetEnd->setMaximumSize(QSize(24, 24));

        gridLayout->addWidget(buttonGetEnd, 1, 2, 1, 1);

        checkBoxLast = new QCheckBox(PublisherCSV_DIalog);
        checkBoxLast->setObjectName(QString::fromUtf8("checkBoxLast"));

        gridLayout->addWidget(checkBoxLast, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(PublisherCSV_DIalog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(PublisherCSV_DIalog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        buttonRangeClip = new QPushButton(PublisherCSV_DIalog);
        buttonRangeClip->setObjectName(QString::fromUtf8("buttonRangeClip"));
        buttonRangeClip->setMinimumSize(QSize(55, 28));
        buttonRangeClip->setMaximumSize(QSize(100, 28));

        gridLayout_2->addWidget(buttonRangeClip, 0, 1, 1, 1);

        buttonRangeFile = new QPushButton(PublisherCSV_DIalog);
        buttonRangeFile->setObjectName(QString::fromUtf8("buttonRangeFile"));
        buttonRangeFile->setMinimumSize(QSize(55, 28));
        buttonRangeFile->setMaximumSize(QSize(55, 28));

        gridLayout_2->addWidget(buttonRangeFile, 0, 2, 1, 1);

        label_4 = new QLabel(PublisherCSV_DIalog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        buttonStatisticsClip = new QPushButton(PublisherCSV_DIalog);
        buttonStatisticsClip->setObjectName(QString::fromUtf8("buttonStatisticsClip"));
        buttonStatisticsClip->setMinimumSize(QSize(100, 28));
        buttonStatisticsClip->setMaximumSize(QSize(55, 28));

        gridLayout_2->addWidget(buttonStatisticsClip, 1, 1, 1, 1);

        buttonStatisticsFile = new QPushButton(PublisherCSV_DIalog);
        buttonStatisticsFile->setObjectName(QString::fromUtf8("buttonStatisticsFile"));
        buttonStatisticsFile->setMinimumSize(QSize(55, 28));
        buttonStatisticsFile->setMaximumSize(QSize(55, 28));

        gridLayout_2->addWidget(buttonStatisticsFile, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        labelNotification = new QLabel(PublisherCSV_DIalog);
        labelNotification->setObjectName(QString::fromUtf8("labelNotification"));
        labelNotification->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelNotification);

        verticalLayout->setStretch(0, 1);

        retranslateUi(PublisherCSV_DIalog);

        QMetaObject::connectSlotsByName(PublisherCSV_DIalog);
    } // setupUi

    void retranslateUi(QDialog *PublisherCSV_DIalog)
    {
        PublisherCSV_DIalog->setWindowTitle(QApplication::translate("PublisherCSV_DIalog", "CSV Exporter", nullptr));
        textBrowser->setHtml(QApplication::translate("PublisherCSV_DIalog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Use the vertical time tracker to select a time range.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Within this timerange you can either compute the statistics (min, max, average values) or export all the data points in a CSV file</p></body></html>", nullptr));
        label->setText(QApplication::translate("PublisherCSV_DIalog", "Start time:", nullptr));
        buttonGetStart->setText(QApplication::translate("PublisherCSV_DIalog", "+", nullptr));
        checkBoxFirst->setText(QApplication::translate("PublisherCSV_DIalog", "first", nullptr));
        label_2->setText(QApplication::translate("PublisherCSV_DIalog", "End time:", nullptr));
        buttonGetEnd->setText(QApplication::translate("PublisherCSV_DIalog", "+", nullptr));
        checkBoxLast->setText(QApplication::translate("PublisherCSV_DIalog", "last", nullptr));
        label_3->setText(QApplication::translate("PublisherCSV_DIalog", "Export Data Range:", nullptr));
        buttonRangeClip->setText(QApplication::translate("PublisherCSV_DIalog", "Clipboard", nullptr));
        buttonRangeFile->setText(QApplication::translate("PublisherCSV_DIalog", "File", nullptr));
        label_4->setText(QApplication::translate("PublisherCSV_DIalog", "Export Statistics:", nullptr));
        buttonStatisticsClip->setText(QApplication::translate("PublisherCSV_DIalog", "Clipboard", nullptr));
        buttonStatisticsFile->setText(QApplication::translate("PublisherCSV_DIalog", "File", nullptr));
        labelNotification->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PublisherCSV_DIalog: public Ui_PublisherCSV_DIalog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUBLISHER_CSV_DIALOG_H
