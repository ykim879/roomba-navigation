/********************************************************************************
** Form generated from reading UI file 'outlier_removal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTLIER_REMOVAL_H
#define UI_OUTLIER_REMOVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutlierRemovalFilter
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxFactor;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OutlierRemovalFilter)
    {
        if (OutlierRemovalFilter->objectName().isEmpty())
            OutlierRemovalFilter->setObjectName(QString::fromUtf8("OutlierRemovalFilter"));
        OutlierRemovalFilter->resize(400, 300);
        verticalLayout = new QVBoxLayout(OutlierRemovalFilter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(OutlierRemovalFilter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(OutlierRemovalFilter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBoxFactor = new QDoubleSpinBox(OutlierRemovalFilter);
        spinBoxFactor->setObjectName(QString::fromUtf8("spinBoxFactor"));
        spinBoxFactor->setMaximumSize(QSize(120, 16777215));
        spinBoxFactor->setDecimals(1);
        spinBoxFactor->setMinimum(10.000000000000000);
        spinBoxFactor->setMaximum(100000.000000000000000);
        spinBoxFactor->setValue(100.000000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxFactor);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(OutlierRemovalFilter);

        QMetaObject::connectSlotsByName(OutlierRemovalFilter);
    } // setupUi

    void retranslateUi(QWidget *OutlierRemovalFilter)
    {
        OutlierRemovalFilter->setWindowTitle(QApplication::translate("OutlierRemovalFilter", "Form", nullptr));
        label->setText(QApplication::translate("OutlierRemovalFilter", "Remove outliers:", nullptr));
        label_2->setText(QApplication::translate("OutlierRemovalFilter", "Max Jump", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutlierRemovalFilter: public Ui_OutlierRemovalFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTLIER_REMOVAL_H
