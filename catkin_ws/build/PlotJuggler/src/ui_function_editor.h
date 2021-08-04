/********************************************************************************
** Form generated from reading UI file 'function_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_EDITOR_H
#define UI_FUNCTION_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionEditor
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *framePlotPreview;
    QHBoxLayout *horizontalLayout_5;
    QWidget *leftWidget;
    QVBoxLayout *leftLayout;
    QLabel *label_linkeChannel;
    QLineEdit *lineEditSource;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonDeleteCurves;
    QTableWidget *listAdditionalSources;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QPushButton *buttonLoadFunctions;
    QPushButton *buttonSaveFunctions;
    QPushButton *buttonSaveCurrent;
    QSpacerItem *spacer;
    QListWidget *snippetsListSaved;
    QLabel *label_7;
    QPlainTextEdit *snippetPreview;
    QWidget *rightWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_name;
    QLineEdit *nameLineEdit;
    QLabel *labelSemaphore;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonHelp;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *globalVarsTextField;
    QLabel *labelFunction;
    QPlainTextEdit *mathEquation;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCreate;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *FunctionEditor)
    {
        if (FunctionEditor->objectName().isEmpty())
            FunctionEditor->setObjectName(QString::fromUtf8("FunctionEditor"));
        FunctionEditor->resize(1062, 758);
        FunctionEditor->setMinimumSize(QSize(620, 600));
        FunctionEditor->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(FunctionEditor);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        framePlotPreview = new QFrame(FunctionEditor);
        framePlotPreview->setObjectName(QString::fromUtf8("framePlotPreview"));
        framePlotPreview->setMinimumSize(QSize(600, 200));
        framePlotPreview->setFrameShape(QFrame::NoFrame);

        verticalLayout_3->addWidget(framePlotPreview);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        leftWidget = new QWidget(FunctionEditor);
        leftWidget->setObjectName(QString::fromUtf8("leftWidget"));
        leftWidget->setMinimumSize(QSize(295, 0));
        leftLayout = new QVBoxLayout(leftWidget);
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setContentsMargins(0, -1, 8, -1);
        label_linkeChannel = new QLabel(leftWidget);
        label_linkeChannel->setObjectName(QString::fromUtf8("label_linkeChannel"));
        label_linkeChannel->setMinimumSize(QSize(0, 25));
        label_linkeChannel->setWordWrap(true);

        leftLayout->addWidget(label_linkeChannel);

        lineEditSource = new QLineEdit(leftWidget);
        lineEditSource->setObjectName(QString::fromUtf8("lineEditSource"));
        lineEditSource->setReadOnly(true);

        leftLayout->addWidget(lineEditSource);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, -1, -1);
        label_2 = new QLabel(leftWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButtonDeleteCurves = new QPushButton(leftWidget);
        pushButtonDeleteCurves->setObjectName(QString::fromUtf8("pushButtonDeleteCurves"));
        pushButtonDeleteCurves->setEnabled(false);
        pushButtonDeleteCurves->setMinimumSize(QSize(24, 24));
        pushButtonDeleteCurves->setMaximumSize(QSize(24, 24));
        pushButtonDeleteCurves->setFocusPolicy(Qt::NoFocus);
        pushButtonDeleteCurves->setIconSize(QSize(22, 22));
        pushButtonDeleteCurves->setFlat(true);

        horizontalLayout_4->addWidget(pushButtonDeleteCurves);


        leftLayout->addLayout(horizontalLayout_4);

        listAdditionalSources = new QTableWidget(leftWidget);
        if (listAdditionalSources->columnCount() < 2)
            listAdditionalSources->setColumnCount(2);
        listAdditionalSources->setObjectName(QString::fromUtf8("listAdditionalSources"));
        listAdditionalSources->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listAdditionalSources->setDragDropMode(QAbstractItemView::DropOnly);
        listAdditionalSources->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listAdditionalSources->setSelectionBehavior(QAbstractItemView::SelectRows);
        listAdditionalSources->setColumnCount(2);
        listAdditionalSources->horizontalHeader()->setVisible(false);
        listAdditionalSources->horizontalHeader()->setMinimumSectionSize(40);
        listAdditionalSources->horizontalHeader()->setDefaultSectionSize(50);
        listAdditionalSources->horizontalHeader()->setStretchLastSection(true);
        listAdditionalSources->verticalHeader()->setVisible(false);

        leftLayout->addWidget(listAdditionalSources);

        widget = new QWidget(leftWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 100));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        buttonLoadFunctions = new QPushButton(widget);
        buttonLoadFunctions->setObjectName(QString::fromUtf8("buttonLoadFunctions"));
        buttonLoadFunctions->setMinimumSize(QSize(30, 30));
        buttonLoadFunctions->setMaximumSize(QSize(30, 30));
        buttonLoadFunctions->setFocusPolicy(Qt::NoFocus);
        buttonLoadFunctions->setIconSize(QSize(26, 26));
        buttonLoadFunctions->setFlat(true);

        horizontalLayout_2->addWidget(buttonLoadFunctions);

        buttonSaveFunctions = new QPushButton(widget);
        buttonSaveFunctions->setObjectName(QString::fromUtf8("buttonSaveFunctions"));
        buttonSaveFunctions->setEnabled(true);
        buttonSaveFunctions->setMinimumSize(QSize(30, 30));
        buttonSaveFunctions->setMaximumSize(QSize(30, 30));
        buttonSaveFunctions->setFocusPolicy(Qt::NoFocus);
        buttonSaveFunctions->setIconSize(QSize(26, 26));
        buttonSaveFunctions->setFlat(true);

        horizontalLayout_2->addWidget(buttonSaveFunctions);

        buttonSaveCurrent = new QPushButton(widget);
        buttonSaveCurrent->setObjectName(QString::fromUtf8("buttonSaveCurrent"));
        buttonSaveCurrent->setEnabled(true);
        buttonSaveCurrent->setMinimumSize(QSize(30, 30));
        buttonSaveCurrent->setMaximumSize(QSize(30, 30));
        buttonSaveCurrent->setFocusPolicy(Qt::NoFocus);
        buttonSaveCurrent->setIconSize(QSize(26, 26));
        buttonSaveCurrent->setFlat(true);

        horizontalLayout_2->addWidget(buttonSaveCurrent);

        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        snippetsListSaved = new QListWidget(widget);
        snippetsListSaved->setObjectName(QString::fromUtf8("snippetsListSaved"));

        verticalLayout_2->addWidget(snippetsListSaved);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        snippetPreview = new QPlainTextEdit(widget);
        snippetPreview->setObjectName(QString::fromUtf8("snippetPreview"));
        snippetPreview->setFocusPolicy(Qt::NoFocus);
        snippetPreview->setReadOnly(true);

        verticalLayout_2->addWidget(snippetPreview);

        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(3, 3);

        leftLayout->addWidget(widget);


        horizontalLayout_5->addWidget(leftWidget);

        rightWidget = new QWidget(FunctionEditor);
        rightWidget->setObjectName(QString::fromUtf8("rightWidget"));
        rightWidget->setMinimumSize(QSize(295, 0));
        verticalLayout = new QVBoxLayout(rightWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_name = new QLabel(rightWidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setMinimumSize(QSize(0, 25));

        horizontalLayout_3->addWidget(label_name);

        nameLineEdit = new QLineEdit(rightWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy);
        nameLineEdit->setMinimumSize(QSize(0, 25));
        nameLineEdit->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_3->addWidget(nameLineEdit);

        labelSemaphore = new QLabel(rightWidget);
        labelSemaphore->setObjectName(QString::fromUtf8("labelSemaphore"));
        labelSemaphore->setMinimumSize(QSize(30, 30));
        labelSemaphore->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(labelSemaphore);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 11, -1, -1);
        label = new QLabel(rightWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        pushButtonHelp = new QPushButton(rightWidget);
        pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
        pushButtonHelp->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(pushButtonHelp);


        verticalLayout->addLayout(horizontalLayout_6);

        widget_2 = new QWidget(rightWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        globalVarsTextField = new QPlainTextEdit(widget_2);
        globalVarsTextField->setObjectName(QString::fromUtf8("globalVarsTextField"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(globalVarsTextField->sizePolicy().hasHeightForWidth());
        globalVarsTextField->setSizePolicy(sizePolicy1);
        globalVarsTextField->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(globalVarsTextField);

        labelFunction = new QLabel(widget_2);
        labelFunction->setObjectName(QString::fromUtf8("labelFunction"));

        verticalLayout_4->addWidget(labelFunction);

        mathEquation = new QPlainTextEdit(widget_2);
        mathEquation->setObjectName(QString::fromUtf8("mathEquation"));
        mathEquation->setMinimumSize(QSize(0, 0));

        verticalLayout_4->addWidget(mathEquation);


        verticalLayout->addWidget(widget_2);


        horizontalLayout_5->addWidget(rightWidget);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCreate = new QPushButton(FunctionEditor);
        pushButtonCreate->setObjectName(QString::fromUtf8("pushButtonCreate"));
        pushButtonCreate->setEnabled(false);
        pushButtonCreate->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pushButtonCreate);

        pushButtonCancel = new QPushButton(FunctionEditor);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFocusPolicy(Qt::NoFocus);
        pushButtonCancel->setAutoDefault(true);

        horizontalLayout->addWidget(pushButtonCancel);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(FunctionEditor);

        pushButtonCreate->setDefault(true);


        QMetaObject::connectSlotsByName(FunctionEditor);
    } // setupUi

    void retranslateUi(QWidget *FunctionEditor)
    {
        FunctionEditor->setWindowTitle(QApplication::translate("FunctionEditor", "Function editor", nullptr));
#ifndef QT_NO_TOOLTIP
        label_linkeChannel->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>The timeseries that provides the (time,value) pairs to compute the funtion <span style=\" font-weight:600;\">calc(time,value)</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_linkeChannel->setText(QApplication::translate("FunctionEditor", "<html><head/><body><p>Input timeseries. Provides arguments <span style=\" font-weight:600;\">time </span>and<span style=\" font-weight:600;\"> value</span>: </p></body></html>", nullptr));
        lineEditSource->setPlaceholderText(QApplication::translate("FunctionEditor", "drag & drop here the input timeseries", nullptr));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("FunctionEditor", "Additional source timeseries:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonDeleteCurves->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Remove selected time series.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonDeleteCurves->setText(QString());
#ifndef QT_NO_TOOLTIP
        listAdditionalSources->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Drag &amp; Drop your additional timeseries here.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("FunctionEditor", "Function library:", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonLoadFunctions->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Import functions from a XML library.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonLoadFunctions->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonSaveFunctions->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Export functions from a XML library.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonSaveFunctions->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonSaveCurrent->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Save the current function in the library.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonSaveCurrent->setText(QString());
#ifndef QT_NO_TOOLTIP
        snippetsListSaved->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>To load this function, <span style=\" font-weight:600;\">double-click</span> on it.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("FunctionEditor", "Function Preview:", nullptr));
#ifndef QT_NO_TOOLTIP
        label_name->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Name of the new time series.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_name->setText(QApplication::translate("FunctionEditor", "New name:", nullptr));
        nameLineEdit->setText(QString());
        nameLineEdit->setPlaceholderText(QApplication::translate("FunctionEditor", "name the new timeseries", nullptr));
        labelSemaphore->setText(QString());
        label->setText(QApplication::translate("FunctionEditor", "<html><head/><body><p>Global variables</p></body></html>", nullptr));
        pushButtonHelp->setText(QApplication::translate("FunctionEditor", "Help", nullptr));
#ifndef QT_NO_TOOLTIP
        globalVarsTextField->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Portion of code outside the function.</p><p>Usefull to add global variables.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        globalVarsTextField->setPlaceholderText(QApplication::translate("FunctionEditor", "Declare your global variables here", nullptr));
        labelFunction->setText(QApplication::translate("FunctionEditor", "function( time, value )", nullptr));
#ifndef QT_NO_TOOLTIP
        mathEquation->setToolTip(QApplication::translate("FunctionEditor", "<html><head/><body><p>Write your function implementation here. </p><p>It <span style=\" font-weight:600;\">must</span> return a new value. </p><p>The time used in the new time series will be the same.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        mathEquation->setPlaceholderText(QApplication::translate("FunctionEditor", "Declare your function here", nullptr));
        pushButtonCreate->setText(QApplication::translate("FunctionEditor", "Create New Time Series", nullptr));
        pushButtonCancel->setText(QApplication::translate("FunctionEditor", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionEditor: public Ui_FunctionEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_EDITOR_H
