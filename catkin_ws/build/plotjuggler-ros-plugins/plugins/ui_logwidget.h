/********************************************************************************
** Form generated from reading UI file 'logwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWIDGET_H
#define UI_LOGWIDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWidgetDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionRead_rosbag;
    QAction *actionListen_rosout;
    QAction *actionListen_rosout2;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelMessageFilter;
    QComboBox *comboBoxMessageFilter;
    QLineEdit *lineEditMessageFilter;
    QCheckBox *checkBoxMessageFilter;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelLoggerFilter;
    QComboBox *comboBoxLoggerFilter;
    QLineEdit *lineEditLoggerFilter;
    QCheckBox *checkBoxLoggerFilter;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTimeRange;
    QDateTimeEdit *timeRangeMin;
    QDateTimeEdit *timeRangeMax;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonEnableDebug;
    QPushButton *buttonEnableInfo;
    QPushButton *buttonEnableWarnings;
    QPushButton *buttonEnableError;

    void setupUi(QWidget *LogWidgetDesign)
    {
        if (LogWidgetDesign->objectName().isEmpty())
            LogWidgetDesign->setObjectName(QString::fromUtf8("LogWidgetDesign"));
        LogWidgetDesign->resize(500, 700);
        LogWidgetDesign->setMinimumSize(QSize(500, 0));
        LogWidgetDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(LogWidgetDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(LogWidgetDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(LogWidgetDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionRead_rosbag = new QAction(LogWidgetDesign);
        actionRead_rosbag->setObjectName(QString::fromUtf8("actionRead_rosbag"));
        actionRead_rosbag->setCheckable(false);
        actionListen_rosout = new QAction(LogWidgetDesign);
        actionListen_rosout->setObjectName(QString::fromUtf8("actionListen_rosout"));
        actionListen_rosout2 = new QAction(LogWidgetDesign);
        actionListen_rosout2->setObjectName(QString::fromUtf8("actionListen_rosout2"));
        verticalLayout_2 = new QVBoxLayout(LogWidgetDesign);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableView = new QTableView(LogWidgetDesign);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->verticalHeader()->setCascadingSectionResizes(true);

        verticalLayout_2->addWidget(tableView);

        frame = new QFrame(LogWidgetDesign);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        labelMessageFilter = new QLabel(frame);
        labelMessageFilter->setObjectName(QString::fromUtf8("labelMessageFilter"));
        labelMessageFilter->setEnabled(true);

        horizontalLayout_5->addWidget(labelMessageFilter);

        comboBoxMessageFilter = new QComboBox(frame);
        comboBoxMessageFilter->addItem(QString());
        comboBoxMessageFilter->addItem(QString());
        comboBoxMessageFilter->addItem(QString());
        comboBoxMessageFilter->setObjectName(QString::fromUtf8("comboBoxMessageFilter"));
        comboBoxMessageFilter->setEnabled(true);
        comboBoxMessageFilter->setMinimumSize(QSize(100, 0));
        comboBoxMessageFilter->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(comboBoxMessageFilter);

        lineEditMessageFilter = new QLineEdit(frame);
        lineEditMessageFilter->setObjectName(QString::fromUtf8("lineEditMessageFilter"));
        lineEditMessageFilter->setEnabled(true);
        lineEditMessageFilter->setMinimumSize(QSize(200, 0));
        lineEditMessageFilter->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_5->addWidget(lineEditMessageFilter);

        checkBoxMessageFilter = new QCheckBox(frame);
        checkBoxMessageFilter->setObjectName(QString::fromUtf8("checkBoxMessageFilter"));
        checkBoxMessageFilter->setChecked(true);

        horizontalLayout_5->addWidget(checkBoxMessageFilter);

        horizontalLayout_5->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        labelLoggerFilter = new QLabel(frame);
        labelLoggerFilter->setObjectName(QString::fromUtf8("labelLoggerFilter"));
        labelLoggerFilter->setEnabled(false);

        horizontalLayout_7->addWidget(labelLoggerFilter);

        comboBoxLoggerFilter = new QComboBox(frame);
        comboBoxLoggerFilter->addItem(QString());
        comboBoxLoggerFilter->addItem(QString());
        comboBoxLoggerFilter->addItem(QString());
        comboBoxLoggerFilter->setObjectName(QString::fromUtf8("comboBoxLoggerFilter"));
        comboBoxLoggerFilter->setEnabled(false);
        comboBoxLoggerFilter->setMinimumSize(QSize(100, 0));
        comboBoxLoggerFilter->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_7->addWidget(comboBoxLoggerFilter);

        lineEditLoggerFilter = new QLineEdit(frame);
        lineEditLoggerFilter->setObjectName(QString::fromUtf8("lineEditLoggerFilter"));
        lineEditLoggerFilter->setEnabled(false);
        lineEditLoggerFilter->setMinimumSize(QSize(200, 0));
        lineEditLoggerFilter->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_7->addWidget(lineEditLoggerFilter);

        checkBoxLoggerFilter = new QCheckBox(frame);
        checkBoxLoggerFilter->setObjectName(QString::fromUtf8("checkBoxLoggerFilter"));

        horizontalLayout_7->addWidget(checkBoxLoggerFilter);

        horizontalLayout_7->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        labelTimeRange = new QLabel(frame);
        labelTimeRange->setObjectName(QString::fromUtf8("labelTimeRange"));
        labelTimeRange->setEnabled(true);

        horizontalLayout_6->addWidget(labelTimeRange);

        timeRangeMin = new QDateTimeEdit(frame);
        timeRangeMin->setObjectName(QString::fromUtf8("timeRangeMin"));
        timeRangeMin->setEnabled(true);
        timeRangeMin->setMaximumSize(QSize(250, 16777215));
        timeRangeMin->setReadOnly(true);
        timeRangeMin->setKeyboardTracking(false);

        horizontalLayout_6->addWidget(timeRangeMin);

        timeRangeMax = new QDateTimeEdit(frame);
        timeRangeMax->setObjectName(QString::fromUtf8("timeRangeMax"));
        timeRangeMax->setEnabled(true);
        timeRangeMax->setMaximumSize(QSize(250, 16777215));
        timeRangeMax->setReadOnly(true);
        timeRangeMax->setKeyboardTracking(false);

        horizontalLayout_6->addWidget(timeRangeMax);

        horizontalLayout_6->setStretch(2, 1);
        horizontalLayout_6->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        buttonEnableDebug = new QPushButton(frame);
        buttonEnableDebug->setObjectName(QString::fromUtf8("buttonEnableDebug"));
        buttonEnableDebug->setMinimumSize(QSize(100, 0));
        buttonEnableDebug->setCheckable(true);
        buttonEnableDebug->setChecked(true);

        horizontalLayout->addWidget(buttonEnableDebug);

        buttonEnableInfo = new QPushButton(frame);
        buttonEnableInfo->setObjectName(QString::fromUtf8("buttonEnableInfo"));
        buttonEnableInfo->setMinimumSize(QSize(100, 0));
        buttonEnableInfo->setCheckable(true);
        buttonEnableInfo->setChecked(true);

        horizontalLayout->addWidget(buttonEnableInfo);

        buttonEnableWarnings = new QPushButton(frame);
        buttonEnableWarnings->setObjectName(QString::fromUtf8("buttonEnableWarnings"));
        buttonEnableWarnings->setMinimumSize(QSize(100, 0));
        buttonEnableWarnings->setCheckable(true);
        buttonEnableWarnings->setChecked(true);

        horizontalLayout->addWidget(buttonEnableWarnings);

        buttonEnableError = new QPushButton(frame);
        buttonEnableError->setObjectName(QString::fromUtf8("buttonEnableError"));
        buttonEnableError->setMinimumSize(QSize(100, 0));
        buttonEnableError->setCheckable(true);
        buttonEnableError->setChecked(true);

        horizontalLayout->addWidget(buttonEnableError);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frame);


        retranslateUi(LogWidgetDesign);

        QMetaObject::connectSlotsByName(LogWidgetDesign);
    } // setupUi

    void retranslateUi(QWidget *LogWidgetDesign)
    {
        LogWidgetDesign->setWindowTitle(QString());
        action_Quit->setText(QApplication::translate("LogWidgetDesign", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("LogWidgetDesign", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("LogWidgetDesign", "&Preferences", nullptr));
        actionAbout->setText(QApplication::translate("LogWidgetDesign", "&About", nullptr));
        actionRead_rosbag->setText(QApplication::translate("LogWidgetDesign", "Read rosbag", nullptr));
        actionListen_rosout->setText(QApplication::translate("LogWidgetDesign", "Listen /rosout", nullptr));
        actionListen_rosout2->setText(QApplication::translate("LogWidgetDesign", "Listen /rosout2", nullptr));
        labelMessageFilter->setText(QApplication::translate("LogWidgetDesign", "Show if message", nullptr));
        comboBoxMessageFilter->setItemText(0, QApplication::translate("LogWidgetDesign", "contains", nullptr));
        comboBoxMessageFilter->setItemText(1, QApplication::translate("LogWidgetDesign", "matches wildcard", "Use wildcards (similar to unix command line)"));
        comboBoxMessageFilter->setItemText(2, QApplication::translate("LogWidgetDesign", "matches regex", nullptr));

        checkBoxMessageFilter->setText(QString());
        labelLoggerFilter->setText(QApplication::translate("LogWidgetDesign", "Show if logger name ", nullptr));
        comboBoxLoggerFilter->setItemText(0, QApplication::translate("LogWidgetDesign", "contains", nullptr));
        comboBoxLoggerFilter->setItemText(1, QApplication::translate("LogWidgetDesign", "matches wildcard", nullptr));
        comboBoxLoggerFilter->setItemText(2, QApplication::translate("LogWidgetDesign", "matches regex", nullptr));

        checkBoxLoggerFilter->setText(QString());
        labelTimeRange->setText(QApplication::translate("LogWidgetDesign", "Time range:", nullptr));
        timeRangeMin->setDisplayFormat(QApplication::translate("LogWidgetDesign", "d/M/yy HH:mm::ss.zzz", nullptr));
        timeRangeMax->setDisplayFormat(QApplication::translate("LogWidgetDesign", "d/M/yy HH:mm::ss.zzz", nullptr));
        buttonEnableDebug->setText(QApplication::translate("LogWidgetDesign", "Debug", nullptr));
        buttonEnableInfo->setText(QApplication::translate("LogWidgetDesign", "Info", nullptr));
        buttonEnableWarnings->setText(QApplication::translate("LogWidgetDesign", "Warnings", nullptr));
        buttonEnableError->setText(QApplication::translate("LogWidgetDesign", "Error", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogWidgetDesign: public Ui_LogWidgetDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWIDGET_H
