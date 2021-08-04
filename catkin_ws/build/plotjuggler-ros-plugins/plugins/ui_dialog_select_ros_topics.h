/********************************************************************************
** Form generated from reading UI file 'dialog_select_ros_topics.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SELECT_ROS_TOPICS_H
#define UI_DIALOG_SELECT_ROS_TOPICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialogSelectRosTopics
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxEnableRules;
    QPushButton *pushButtonEditRules;
    QCheckBox *checkBoxTimestamp;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinBoxArraySize;
    QToolButton *maximumSizeHelp;
    QSpacerItem *horizontalSpacer;
    QLabel *labelBigNumber;
    QRadioButton *radioMaxDiscard;
    QRadioButton *radioMaxClamp;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QLineEdit *lineEditFilter;
    QTableWidget *listRosTopics;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dialogSelectRosTopics)
    {
        if (dialogSelectRosTopics->objectName().isEmpty())
            dialogSelectRosTopics->setObjectName(QString::fromUtf8("dialogSelectRosTopics"));
        dialogSelectRosTopics->resize(669, 480);
        dialogSelectRosTopics->setMinimumSize(QSize(640, 480));
        verticalLayout = new QVBoxLayout(dialogSelectRosTopics);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxEnableRules = new QCheckBox(dialogSelectRosTopics);
        checkBoxEnableRules->setObjectName(QString::fromUtf8("checkBoxEnableRules"));
        checkBoxEnableRules->setFocusPolicy(Qt::NoFocus);
        checkBoxEnableRules->setChecked(true);

        horizontalLayout->addWidget(checkBoxEnableRules);

        pushButtonEditRules = new QPushButton(dialogSelectRosTopics);
        pushButtonEditRules->setObjectName(QString::fromUtf8("pushButtonEditRules"));
        pushButtonEditRules->setMaximumSize(QSize(100, 16777215));
        pushButtonEditRules->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButtonEditRules);


        verticalLayout->addLayout(horizontalLayout);

        checkBoxTimestamp = new QCheckBox(dialogSelectRosTopics);
        checkBoxTimestamp->setObjectName(QString::fromUtf8("checkBoxTimestamp"));
        checkBoxTimestamp->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(checkBoxTimestamp);

        line_2 = new QFrame(dialogSelectRosTopics);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(dialogSelectRosTopics);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        spinBoxArraySize = new QSpinBox(dialogSelectRosTopics);
        spinBoxArraySize->setObjectName(QString::fromUtf8("spinBoxArraySize"));
        spinBoxArraySize->setMaximumSize(QSize(100, 16777215));
        spinBoxArraySize->setMinimum(10);
        spinBoxArraySize->setMaximum(9999);
        spinBoxArraySize->setValue(100);

        horizontalLayout_2->addWidget(spinBoxArraySize);

        maximumSizeHelp = new QToolButton(dialogSelectRosTopics);
        maximumSizeHelp->setObjectName(QString::fromUtf8("maximumSizeHelp"));
        maximumSizeHelp->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(maximumSizeHelp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelBigNumber = new QLabel(dialogSelectRosTopics);
        labelBigNumber->setObjectName(QString::fromUtf8("labelBigNumber"));
        labelBigNumber->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(labelBigNumber);

        radioMaxDiscard = new QRadioButton(dialogSelectRosTopics);
        radioMaxDiscard->setObjectName(QString::fromUtf8("radioMaxDiscard"));
        radioMaxDiscard->setFocusPolicy(Qt::NoFocus);
        radioMaxDiscard->setChecked(true);

        horizontalLayout_2->addWidget(radioMaxDiscard);

        radioMaxClamp = new QRadioButton(dialogSelectRosTopics);
        radioMaxClamp->setObjectName(QString::fromUtf8("radioMaxClamp"));
        radioMaxClamp->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(radioMaxClamp);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(dialogSelectRosTopics);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(dialogSelectRosTopics);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_4 = new QLabel(dialogSelectRosTopics);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEditFilter = new QLineEdit(dialogSelectRosTopics);
        lineEditFilter->setObjectName(QString::fromUtf8("lineEditFilter"));
        lineEditFilter->setMaximumSize(QSize(300, 16777215));
        lineEditFilter->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(lineEditFilter);


        verticalLayout->addLayout(horizontalLayout_5);

        listRosTopics = new QTableWidget(dialogSelectRosTopics);
        if (listRosTopics->columnCount() < 2)
            listRosTopics->setColumnCount(2);
        listRosTopics->setObjectName(QString::fromUtf8("listRosTopics"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listRosTopics->sizePolicy().hasHeightForWidth());
        listRosTopics->setSizePolicy(sizePolicy);
        listRosTopics->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        listRosTopics->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listRosTopics->setProperty("showDropIndicator", QVariant(false));
        listRosTopics->setDragDropOverwriteMode(false);
        listRosTopics->setSelectionMode(QAbstractItemView::MultiSelection);
        listRosTopics->setSelectionBehavior(QAbstractItemView::SelectRows);
        listRosTopics->setTextElideMode(Qt::ElideRight);
        listRosTopics->setSortingEnabled(true);
        listRosTopics->setColumnCount(2);
        listRosTopics->horizontalHeader()->setDefaultSectionSize(300);
        listRosTopics->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        listRosTopics->horizontalHeader()->setStretchLastSection(true);
        listRosTopics->verticalHeader()->setMinimumSectionSize(18);
        listRosTopics->verticalHeader()->setDefaultSectionSize(21);

        verticalLayout->addWidget(listRosTopics);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_3 = new QLabel(dialogSelectRosTopics);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);

        horizontalLayout_4->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(dialogSelectRosTopics);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(dialogSelectRosTopics);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialogSelectRosTopics, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialogSelectRosTopics, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialogSelectRosTopics);
    } // setupUi

    void retranslateUi(QDialog *dialogSelectRosTopics)
    {
        dialogSelectRosTopics->setWindowTitle(QApplication::translate("dialogSelectRosTopics", "Select ROS messages", nullptr));
        checkBoxEnableRules->setText(QApplication::translate("dialogSelectRosTopics", "Enable renaming of ROS fields using substitution rules", nullptr));
        pushButtonEditRules->setText(QApplication::translate("dialogSelectRosTopics", "Edit Rules", nullptr));
        checkBoxTimestamp->setText(QApplication::translate("dialogSelectRosTopics", "If present, use the timestamp in the field [header.stamp]", nullptr));
        label->setText(QApplication::translate("dialogSelectRosTopics", "Maximum size of arrays:", nullptr));
#ifndef QT_NO_TOOLTIP
        spinBoxArraySize->setToolTip(QApplication::translate("dialogSelectRosTopics", "MAX size of an array", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBoxArraySize->setWhatsThis(QApplication::translate("dialogSelectRosTopics", "<html><head/><body><p>It any field of a message contains a vector which size is larger than this number, the entire vector will we skipped.</p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        maximumSizeHelp->setText(QApplication::translate("dialogSelectRosTopics", "?", nullptr));
        labelBigNumber->setText(QApplication::translate("dialogSelectRosTopics", "If larger:", nullptr));
#ifndef QT_NO_TOOLTIP
        radioMaxDiscard->setToolTip(QApplication::translate("dialogSelectRosTopics", "If the size of an array exceeds MAX, discard the entire array.", nullptr));
#endif // QT_NO_TOOLTIP
        radioMaxDiscard->setText(QApplication::translate("dialogSelectRosTopics", "discard", nullptr));
#ifndef QT_NO_TOOLTIP
        radioMaxClamp->setToolTip(QApplication::translate("dialogSelectRosTopics", "If the size of an array exceeds MAX, keep only the kist MAX elements.", nullptr));
#endif // QT_NO_TOOLTIP
        radioMaxClamp->setText(QApplication::translate("dialogSelectRosTopics", "clamp", nullptr));
        label_2->setText(QApplication::translate("dialogSelectRosTopics", "Select one or multiple topics:", nullptr));
        label_4->setText(QApplication::translate("dialogSelectRosTopics", "Filter: ", nullptr));
        label_3->setText(QApplication::translate("dialogSelectRosTopics", "Tip: [CTRL+A] select all, [CTRL+SHIFT+A] deselect all", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogSelectRosTopics: public Ui_dialogSelectRosTopics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELECT_ROS_TOPICS_H
