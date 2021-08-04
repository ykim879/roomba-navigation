/********************************************************************************
** Form generated from reading UI file 'datastream_zmq.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASTREAM_ZMQ_H
#define UI_DATASTREAM_ZMQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataStreamZMQ
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEditPort;
    QLabel *label_6;
    QComboBox *comboBoxProtocol;
    QWidget *boxOptions;
    QVBoxLayout *layoutOptions;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DataStreamZMQ)
    {
        if (DataStreamZMQ->objectName().isEmpty())
            DataStreamZMQ->setObjectName(QString::fromUtf8("DataStreamZMQ"));
        DataStreamZMQ->resize(400, 300);
        verticalLayout = new QVBoxLayout(DataStreamZMQ);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DataStreamZMQ);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(DataStreamZMQ);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(DataStreamZMQ);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(DataStreamZMQ);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        comboBox = new QComboBox(DataStreamZMQ);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 0, 1, 1);

        lineEditAddress = new QLineEdit(DataStreamZMQ);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        gridLayout->addWidget(lineEditAddress, 1, 1, 1, 1);

        lineEditPort = new QLineEdit(DataStreamZMQ);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 1, 2, 1, 1);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout);

        label_6 = new QLabel(DataStreamZMQ);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout->addWidget(label_6);

        comboBoxProtocol = new QComboBox(DataStreamZMQ);
        comboBoxProtocol->setObjectName(QString::fromUtf8("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        boxOptions = new QWidget(DataStreamZMQ);
        boxOptions->setObjectName(QString::fromUtf8("boxOptions"));
        layoutOptions = new QVBoxLayout(boxOptions);
        layoutOptions->setObjectName(QString::fromUtf8("layoutOptions"));
        layoutOptions->setContentsMargins(0, 6, 0, 6);
        label_5 = new QLabel(boxOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);

        layoutOptions->addWidget(label_5);


        verticalLayout->addWidget(boxOptions);

        verticalSpacer = new QSpacerItem(20, 76, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DataStreamZMQ);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DataStreamZMQ);
        QObject::connect(buttonBox, SIGNAL(accepted()), DataStreamZMQ, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DataStreamZMQ, SLOT(reject()));

        QMetaObject::connectSlotsByName(DataStreamZMQ);
    } // setupUi

    void retranslateUi(QDialog *DataStreamZMQ)
    {
        DataStreamZMQ->setWindowTitle(QApplication::translate("DataStreamZMQ", "ZMQ Subscriber", nullptr));
        label->setText(QApplication::translate("DataStreamZMQ", "Connection (ZMQ_SUB)", nullptr));
        label_2->setText(QApplication::translate("DataStreamZMQ", "Transport", nullptr));
        label_3->setText(QApplication::translate("DataStreamZMQ", "Address", nullptr));
        label_4->setText(QApplication::translate("DataStreamZMQ", "Port", nullptr));
        comboBox->setItemText(0, QApplication::translate("DataStreamZMQ", "tcp://", nullptr));
        comboBox->setItemText(1, QApplication::translate("DataStreamZMQ", "ipc://", nullptr));
        comboBox->setItemText(2, QApplication::translate("DataStreamZMQ", "pgm://", nullptr));

        label_6->setText(QApplication::translate("DataStreamZMQ", "Message Protocol:", nullptr));
        label_5->setText(QApplication::translate("DataStreamZMQ", "Protocol options:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataStreamZMQ: public Ui_DataStreamZMQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASTREAM_ZMQ_H
