/********************************************************************************
** Form generated from reading UI file 'websocket_server.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBSOCKET_SERVER_H
#define UI_WEBSOCKET_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebSocketDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QComboBox *comboBoxProtocol;
    QWidget *boxOptions;
    QVBoxLayout *layoutOptions;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *WebSocketDialog)
    {
        if (WebSocketDialog->objectName().isEmpty())
            WebSocketDialog->setObjectName(QString::fromUtf8("WebSocketDialog"));
        WebSocketDialog->resize(293, 232);
        verticalLayout = new QVBoxLayout(WebSocketDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(WebSocketDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEditPort = new QLineEdit(WebSocketDialog);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        verticalLayout->addWidget(lineEditPort);

        label_2 = new QLabel(WebSocketDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        comboBoxProtocol = new QComboBox(WebSocketDialog);
        comboBoxProtocol->setObjectName(QString::fromUtf8("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        boxOptions = new QWidget(WebSocketDialog);
        boxOptions->setObjectName(QString::fromUtf8("boxOptions"));
        layoutOptions = new QVBoxLayout(boxOptions);
        layoutOptions->setObjectName(QString::fromUtf8("layoutOptions"));
        layoutOptions->setContentsMargins(0, 6, 0, 6);
        label_3 = new QLabel(boxOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        layoutOptions->addWidget(label_3);


        verticalLayout->addWidget(boxOptions);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(WebSocketDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(WebSocketDialog);

        QMetaObject::connectSlotsByName(WebSocketDialog);
    } // setupUi

    void retranslateUi(QWidget *WebSocketDialog)
    {
        WebSocketDialog->setWindowTitle(QApplication::translate("WebSocketDialog", "WebSocket Server", nullptr));
        label->setText(QApplication::translate("WebSocketDialog", "Port of the Websocket server:", nullptr));
        label_2->setText(QApplication::translate("WebSocketDialog", "Message Protocol:", nullptr));
        label_3->setText(QApplication::translate("WebSocketDialog", "Protocol options:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WebSocketDialog: public Ui_WebSocketDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBSOCKET_SERVER_H
