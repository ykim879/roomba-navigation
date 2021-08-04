/********************************************************************************
** Form generated from reading UI file 'rule_editing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULE_EDITING_H
#define UI_RULE_EDITING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RuleEditing
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QLabel *labelValidSyntax;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonReset;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonSave;

    void setupUi(QDialog *RuleEditing)
    {
        if (RuleEditing->objectName().isEmpty())
            RuleEditing->setObjectName(QString::fromUtf8("RuleEditing"));
        RuleEditing->resize(770, 491);
        verticalLayout = new QVBoxLayout(RuleEditing);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(RuleEditing);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 80));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setReadOnly(true);
        textBrowser->setOpenExternalLinks(true);

        verticalLayout->addWidget(textBrowser);

        textEdit = new QTextEdit(RuleEditing);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        labelValidSyntax = new QLabel(RuleEditing);
        labelValidSyntax->setObjectName(QString::fromUtf8("labelValidSyntax"));

        verticalLayout->addWidget(labelValidSyntax);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonReset = new QPushButton(RuleEditing);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButtonReset);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(RuleEditing);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButtonCancel);

        pushButtonSave = new QPushButton(RuleEditing);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButtonSave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RuleEditing);

        QMetaObject::connectSlotsByName(RuleEditing);
    } // setupUi

    void retranslateUi(QDialog *RuleEditing)
    {
        RuleEditing->setWindowTitle(QApplication::translate("RuleEditing", "Dialog", nullptr));
        textBrowser->setHtml(QApplication::translate("RuleEditing", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">This file describes how to rename some fileds of a ROS message using the name contained in another field. For more information refer to </span><a href=\"http://wiki.ros.org/ros_type_introspection\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">http://wiki.ros.org/ros_type_introspection</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-fa"
                        "mily:'Sans Serif'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt;\">It must be a valid XML.</span></p></body></html>", nullptr));
        labelValidSyntax->setText(QApplication::translate("RuleEditing", "Syntax is valid", nullptr));
        pushButtonReset->setText(QApplication::translate("RuleEditing", "Restore Default", nullptr));
        pushButtonCancel->setText(QApplication::translate("RuleEditing", "Cancel", nullptr));
        pushButtonSave->setText(QApplication::translate("RuleEditing", "Confirm and Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RuleEditing: public Ui_RuleEditing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULE_EDITING_H
