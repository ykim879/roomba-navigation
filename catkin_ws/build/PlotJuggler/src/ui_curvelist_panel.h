/********************************************************************************
** Form generated from reading UI file 'curvelist_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVELIST_PANEL_H
#define UI_CURVELIST_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurveListPanel
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayoutTop;
    QLineEdit *lineEditFilter;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelNumberDisplayed;
    QCheckBox *checkBoxShowValues;
    QWidget *listPlaceholder1;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayoutBottom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *buttonAddCustom;
    QPushButton *buttonEditCustom;
    QSpacerItem *horizontalSpacer;
    QWidget *listPlaceholder2;

    void setupUi(QWidget *CurveListPanel)
    {
        if (CurveListPanel->objectName().isEmpty())
            CurveListPanel->setObjectName(QString::fromUtf8("CurveListPanel"));
        CurveListPanel->resize(240, 684);
        CurveListPanel->setMinimumSize(QSize(240, 0));
        CurveListPanel->setMaximumSize(QSize(600, 16777215));
        CurveListPanel->setBaseSize(QSize(280, 0));
        verticalLayout_2 = new QVBoxLayout(CurveListPanel);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(CurveListPanel);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayoutTop = new QVBoxLayout(layoutWidget);
        verticalLayoutTop->setSpacing(6);
        verticalLayoutTop->setContentsMargins(11, 11, 11, 11);
        verticalLayoutTop->setObjectName(QString::fromUtf8("verticalLayoutTop"));
        verticalLayoutTop->setContentsMargins(0, 0, 0, 6);
        lineEditFilter = new QLineEdit(layoutWidget);
        lineEditFilter->setObjectName(QString::fromUtf8("lineEditFilter"));
        lineEditFilter->setMinimumSize(QSize(100, 30));
        lineEditFilter->setMaximumSize(QSize(16777215, 16777215));
        lineEditFilter->setFocusPolicy(Qt::ClickFocus);
        lineEditFilter->setStyleSheet(QString::fromUtf8(""));
        lineEditFilter->setInputMask(QString::fromUtf8(""));
        lineEditFilter->setFrame(false);
        lineEditFilter->setClearButtonEnabled(true);

        verticalLayoutTop->addWidget(lineEditFilter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 8, -1, 8);
        labelNumberDisplayed = new QLabel(layoutWidget);
        labelNumberDisplayed->setObjectName(QString::fromUtf8("labelNumberDisplayed"));
        labelNumberDisplayed->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelNumberDisplayed);

        checkBoxShowValues = new QCheckBox(layoutWidget);
        checkBoxShowValues->setObjectName(QString::fromUtf8("checkBoxShowValues"));
        checkBoxShowValues->setFocusPolicy(Qt::NoFocus);
        checkBoxShowValues->setChecked(true);

        horizontalLayout_3->addWidget(checkBoxShowValues);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayoutTop->addLayout(horizontalLayout_3);

        listPlaceholder1 = new QWidget(layoutWidget);
        listPlaceholder1->setObjectName(QString::fromUtf8("listPlaceholder1"));

        verticalLayoutTop->addWidget(listPlaceholder1);

        verticalLayoutTop->setStretch(2, 1);
        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayoutBottom = new QVBoxLayout(layoutWidget1);
        verticalLayoutBottom->setSpacing(6);
        verticalLayoutBottom->setContentsMargins(11, 11, 11, 11);
        verticalLayoutBottom->setObjectName(QString::fromUtf8("verticalLayoutBottom"));
        verticalLayoutBottom->setContentsMargins(0, 6, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        buttonAddCustom = new QPushButton(layoutWidget1);
        buttonAddCustom->setObjectName(QString::fromUtf8("buttonAddCustom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonAddCustom->sizePolicy().hasHeightForWidth());
        buttonAddCustom->setSizePolicy(sizePolicy);
        buttonAddCustom->setMinimumSize(QSize(28, 28));
        buttonAddCustom->setMaximumSize(QSize(28, 28));
        buttonAddCustom->setFocusPolicy(Qt::NoFocus);
        buttonAddCustom->setIconSize(QSize(20, 20));
        buttonAddCustom->setFlat(false);

        horizontalLayout_2->addWidget(buttonAddCustom);

        buttonEditCustom = new QPushButton(layoutWidget1);
        buttonEditCustom->setObjectName(QString::fromUtf8("buttonEditCustom"));
        buttonEditCustom->setEnabled(false);
        sizePolicy.setHeightForWidth(buttonEditCustom->sizePolicy().hasHeightForWidth());
        buttonEditCustom->setSizePolicy(sizePolicy);
        buttonEditCustom->setMinimumSize(QSize(28, 28));
        buttonEditCustom->setMaximumSize(QSize(28, 28));
        buttonEditCustom->setFocusPolicy(Qt::NoFocus);
        buttonEditCustom->setIconSize(QSize(18, 18));
        buttonEditCustom->setFlat(false);

        horizontalLayout_2->addWidget(buttonEditCustom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(3, 1);

        verticalLayoutBottom->addLayout(horizontalLayout_2);

        listPlaceholder2 = new QWidget(layoutWidget1);
        listPlaceholder2->setObjectName(QString::fromUtf8("listPlaceholder2"));

        verticalLayoutBottom->addWidget(listPlaceholder2);

        verticalLayoutBottom->setStretch(1, 1);
        splitter->addWidget(layoutWidget1);

        verticalLayout->addWidget(splitter);


        verticalLayout_2->addWidget(widget);


        retranslateUi(CurveListPanel);

        QMetaObject::connectSlotsByName(CurveListPanel);
    } // setupUi

    void retranslateUi(QWidget *CurveListPanel)
    {
        CurveListPanel->setWindowTitle(QString());
#ifndef QT_NO_TOOLTIP
        lineEditFilter->setToolTip(QApplication::translate("CurveListPanel", "<html><head/><body><p>Search box...</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        lineEditFilter->setPlaceholderText(QApplication::translate("CurveListPanel", "  Filter...", nullptr));
        labelNumberDisplayed->setText(QApplication::translate("CurveListPanel", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxShowValues->setToolTip(QApplication::translate("CurveListPanel", "<html><head/><body><p>Show/Hide the second column with the current value of the time series.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkBoxShowValues->setWhatsThis(QApplication::translate("CurveListPanel", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        checkBoxShowValues->setText(QApplication::translate("CurveListPanel", "Values", nullptr));
        label->setText(QApplication::translate("CurveListPanel", "Custom Series:", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonAddCustom->setToolTip(QApplication::translate("CurveListPanel", "<html><head/><body><p>Create a new timeseries</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonAddCustom->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonEditCustom->setToolTip(QApplication::translate("CurveListPanel", "<html><head/><body><p>Modify the selected timeseries</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonEditCustom->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CurveListPanel: public Ui_CurveListPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVELIST_PANEL_H
