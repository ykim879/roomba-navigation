/********************************************************************************
** Form generated from reading UI file 'selectlistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTLISTDIALOG_H
#define UI_SELECTLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectXAxisDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listFieldsWidget;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *pushButtonSelectAll;

    void setupUi(QDialog *SelectXAxisDialog)
    {
        if (SelectXAxisDialog->objectName().isEmpty())
            SelectXAxisDialog->setObjectName(QString::fromUtf8("SelectXAxisDialog"));
        SelectXAxisDialog->resize(447, 300);
        verticalLayout = new QVBoxLayout(SelectXAxisDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listFieldsWidget = new QListWidget(SelectXAxisDialog);
        listFieldsWidget->setObjectName(QString::fromUtf8("listFieldsWidget"));

        verticalLayout->addWidget(listFieldsWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        buttonBox = new QDialogButtonBox(SelectXAxisDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        pushButtonSelectAll = new QPushButton(SelectXAxisDialog);
        pushButtonSelectAll->setObjectName(QString::fromUtf8("pushButtonSelectAll"));

        horizontalLayout->addWidget(pushButtonSelectAll);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SelectXAxisDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SelectXAxisDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SelectXAxisDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectXAxisDialog)
    {
        SelectXAxisDialog->setWindowTitle(QApplication::translate("SelectXAxisDialog", "Dialog", nullptr));
        pushButtonSelectAll->setText(QApplication::translate("SelectXAxisDialog", "Select ALL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectXAxisDialog: public Ui_SelectXAxisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTLISTDIALOG_H
