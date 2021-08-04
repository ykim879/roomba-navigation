/********************************************************************************
** Form generated from reading UI file 'datastream_lsl.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASTREAM_LSL_H
#define UI_DATASTREAM_LSL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DataStreamLSL
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTableView *tableView;
    QLabel *label;

    void setupUi(QDialog *DataStreamLSL)
    {
        if (DataStreamLSL->objectName().isEmpty())
            DataStreamLSL->setObjectName(QString::fromUtf8("DataStreamLSL"));
        DataStreamLSL->resize(618, 316);
        gridLayout = new QGridLayout(DataStreamLSL);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(DataStreamLSL);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        tableView = new QTableView(DataStreamLSL);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(600, 200));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->horizontalHeader()->setDefaultSectionSize(200);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableView, 1, 0, 1, 1);

        label = new QLabel(DataStreamLSL);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(DataStreamLSL);
        QObject::connect(buttonBox, SIGNAL(accepted()), DataStreamLSL, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DataStreamLSL, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataStreamLSL);
    } // setupUi

    void retranslateUi(QDialog *DataStreamLSL)
    {
        DataStreamLSL->setWindowTitle(QApplication::translate("DataStreamLSL", "LSL Streams", nullptr));
        label->setText(QApplication::translate("DataStreamLSL", "Select the streams that you want to monitor:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataStreamLSL: public Ui_DataStreamLSL {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASTREAM_LSL_H
