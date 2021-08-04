/********************************************************************************
** Form generated from reading UI file 'preferences_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_DIALOG_H
#define UI_PREFERENCES_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout;
    QComboBox *comboBoxTheme;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioGlobalColorIndex;
    QRadioButton *radioLocalColorIndex;
    QCheckBox *checkBoxRememberColor;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxSeparator;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxOpenGL;
    QWidget *tabPlugins;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QLabel *label_5;
    QListWidget *listWidget;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(527, 332);
        PreferencesDialog->setMinimumSize(QSize(450, 0));
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setFocusPolicy(Qt::NoFocus);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        comboBoxTheme = new QComboBox(tab);
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->setObjectName(QString::fromUtf8("comboBoxTheme"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxTheme);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioGlobalColorIndex = new QRadioButton(frame);
        radioGlobalColorIndex->setObjectName(QString::fromUtf8("radioGlobalColorIndex"));
        radioGlobalColorIndex->setChecked(true);

        verticalLayout_2->addWidget(radioGlobalColorIndex);

        radioLocalColorIndex = new QRadioButton(frame);
        radioLocalColorIndex->setObjectName(QString::fromUtf8("radioLocalColorIndex"));

        verticalLayout_2->addWidget(radioLocalColorIndex);

        checkBoxRememberColor = new QCheckBox(frame);
        checkBoxRememberColor->setObjectName(QString::fromUtf8("checkBoxRememberColor"));
        checkBoxRememberColor->setChecked(true);

        verticalLayout_2->addWidget(checkBoxRememberColor);


        formLayout->setWidget(2, QFormLayout::FieldRole, frame);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 40));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBoxSeparator = new QCheckBox(frame_2);
        checkBoxSeparator->setObjectName(QString::fromUtf8("checkBoxSeparator"));
        checkBoxSeparator->setChecked(true);

        verticalLayout_4->addWidget(checkBoxSeparator);


        formLayout->setWidget(3, QFormLayout::FieldRole, frame_2);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        frame_3 = new QFrame(tab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBoxOpenGL = new QCheckBox(frame_3);
        checkBoxOpenGL->setObjectName(QString::fromUtf8("checkBoxOpenGL"));
        checkBoxOpenGL->setChecked(true);

        verticalLayout_5->addWidget(checkBoxOpenGL);


        formLayout->setWidget(4, QFormLayout::FieldRole, frame_3);

        tabWidget->addTab(tab, QString());
        tabPlugins = new QWidget();
        tabPlugins->setObjectName(QString::fromUtf8("tabPlugins"));
        verticalLayout_3 = new QVBoxLayout(tabPlugins);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(tabPlugins);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonAdd = new QPushButton(tabPlugins);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setMinimumSize(QSize(24, 24));
        pushButtonAdd->setMaximumSize(QSize(24, 24));
        pushButtonAdd->setIconSize(QSize(22, 22));
        pushButtonAdd->setFlat(true);

        horizontalLayout->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(tabPlugins);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        pushButtonRemove->setMinimumSize(QSize(24, 24));
        pushButtonRemove->setMaximumSize(QSize(24, 24));
        pushButtonRemove->setIconSize(QSize(20, 20));
        pushButtonRemove->setFlat(true);

        horizontalLayout->addWidget(pushButtonRemove);


        verticalLayout_3->addLayout(horizontalLayout);

        label_5 = new QLabel(tabPlugins);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        listWidget = new QListWidget(tabPlugins);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFocusPolicy(Qt::ClickFocus);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setDragDropMode(QAbstractItemView::InternalMove);
        listWidget->setDefaultDropAction(Qt::MoveAction);
        listWidget->setSpacing(4);

        verticalLayout_3->addWidget(listWidget);

        label_4 = new QLabel(tabPlugins);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        tabWidget->addTab(tabPlugins, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", nullptr));
        comboBoxTheme->setItemText(0, QApplication::translate("PreferencesDialog", "Light Theme", nullptr));
        comboBoxTheme->setItemText(1, QApplication::translate("PreferencesDialog", "Dark Theme", nullptr));

        label->setText(QApplication::translate("PreferencesDialog", "Theme:", nullptr));
        radioGlobalColorIndex->setText(QApplication::translate("PreferencesDialog", "global color sequence", nullptr));
        radioLocalColorIndex->setText(QApplication::translate("PreferencesDialog", "reset color sequence in each plot area", nullptr));
        checkBoxRememberColor->setText(QApplication::translate("PreferencesDialog", "remember curve color", nullptr));
        label_2->setText(QApplication::translate("PreferencesDialog", "Curve color:", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxSeparator->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Change will not be applied to existing timeseries.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxSeparator->setText(QApplication::translate("PreferencesDialog", "enabled (using separator \"/\" in the name)", nullptr));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>The &quot;Name Separator&quot; is the character use to split the name of a timeseries in the tree view (Timeseries Panel).</p><p>Default is <span style=\" font-weight:600;\">&quot;/&quot;</span>.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("PreferencesDialog", "Tree view", nullptr));
        label_7->setText(QApplication::translate("PreferencesDialog", "OpenGL:", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxOpenGL->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Change will not be applied to existing plots.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxOpenGL->setText(QApplication::translate("PreferencesDialog", "enabled", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PreferencesDialog", "Appearence", nullptr));
        label_3->setText(QApplication::translate("PreferencesDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Plugin folders:</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonAdd->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Add folder</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonAdd->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonRemove->setToolTip(QApplication::translate("PreferencesDialog", "<html><head/><body><p>Remove selected</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonRemove->setText(QString());
        label_5->setText(QApplication::translate("PreferencesDialog", "Order is important: drag and drop the items to change the order.", nullptr));
        label_4->setText(QApplication::translate("PreferencesDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Note</span>: this change will take effect the next time PlotJuggler is started</p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabPlugins), QApplication::translate("PreferencesDialog", "Plugins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_DIALOG_H
