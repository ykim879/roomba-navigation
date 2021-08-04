/********************************************************************************
** Form generated from reading UI file 'datastream_mqtt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASTREAM_MQTT_H
#define UI_DATASTREAM_MQTT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataStreamMQTT
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout_2;
    QLineEdit *lineEditAddress;
    QLabel *label_2;
    QLineEdit *lineEditClientID;
    QLabel *label_3;
    QLineEdit *lineEditTopicFilter;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxQoS;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLabel *label_6;
    QComboBox *comboBoxProtocol;
    QWidget *widgetOptions;
    QVBoxLayout *layoutOptions;
    QLabel *label_9;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DataStreamMQTT)
    {
        if (DataStreamMQTT->objectName().isEmpty())
            DataStreamMQTT->setObjectName(QString::fromUtf8("DataStreamMQTT"));
        DataStreamMQTT->resize(379, 349);
        verticalLayout = new QVBoxLayout(DataStreamMQTT);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DataStreamMQTT);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        lineEditAddress = new QLineEdit(DataStreamMQTT);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditAddress);

        label_2 = new QLabel(DataStreamMQTT);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditClientID = new QLineEdit(DataStreamMQTT);
        lineEditClientID->setObjectName(QString::fromUtf8("lineEditClientID"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditClientID);

        label_3 = new QLabel(DataStreamMQTT);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_3);

        lineEditTopicFilter = new QLineEdit(DataStreamMQTT);
        lineEditTopicFilter->setObjectName(QString::fromUtf8("lineEditTopicFilter"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEditTopicFilter);

        label_5 = new QLabel(DataStreamMQTT);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBoxQoS = new QComboBox(DataStreamMQTT);
        comboBoxQoS->addItem(QString());
        comboBoxQoS->addItem(QString());
        comboBoxQoS->addItem(QString());
        comboBoxQoS->setObjectName(QString::fromUtf8("comboBoxQoS"));

        horizontalLayout->addWidget(comboBoxQoS);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout_2->setLayout(5, QFormLayout::FieldRole, horizontalLayout);

        label_4 = new QLabel(DataStreamMQTT);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        label_7 = new QLabel(DataStreamMQTT);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(DataStreamMQTT);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_8);

        lineEditUsername = new QLineEdit(DataStreamMQTT);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditUsername);

        lineEditPassword = new QLineEdit(DataStreamMQTT);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEditPassword);


        verticalLayout->addLayout(formLayout_2);

        label_6 = new QLabel(DataStreamMQTT);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        comboBoxProtocol = new QComboBox(DataStreamMQTT);
        comboBoxProtocol->setObjectName(QString::fromUtf8("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        widgetOptions = new QWidget(DataStreamMQTT);
        widgetOptions->setObjectName(QString::fromUtf8("widgetOptions"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        widgetOptions->setFont(font1);
        layoutOptions = new QVBoxLayout(widgetOptions);
        layoutOptions->setObjectName(QString::fromUtf8("layoutOptions"));
        layoutOptions->setContentsMargins(0, 6, 0, 6);
        label_9 = new QLabel(widgetOptions);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        layoutOptions->addWidget(label_9);


        verticalLayout->addWidget(widgetOptions);

        verticalSpacer = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DataStreamMQTT);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DataStreamMQTT);
        QObject::connect(buttonBox, SIGNAL(accepted()), DataStreamMQTT, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DataStreamMQTT, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataStreamMQTT);
    } // setupUi

    void retranslateUi(QDialog *DataStreamMQTT)
    {
        DataStreamMQTT->setWindowTitle(QApplication::translate("DataStreamMQTT", "MQTT Subscriber", nullptr));
        label->setText(QApplication::translate("DataStreamMQTT", "Connections details:", nullptr));
        label_2->setText(QApplication::translate("DataStreamMQTT", "Client ID:", nullptr));
        label_3->setText(QApplication::translate("DataStreamMQTT", "Topics prefix:", nullptr));
        label_5->setText(QApplication::translate("DataStreamMQTT", "QoS:", nullptr));
        comboBoxQoS->setItemText(0, QApplication::translate("DataStreamMQTT", "0", nullptr));
        comboBoxQoS->setItemText(1, QApplication::translate("DataStreamMQTT", "1", nullptr));
        comboBoxQoS->setItemText(2, QApplication::translate("DataStreamMQTT", "2", nullptr));

        label_4->setText(QApplication::translate("DataStreamMQTT", "Full address:", nullptr));
        label_7->setText(QApplication::translate("DataStreamMQTT", "Username:", nullptr));
        label_8->setText(QApplication::translate("DataStreamMQTT", "Password:", nullptr));
        label_6->setText(QApplication::translate("DataStreamMQTT", "Message Protocol:", nullptr));
        label_9->setText(QApplication::translate("DataStreamMQTT", "Protocol options:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataStreamMQTT: public Ui_DataStreamMQTT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASTREAM_MQTT_H
