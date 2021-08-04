/********************************************************************************
** Form generated from reading UI file 'plot_docker_toolbar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_DOCKER_TOOLBAR_H
#define UI_PLOT_DOCKER_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DraggableToolbar
{
public:
    QHBoxLayout *mainHorizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widgetButtons;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonSplitHorizontal;
    QPushButton *buttonSplitVertical;
    QPushButton *buttonFullscreen;
    QPushButton *buttonClose;

    void setupUi(QWidget *DraggableToolbar)
    {
        if (DraggableToolbar->objectName().isEmpty())
            DraggableToolbar->setObjectName(QString::fromUtf8("DraggableToolbar"));
        DraggableToolbar->resize(742, 30);
        DraggableToolbar->setMinimumSize(QSize(0, 28));
        DraggableToolbar->setMaximumSize(QSize(16777215, 30));
        mainHorizontalLayout = new QHBoxLayout(DraggableToolbar);
        mainHorizontalLayout->setSpacing(0);
        mainHorizontalLayout->setObjectName(QString::fromUtf8("mainHorizontalLayout"));
        mainHorizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        mainHorizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(DraggableToolbar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        mainHorizontalLayout->addWidget(label);

        widgetButtons = new QWidget(DraggableToolbar);
        widgetButtons->setObjectName(QString::fromUtf8("widgetButtons"));
        widgetButtons->setMinimumSize(QSize(80, 24));
        widgetButtons->setMaximumSize(QSize(80, 24));
        horizontalLayout = new QHBoxLayout(widgetButtons);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        buttonSplitHorizontal = new QPushButton(widgetButtons);
        buttonSplitHorizontal->setObjectName(QString::fromUtf8("buttonSplitHorizontal"));
        buttonSplitHorizontal->setMinimumSize(QSize(24, 24));
        buttonSplitHorizontal->setMaximumSize(QSize(24, 24));
        buttonSplitHorizontal->setFocusPolicy(Qt::NoFocus);
        buttonSplitHorizontal->setIconSize(QSize(20, 20));
        buttonSplitHorizontal->setFlat(true);

        horizontalLayout->addWidget(buttonSplitHorizontal);

        buttonSplitVertical = new QPushButton(widgetButtons);
        buttonSplitVertical->setObjectName(QString::fromUtf8("buttonSplitVertical"));
        buttonSplitVertical->setMinimumSize(QSize(24, 24));
        buttonSplitVertical->setMaximumSize(QSize(24, 24));
        buttonSplitVertical->setFocusPolicy(Qt::NoFocus);
        buttonSplitVertical->setIconSize(QSize(20, 20));
        buttonSplitVertical->setFlat(true);

        horizontalLayout->addWidget(buttonSplitVertical);

        buttonFullscreen = new QPushButton(widgetButtons);
        buttonFullscreen->setObjectName(QString::fromUtf8("buttonFullscreen"));
        buttonFullscreen->setMinimumSize(QSize(24, 24));
        buttonFullscreen->setMaximumSize(QSize(24, 24));
        buttonFullscreen->setFocusPolicy(Qt::NoFocus);
        buttonFullscreen->setIconSize(QSize(20, 20));
        buttonFullscreen->setCheckable(false);
        buttonFullscreen->setFlat(true);

        horizontalLayout->addWidget(buttonFullscreen);


        mainHorizontalLayout->addWidget(widgetButtons);

        buttonClose = new QPushButton(DraggableToolbar);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
        buttonClose->setMinimumSize(QSize(24, 24));
        buttonClose->setMaximumSize(QSize(24, 24));
        buttonClose->setFocusPolicy(Qt::NoFocus);
        buttonClose->setIconSize(QSize(20, 20));
        buttonClose->setFlat(true);

        mainHorizontalLayout->addWidget(buttonClose);

        mainHorizontalLayout->setStretch(1, 1);

        retranslateUi(DraggableToolbar);

        QMetaObject::connectSlotsByName(DraggableToolbar);
    } // setupUi

    void retranslateUi(QWidget *DraggableToolbar)
    {
        DraggableToolbar->setWindowTitle(QApplication::translate("DraggableToolbar", "Form", nullptr));
        label->setText(QApplication::translate("DraggableToolbar", "TextLabel", nullptr));
        buttonSplitHorizontal->setText(QString());
        buttonSplitVertical->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonFullscreen->setToolTip(QApplication::translate("DraggableToolbar", "<html><head/><body><p>Fullscreen</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonFullscreen->setText(QApplication::translate("DraggableToolbar", "F", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonClose->setToolTip(QApplication::translate("DraggableToolbar", "<html><head/><body><p>Close Plot Area</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonClose->setText(QApplication::translate("DraggableToolbar", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DraggableToolbar: public Ui_DraggableToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_DOCKER_TOOLBAR_H
