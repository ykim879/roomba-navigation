/********************************************************************************
** Form generated from reading UI file 'integral_transform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRAL_TRANSFORM_H
#define UI_INTEGRAL_TRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntegralTransform
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QFormLayout *formLayout;
    QRadioButton *radioActual;
    QLabel *label_2;
    QRadioButton *radioCustom;
    QLineEdit *lineEditCustom;
    QPushButton *buttonCompute;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *IntegralTransform)
    {
        if (IntegralTransform->objectName().isEmpty())
            IntegralTransform->setObjectName(QString::fromUtf8("IntegralTransform"));
        IntegralTransform->resize(361, 240);
        IntegralTransform->setMinimumSize(QSize(200, 0));
        verticalLayout = new QVBoxLayout(IntegralTransform);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(IntegralTransform);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        frame = new QFrame(IntegralTransform);
        frame->setObjectName(QString::fromUtf8("frame"));
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        radioActual = new QRadioButton(frame);
        radioActual->setObjectName(QString::fromUtf8("radioActual"));
        radioActual->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, radioActual);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_2);

        radioCustom = new QRadioButton(frame);
        radioCustom->setObjectName(QString::fromUtf8("radioCustom"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioCustom);

        lineEditCustom = new QLineEdit(frame);
        lineEditCustom->setObjectName(QString::fromUtf8("lineEditCustom"));
        lineEditCustom->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditCustom);

        buttonCompute = new QPushButton(frame);
        buttonCompute->setObjectName(QString::fromUtf8("buttonCompute"));
        buttonCompute->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonCompute);


        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(IntegralTransform);

        QMetaObject::connectSlotsByName(IntegralTransform);
    } // setupUi

    void retranslateUi(QWidget *IntegralTransform)
    {
        IntegralTransform->setWindowTitle(QApplication::translate("IntegralTransform", "Form", nullptr));
        label->setText(QApplication::translate("IntegralTransform", "Time Difference (dT):", nullptr));
#ifndef QT_NO_TOOLTIP
        radioActual->setToolTip(QApplication::translate("IntegralTransform", "<html><head/><body><p>use the actual difference in time between two consecutive points.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioActual->setText(QApplication::translate("IntegralTransform", "Actual ", nullptr));
        label_2->setText(QApplication::translate("IntegralTransform", "(It might be noisy!)", nullptr));
#ifndef QT_NO_TOOLTIP
        radioCustom->setToolTip(QApplication::translate("IntegralTransform", "<html><head/><body><p>Use a fixed, custom value of dT.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioCustom->setText(QApplication::translate("IntegralTransform", "Custom:", nullptr));
        lineEditCustom->setText(QApplication::translate("IntegralTransform", "1.0", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonCompute->setToolTip(QApplication::translate("IntegralTransform", "<html><head/><body><p>Calculate the corret delta time.</p><p>It tries to filter out outliers.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonCompute->setText(QApplication::translate("IntegralTransform", "Guess dT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntegralTransform: public Ui_IntegralTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRAL_TRANSFORM_H
