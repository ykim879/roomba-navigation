/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <menubar.h>
#include <realslider.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionReportBug;
    QAction *actionClearBuffer;
    QAction *actionCheatsheet;
    QAction *actionSupportPlotJuggler;
    QAction *actionClearRecentData;
    QAction *actionClearRecentLayout;
    QAction *actionDeleteAllData;
    QAction *actionPreferences;
    QAction *actionShare_the_love;
    QAction *actionLoadStyleSheet;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *mainSplitter;
    QFrame *leftMainWindowFrame;
    QVBoxLayout *leftLayout;
    QWidget *widgetLabelLoad;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QPushButton *buttonHideFileFrame;
    QFrame *frameFile;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPushButton *pushButtonLoadDatafile;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonRecentData;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QPushButton *pushButtonLoadLayout;
    QPushButton *pushButtonSaveLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonRecentLayout;
    QWidget *widgetLabelStreaming;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QPushButton *buttonHideStreamingFrame;
    QFrame *frameStreaming;
    QVBoxLayout *verticalLayout_3;
    QFrame *streamingFrameTop;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboStreaming;
    QPushButton *buttonStreamingOptions;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *buttonStreamingStart;
    QPushButton *buttonStreamingPause;
    QLabel *labelStreamingAnimation;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpinBox *streamingSpinBox;
    QWidget *widgetLabelPublishers;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QPushButton *buttonHidePublishersFrame;
    QFrame *framePublishers;
    QHBoxLayout *horizontalLayout_10;
    QGridLayout *layoutPublishers;
    QWidget *widgetLabelTimeseries;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *plottingArea;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *widgetStack;
    QWidget *plotPage;
    QVBoxLayout *plottingLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widgetTimescale;
    QHBoxLayout *layoutTimescale;
    QLineEdit *displayTime;
    QWidget *widgetPlay;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *playbackLoop;
    QPushButton *pushButtonPlay;
    RealSlider *timeSlider;
    QWidget *widgetButtons;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonZoomOut;
    QPushButton *pushButtonTimeTracker;
    QPushButton *pushButtonLegend;
    QPushButton *pushButtonUseDateTime;
    QPushButton *pushButtonActivateGrid;
    QPushButton *pushButtonLink;
    QPushButton *pushButtonRemoveTimeOffset;
    QPushButton *pushButtonRatio;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *playbackRate;
    QLabel *label_2;
    QDoubleSpinBox *playbackStep;
    QWidget *formulaPage;
    MenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuTools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1248, 798);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName(QString::fromUtf8("actionReportBug"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/github.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReportBug->setIcon(icon);
        actionClearBuffer = new QAction(MainWindow);
        actionClearBuffer->setObjectName(QString::fromUtf8("actionClearBuffer"));
        actionCheatsheet = new QAction(MainWindow);
        actionCheatsheet->setObjectName(QString::fromUtf8("actionCheatsheet"));
        actionSupportPlotJuggler = new QAction(MainWindow);
        actionSupportPlotJuggler->setObjectName(QString::fromUtf8("actionSupportPlotJuggler"));
        actionClearRecentData = new QAction(MainWindow);
        actionClearRecentData->setObjectName(QString::fromUtf8("actionClearRecentData"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/style_light/clean_pane.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearRecentData->setIcon(icon1);
        actionClearRecentLayout = new QAction(MainWindow);
        actionClearRecentLayout->setObjectName(QString::fromUtf8("actionClearRecentLayout"));
        actionClearRecentLayout->setIcon(icon1);
        actionDeleteAllData = new QAction(MainWindow);
        actionDeleteAllData->setObjectName(QString::fromUtf8("actionDeleteAllData"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionShare_the_love = new QAction(MainWindow);
        actionShare_the_love->setObjectName(QString::fromUtf8("actionShare_the_love"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShare_the_love->setIcon(icon2);
        actionLoadStyleSheet = new QAction(MainWindow);
        actionLoadStyleSheet->setObjectName(QString::fromUtf8("actionLoadStyleSheet"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainSplitter = new QSplitter(centralWidget);
        mainSplitter->setObjectName(QString::fromUtf8("mainSplitter"));
        mainSplitter->setFrameShape(QFrame::NoFrame);
        mainSplitter->setMidLineWidth(0);
        mainSplitter->setOrientation(Qt::Horizontal);
        mainSplitter->setOpaqueResize(true);
        mainSplitter->setHandleWidth(1);
        mainSplitter->setChildrenCollapsible(false);
        leftMainWindowFrame = new QFrame(mainSplitter);
        leftMainWindowFrame->setObjectName(QString::fromUtf8("leftMainWindowFrame"));
        leftMainWindowFrame->setMinimumSize(QSize(260, 0));
        leftLayout = new QVBoxLayout(leftMainWindowFrame);
        leftLayout->setSpacing(2);
        leftLayout->setContentsMargins(11, 11, 11, 11);
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setContentsMargins(0, 0, 0, -1);
        widgetLabelLoad = new QWidget(leftMainWindowFrame);
        widgetLabelLoad->setObjectName(QString::fromUtf8("widgetLabelLoad"));
        widgetLabelLoad->setMinimumSize(QSize(0, 22));
        widgetLabelLoad->setMaximumSize(QSize(16777215, 22));
        horizontalLayout_2 = new QHBoxLayout(widgetLabelLoad);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, 4, 0);
        label_5 = new QLabel(widgetLabelLoad);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));
        QFont font;
        font.setPointSize(10);
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        buttonHideFileFrame = new QPushButton(widgetLabelLoad);
        buttonHideFileFrame->setObjectName(QString::fromUtf8("buttonHideFileFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonHideFileFrame->sizePolicy().hasHeightForWidth());
        buttonHideFileFrame->setSizePolicy(sizePolicy);
        buttonHideFileFrame->setMinimumSize(QSize(18, 18));
        buttonHideFileFrame->setMaximumSize(QSize(18, 18));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        buttonHideFileFrame->setFont(font1);
        buttonHideFileFrame->setFocusPolicy(Qt::NoFocus);
        buttonHideFileFrame->setFlat(true);

        horizontalLayout_2->addWidget(buttonHideFileFrame);


        leftLayout->addWidget(widgetLabelLoad);

        frameFile = new QFrame(leftMainWindowFrame);
        frameFile->setObjectName(QString::fromUtf8("frameFile"));
        verticalLayout_4 = new QVBoxLayout(frameFile);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 4, 6, 4);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frameFile);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        pushButtonLoadDatafile = new QPushButton(frameFile);
        pushButtonLoadDatafile->setObjectName(QString::fromUtf8("pushButtonLoadDatafile"));
        pushButtonLoadDatafile->setMinimumSize(QSize(24, 24));
        pushButtonLoadDatafile->setMaximumSize(QSize(24, 24));
        pushButtonLoadDatafile->setFocusPolicy(Qt::NoFocus);
        pushButtonLoadDatafile->setIconSize(QSize(22, 22));
        pushButtonLoadDatafile->setFlat(true);

        horizontalLayout_3->addWidget(pushButtonLoadDatafile);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonRecentData = new QPushButton(frameFile);
        buttonRecentData->setObjectName(QString::fromUtf8("buttonRecentData"));
        buttonRecentData->setMinimumSize(QSize(24, 24));
        buttonRecentData->setMaximumSize(QSize(24, 24));
        buttonRecentData->setIconSize(QSize(12, 12));
        buttonRecentData->setFlat(true);

        horizontalLayout_3->addWidget(buttonRecentData);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(frameFile);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        pushButtonLoadLayout = new QPushButton(frameFile);
        pushButtonLoadLayout->setObjectName(QString::fromUtf8("pushButtonLoadLayout"));
        pushButtonLoadLayout->setMinimumSize(QSize(24, 24));
        pushButtonLoadLayout->setMaximumSize(QSize(24, 24));
        pushButtonLoadLayout->setFocusPolicy(Qt::NoFocus);
        pushButtonLoadLayout->setIconSize(QSize(22, 22));
        pushButtonLoadLayout->setFlat(true);

        horizontalLayout_11->addWidget(pushButtonLoadLayout);

        pushButtonSaveLayout = new QPushButton(frameFile);
        pushButtonSaveLayout->setObjectName(QString::fromUtf8("pushButtonSaveLayout"));
        pushButtonSaveLayout->setMinimumSize(QSize(24, 24));
        pushButtonSaveLayout->setMaximumSize(QSize(24, 24));
        pushButtonSaveLayout->setFocusPolicy(Qt::NoFocus);
        pushButtonSaveLayout->setIconSize(QSize(22, 22));
        pushButtonSaveLayout->setFlat(true);

        horizontalLayout_11->addWidget(pushButtonSaveLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        buttonRecentLayout = new QPushButton(frameFile);
        buttonRecentLayout->setObjectName(QString::fromUtf8("buttonRecentLayout"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonRecentLayout->sizePolicy().hasHeightForWidth());
        buttonRecentLayout->setSizePolicy(sizePolicy1);
        buttonRecentLayout->setMinimumSize(QSize(24, 24));
        buttonRecentLayout->setMaximumSize(QSize(24, 24));
        buttonRecentLayout->setIconSize(QSize(12, 12));
        buttonRecentLayout->setFlat(true);

        horizontalLayout_11->addWidget(buttonRecentLayout);


        verticalLayout_4->addLayout(horizontalLayout_11);


        leftLayout->addWidget(frameFile);

        widgetLabelStreaming = new QWidget(leftMainWindowFrame);
        widgetLabelStreaming->setObjectName(QString::fromUtf8("widgetLabelStreaming"));
        widgetLabelStreaming->setMinimumSize(QSize(0, 22));
        widgetLabelStreaming->setMaximumSize(QSize(16777215, 22));
        horizontalLayout_4 = new QHBoxLayout(widgetLabelStreaming);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 0, 4, 0);
        label_6 = new QLabel(widgetLabelStreaming);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));
        label_6->setFont(font);

        horizontalLayout_4->addWidget(label_6);

        buttonHideStreamingFrame = new QPushButton(widgetLabelStreaming);
        buttonHideStreamingFrame->setObjectName(QString::fromUtf8("buttonHideStreamingFrame"));
        sizePolicy.setHeightForWidth(buttonHideStreamingFrame->sizePolicy().hasHeightForWidth());
        buttonHideStreamingFrame->setSizePolicy(sizePolicy);
        buttonHideStreamingFrame->setMinimumSize(QSize(18, 18));
        buttonHideStreamingFrame->setMaximumSize(QSize(18, 18));
        buttonHideStreamingFrame->setFont(font1);
        buttonHideStreamingFrame->setFocusPolicy(Qt::NoFocus);
        buttonHideStreamingFrame->setFlat(true);

        horizontalLayout_4->addWidget(buttonHideStreamingFrame);


        leftLayout->addWidget(widgetLabelStreaming);

        frameStreaming = new QFrame(leftMainWindowFrame);
        frameStreaming->setObjectName(QString::fromUtf8("frameStreaming"));
        frameStreaming->setFrameShape(QFrame::NoFrame);
        frameStreaming->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameStreaming);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 4, 6, 4);
        streamingFrameTop = new QFrame(frameStreaming);
        streamingFrameTop->setObjectName(QString::fromUtf8("streamingFrameTop"));
        horizontalLayout_7 = new QHBoxLayout(streamingFrameTop);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        comboStreaming = new QComboBox(streamingFrameTop);
        comboStreaming->setObjectName(QString::fromUtf8("comboStreaming"));
        comboStreaming->setEnabled(false);
        comboStreaming->setMinimumSize(QSize(0, 22));
        comboStreaming->setEditable(false);

        horizontalLayout_7->addWidget(comboStreaming);

        buttonStreamingOptions = new QPushButton(streamingFrameTop);
        buttonStreamingOptions->setObjectName(QString::fromUtf8("buttonStreamingOptions"));
        buttonStreamingOptions->setEnabled(true);
        buttonStreamingOptions->setMinimumSize(QSize(24, 24));
        buttonStreamingOptions->setMaximumSize(QSize(24, 24));
        buttonStreamingOptions->setIconSize(QSize(16, 16));
        buttonStreamingOptions->setFlat(true);

        horizontalLayout_7->addWidget(buttonStreamingOptions);

        horizontalLayout_7->setStretch(0, 1);

        verticalLayout_3->addWidget(streamingFrameTop);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, -1, 0, -1);
        buttonStreamingStart = new QPushButton(frameStreaming);
        buttonStreamingStart->setObjectName(QString::fromUtf8("buttonStreamingStart"));
        buttonStreamingStart->setEnabled(false);
        sizePolicy.setHeightForWidth(buttonStreamingStart->sizePolicy().hasHeightForWidth());
        buttonStreamingStart->setSizePolicy(sizePolicy);
        buttonStreamingStart->setMinimumSize(QSize(50, 30));
        buttonStreamingStart->setMaximumSize(QSize(50, 30));
        QFont font2;
        font2.setPointSize(9);
        buttonStreamingStart->setFont(font2);
        buttonStreamingStart->setFocusPolicy(Qt::NoFocus);
        buttonStreamingStart->setCheckable(true);

        horizontalLayout_8->addWidget(buttonStreamingStart);

        buttonStreamingPause = new QPushButton(frameStreaming);
        buttonStreamingPause->setObjectName(QString::fromUtf8("buttonStreamingPause"));
        buttonStreamingPause->setEnabled(false);
        buttonStreamingPause->setMinimumSize(QSize(26, 26));
        buttonStreamingPause->setMaximumSize(QSize(26, 26));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setStyleStrategy(QFont::PreferAntialias);
        buttonStreamingPause->setFont(font3);
        buttonStreamingPause->setFocusPolicy(Qt::NoFocus);
        buttonStreamingPause->setIconSize(QSize(27, 22));
        buttonStreamingPause->setCheckable(true);
        buttonStreamingPause->setFlat(true);

        horizontalLayout_8->addWidget(buttonStreamingPause);

        labelStreamingAnimation = new QLabel(frameStreaming);
        labelStreamingAnimation->setObjectName(QString::fromUtf8("labelStreamingAnimation"));
        labelStreamingAnimation->setMinimumSize(QSize(26, 26));
        labelStreamingAnimation->setMaximumSize(QSize(26, 26));

        horizontalLayout_8->addWidget(labelStreamingAnimation);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        label_3 = new QLabel(frameStreaming);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ubuntu"));
        label_3->setFont(font4);

        horizontalLayout_8->addWidget(label_3);

        streamingSpinBox = new QSpinBox(frameStreaming);
        streamingSpinBox->setObjectName(QString::fromUtf8("streamingSpinBox"));
        streamingSpinBox->setMinimumSize(QSize(0, 26));
        streamingSpinBox->setMaximumSize(QSize(16777215, 26));
        streamingSpinBox->setFocusPolicy(Qt::ClickFocus);
        streamingSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        streamingSpinBox->setAccelerated(true);
        streamingSpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        streamingSpinBox->setMinimum(5);
        streamingSpinBox->setMaximum(100);
        streamingSpinBox->setValue(30);

        horizontalLayout_8->addWidget(streamingSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_8);


        leftLayout->addWidget(frameStreaming);

        widgetLabelPublishers = new QWidget(leftMainWindowFrame);
        widgetLabelPublishers->setObjectName(QString::fromUtf8("widgetLabelPublishers"));
        widgetLabelPublishers->setMinimumSize(QSize(0, 22));
        widgetLabelPublishers->setMaximumSize(QSize(16777215, 22));
        horizontalLayout_9 = new QHBoxLayout(widgetLabelPublishers);
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, 4, 0);
        label_8 = new QLabel(widgetLabelPublishers);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_9->addWidget(label_8);

        buttonHidePublishersFrame = new QPushButton(widgetLabelPublishers);
        buttonHidePublishersFrame->setObjectName(QString::fromUtf8("buttonHidePublishersFrame"));
        sizePolicy.setHeightForWidth(buttonHidePublishersFrame->sizePolicy().hasHeightForWidth());
        buttonHidePublishersFrame->setSizePolicy(sizePolicy);
        buttonHidePublishersFrame->setMinimumSize(QSize(18, 18));
        buttonHidePublishersFrame->setMaximumSize(QSize(18, 18));
        buttonHidePublishersFrame->setFont(font1);
        buttonHidePublishersFrame->setFocusPolicy(Qt::NoFocus);
        buttonHidePublishersFrame->setFlat(true);

        horizontalLayout_9->addWidget(buttonHidePublishersFrame);


        leftLayout->addWidget(widgetLabelPublishers);

        framePublishers = new QFrame(leftMainWindowFrame);
        framePublishers->setObjectName(QString::fromUtf8("framePublishers"));
        framePublishers->setFrameShape(QFrame::NoFrame);
        framePublishers->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(framePublishers);
        horizontalLayout_10->setSpacing(4);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(6, 4, 6, 4);
        layoutPublishers = new QGridLayout();
        layoutPublishers->setSpacing(6);
        layoutPublishers->setObjectName(QString::fromUtf8("layoutPublishers"));
        layoutPublishers->setHorizontalSpacing(2);
        layoutPublishers->setVerticalSpacing(4);

        horizontalLayout_10->addLayout(layoutPublishers);


        leftLayout->addWidget(framePublishers);

        widgetLabelTimeseries = new QWidget(leftMainWindowFrame);
        widgetLabelTimeseries->setObjectName(QString::fromUtf8("widgetLabelTimeseries"));
        widgetLabelTimeseries->setMinimumSize(QSize(0, 22));
        widgetLabelTimeseries->setMaximumSize(QSize(16777215, 22));
        verticalLayout_7 = new QVBoxLayout(widgetLabelTimeseries);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(9, 0, 9, 0);
        label_7 = new QLabel(widgetLabelTimeseries);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        verticalLayout_7->addWidget(label_7);


        leftLayout->addWidget(widgetLabelTimeseries);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        leftLayout->addItem(verticalSpacer_2);

        mainSplitter->addWidget(leftMainWindowFrame);
        plottingArea = new QWidget(mainSplitter);
        plottingArea->setObjectName(QString::fromUtf8("plottingArea"));
        verticalLayout_2 = new QVBoxLayout(plottingArea);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetStack = new QStackedWidget(plottingArea);
        widgetStack->setObjectName(QString::fromUtf8("widgetStack"));
        widgetStack->setFrameShape(QFrame::NoFrame);
        plotPage = new QWidget();
        plotPage->setObjectName(QString::fromUtf8("plotPage"));
        plottingLayout = new QVBoxLayout(plotPage);
        plottingLayout->setSpacing(4);
        plottingLayout->setContentsMargins(11, 11, 11, 11);
        plottingLayout->setObjectName(QString::fromUtf8("plottingLayout"));
        plottingLayout->setContentsMargins(10, 10, 10, 10);
        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        plottingLayout->addItem(verticalSpacer);

        widgetTimescale = new QWidget(plotPage);
        widgetTimescale->setObjectName(QString::fromUtf8("widgetTimescale"));
        widgetTimescale->setMaximumSize(QSize(16777215, 40));
        layoutTimescale = new QHBoxLayout(widgetTimescale);
        layoutTimescale->setSpacing(6);
        layoutTimescale->setContentsMargins(11, 11, 11, 11);
        layoutTimescale->setObjectName(QString::fromUtf8("layoutTimescale"));
        layoutTimescale->setContentsMargins(0, 0, 0, 0);
        displayTime = new QLineEdit(widgetTimescale);
        displayTime->setObjectName(QString::fromUtf8("displayTime"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(displayTime->sizePolicy().hasHeightForWidth());
        displayTime->setSizePolicy(sizePolicy2);
        displayTime->setMinimumSize(QSize(80, 30));
        displayTime->setMaximumSize(QSize(200, 30));
        QFont font5;
        font5.setPointSize(11);
        displayTime->setFont(font5);
        displayTime->setAlignment(Qt::AlignCenter);
        displayTime->setReadOnly(true);

        layoutTimescale->addWidget(displayTime);

        widgetPlay = new QWidget(widgetTimescale);
        widgetPlay->setObjectName(QString::fromUtf8("widgetPlay"));
        horizontalLayout_6 = new QHBoxLayout(widgetPlay);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        playbackLoop = new QPushButton(widgetPlay);
        playbackLoop->setObjectName(QString::fromUtf8("playbackLoop"));
        playbackLoop->setMinimumSize(QSize(28, 28));
        playbackLoop->setMaximumSize(QSize(28, 28));
        playbackLoop->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/style_light/loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        playbackLoop->setIcon(icon3);
        playbackLoop->setIconSize(QSize(22, 22));
        playbackLoop->setCheckable(true);
        playbackLoop->setFlat(true);

        horizontalLayout_6->addWidget(playbackLoop);

        pushButtonPlay = new QPushButton(widgetPlay);
        pushButtonPlay->setObjectName(QString::fromUtf8("pushButtonPlay"));
        pushButtonPlay->setMinimumSize(QSize(28, 28));
        pushButtonPlay->setMaximumSize(QSize(28, 28));
        pushButtonPlay->setFocusPolicy(Qt::NoFocus);
        pushButtonPlay->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"    background-color: transparent;\n"
"    border:  0px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/style_light/play_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/style_light/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButtonPlay->setIcon(icon4);
        pushButtonPlay->setIconSize(QSize(26, 26));
        pushButtonPlay->setCheckable(true);
        pushButtonPlay->setChecked(false);
        pushButtonPlay->setFlat(true);

        horizontalLayout_6->addWidget(pushButtonPlay);

        timeSlider = new RealSlider(widgetPlay);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(timeSlider->sizePolicy().hasHeightForWidth());
        timeSlider->setSizePolicy(sizePolicy3);
        timeSlider->setMinimumSize(QSize(0, 40));
        timeSlider->setMaximumSize(QSize(16777215, 40));
        timeSlider->setFocusPolicy(Qt::WheelFocus);
        timeSlider->setMaximum(0);
        timeSlider->setOrientation(Qt::Horizontal);
        timeSlider->setTickPosition(QSlider::NoTicks);
        timeSlider->setTickInterval(1);

        horizontalLayout_6->addWidget(timeSlider);


        layoutTimescale->addWidget(widgetPlay);

        widgetButtons = new QWidget(widgetTimescale);
        widgetButtons->setObjectName(QString::fromUtf8("widgetButtons"));
        widgetButtons->setMinimumSize(QSize(0, 34));
        widgetButtons->setMaximumSize(QSize(16777215, 34));
        horizontalLayout_5 = new QHBoxLayout(widgetButtons);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 6);
        pushButtonZoomOut = new QPushButton(widgetButtons);
        pushButtonZoomOut->setObjectName(QString::fromUtf8("pushButtonZoomOut"));
        pushButtonZoomOut->setMinimumSize(QSize(28, 28));
        pushButtonZoomOut->setMaximumSize(QSize(28, 28));
        pushButtonZoomOut->setFocusPolicy(Qt::NoFocus);
        pushButtonZoomOut->setIconSize(QSize(24, 24));
        pushButtonZoomOut->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonZoomOut);

        pushButtonTimeTracker = new QPushButton(widgetButtons);
        pushButtonTimeTracker->setObjectName(QString::fromUtf8("pushButtonTimeTracker"));
        pushButtonTimeTracker->setMinimumSize(QSize(28, 28));
        pushButtonTimeTracker->setMaximumSize(QSize(28, 28));
        pushButtonTimeTracker->setFocusPolicy(Qt::NoFocus);
        pushButtonTimeTracker->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/style_light/line_tracker_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonTimeTracker->setIcon(icon5);
        pushButtonTimeTracker->setIconSize(QSize(24, 24));
        pushButtonTimeTracker->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonTimeTracker);

        pushButtonLegend = new QPushButton(widgetButtons);
        pushButtonLegend->setObjectName(QString::fromUtf8("pushButtonLegend"));
        pushButtonLegend->setMinimumSize(QSize(28, 28));
        pushButtonLegend->setMaximumSize(QSize(28, 28));
        pushButtonLegend->setFocusPolicy(Qt::NoFocus);
        pushButtonLegend->setIconSize(QSize(24, 24));
        pushButtonLegend->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonLegend);

        pushButtonUseDateTime = new QPushButton(widgetButtons);
        pushButtonUseDateTime->setObjectName(QString::fromUtf8("pushButtonUseDateTime"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButtonUseDateTime->sizePolicy().hasHeightForWidth());
        pushButtonUseDateTime->setSizePolicy(sizePolicy4);
        pushButtonUseDateTime->setMinimumSize(QSize(28, 28));
        pushButtonUseDateTime->setMaximumSize(QSize(28, 28));
        pushButtonUseDateTime->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/style_light/datetime.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonUseDateTime->setIcon(icon6);
        pushButtonUseDateTime->setIconSize(QSize(24, 24));
        pushButtonUseDateTime->setCheckable(true);
        pushButtonUseDateTime->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonUseDateTime);

        pushButtonActivateGrid = new QPushButton(widgetButtons);
        pushButtonActivateGrid->setObjectName(QString::fromUtf8("pushButtonActivateGrid"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButtonActivateGrid->sizePolicy().hasHeightForWidth());
        pushButtonActivateGrid->setSizePolicy(sizePolicy5);
        pushButtonActivateGrid->setMinimumSize(QSize(28, 28));
        pushButtonActivateGrid->setMaximumSize(QSize(28, 28));
        pushButtonActivateGrid->setFocusPolicy(Qt::NoFocus);
        pushButtonActivateGrid->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/style_light/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonActivateGrid->setIcon(icon7);
        pushButtonActivateGrid->setIconSize(QSize(24, 24));
        pushButtonActivateGrid->setCheckable(true);
        pushButtonActivateGrid->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonActivateGrid);

        pushButtonLink = new QPushButton(widgetButtons);
        pushButtonLink->setObjectName(QString::fromUtf8("pushButtonLink"));
        pushButtonLink->setMinimumSize(QSize(28, 28));
        pushButtonLink->setMaximumSize(QSize(28, 28));
        pushButtonLink->setFocusPolicy(Qt::NoFocus);
        pushButtonLink->setIconSize(QSize(24, 24));
        pushButtonLink->setCheckable(true);
        pushButtonLink->setChecked(false);
        pushButtonLink->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonLink);

        pushButtonRemoveTimeOffset = new QPushButton(widgetButtons);
        pushButtonRemoveTimeOffset->setObjectName(QString::fromUtf8("pushButtonRemoveTimeOffset"));
        sizePolicy4.setHeightForWidth(pushButtonRemoveTimeOffset->sizePolicy().hasHeightForWidth());
        pushButtonRemoveTimeOffset->setSizePolicy(sizePolicy4);
        pushButtonRemoveTimeOffset->setMinimumSize(QSize(28, 28));
        pushButtonRemoveTimeOffset->setMaximumSize(QSize(28, 28));
        pushButtonRemoveTimeOffset->setFocusPolicy(Qt::NoFocus);
        pushButtonRemoveTimeOffset->setIconSize(QSize(24, 24));
        pushButtonRemoveTimeOffset->setCheckable(true);
        pushButtonRemoveTimeOffset->setChecked(false);
        pushButtonRemoveTimeOffset->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonRemoveTimeOffset);

        pushButtonRatio = new QPushButton(widgetButtons);
        pushButtonRatio->setObjectName(QString::fromUtf8("pushButtonRatio"));
        sizePolicy1.setHeightForWidth(pushButtonRatio->sizePolicy().hasHeightForWidth());
        pushButtonRatio->setSizePolicy(sizePolicy1);
        pushButtonRatio->setMinimumSize(QSize(28, 28));
        pushButtonRatio->setMaximumSize(QSize(28, 28));
        pushButtonRatio->setFocusPolicy(Qt::NoFocus);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/style_light/ratio.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRatio->setIcon(icon8);
        pushButtonRatio->setIconSize(QSize(24, 24));
        pushButtonRatio->setCheckable(true);
        pushButtonRatio->setChecked(false);
        pushButtonRatio->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonRatio);


        layoutTimescale->addWidget(widgetButtons);

        frame = new QFrame(widgetTimescale);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16777215, 40));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 2, 4, 2);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        label->setFont(font6);

        horizontalLayout->addWidget(label);

        playbackRate = new QDoubleSpinBox(frame);
        playbackRate->setObjectName(QString::fromUtf8("playbackRate"));
        playbackRate->setMinimumSize(QSize(0, 30));
        playbackRate->setMaximumSize(QSize(16777215, 30));
        playbackRate->setFocusPolicy(Qt::WheelFocus);
        playbackRate->setDecimals(1);
        playbackRate->setMinimum(0.100000000000000);
        playbackRate->setMaximum(10.000000000000000);
        playbackRate->setSingleStep(0.100000000000000);
        playbackRate->setValue(1.000000000000000);

        horizontalLayout->addWidget(playbackRate);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font6);

        horizontalLayout->addWidget(label_2);

        playbackStep = new QDoubleSpinBox(frame);
        playbackStep->setObjectName(QString::fromUtf8("playbackStep"));
        playbackStep->setMinimumSize(QSize(0, 30));
        playbackStep->setFocusPolicy(Qt::WheelFocus);
        playbackStep->setMaximum(10.000000000000000);
        playbackStep->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(playbackStep);


        layoutTimescale->addWidget(frame);


        plottingLayout->addWidget(widgetTimescale);

        widgetStack->addWidget(plotPage);
        formulaPage = new QWidget();
        formulaPage->setObjectName(QString::fromUtf8("formulaPage"));
        widgetStack->addWidget(formulaPage);

        verticalLayout_2->addWidget(widgetStack);

        mainSplitter->addWidget(plottingArea);

        verticalLayout->addWidget(mainSplitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new MenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1248, 26));
        menuBar->setMinimumSize(QSize(0, 25));
        menuBar->setFont(font5);
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(false);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClearBuffer);
        menuFile->addAction(actionDeleteAllData);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionCheatsheet);
        menuHelp->addAction(actionSupportPlotJuggler);
        menuHelp->addAction(actionShare_the_love);
        menuHelp->addAction(actionReportBug);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuTools->addSeparator();
        menuTools->addAction(actionLoadStyleSheet);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PlotJuggler", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionReportBug->setText(QApplication::translate("MainWindow", "Report a problem", nullptr));
#ifndef QT_NO_TOOLTIP
        actionReportBug->setToolTip(QApplication::translate("MainWindow", "Report issue on GitHub", nullptr));
#endif // QT_NO_TOOLTIP
        actionClearBuffer->setText(QApplication::translate("MainWindow", "Clear data points", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClearBuffer->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionCheatsheet->setText(QApplication::translate("MainWindow", "Cheatsheet", nullptr));
        actionSupportPlotJuggler->setText(QApplication::translate("MainWindow", "Support PlotJuggler", nullptr));
        actionClearRecentData->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionClearRecentLayout->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        actionDeleteAllData->setText(QApplication::translate("MainWindow", "Delete everything", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDeleteAllData->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences...", nullptr));
        actionShare_the_love->setText(QApplication::translate("MainWindow", "Share the love", nullptr));
        actionLoadStyleSheet->setText(QApplication::translate("MainWindow", "Load StyleSheet", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "File", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonHideFileFrame->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hide/Show</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonHideFileFrame->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Data:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonLoadDatafile->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Load data from file</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonLoadDatafile->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonRecentData->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Recent data files</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonRecentData->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Layout:", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonLoadLayout->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Load data and window/plots layout</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonLoadLayout->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonSaveLayout->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Save window/plots layout</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonSaveLayout->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonRecentLayout->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Recent layout files</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonRecentLayout->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Streaming", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonHideStreamingFrame->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hide/Show</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonHideStreamingFrame->setText(QApplication::translate("MainWindow", "-", nullptr));
#ifndef QT_NO_TOOLTIP
        comboStreaming->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Select the streaming plugin.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        buttonStreamingOptions->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Plugin specific options...</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonStreamingOptions->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonStreamingStart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Start/Stop the streaming plugin.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonStreamingStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonStreamingPause->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Start/Stop streaming</p><p>( <span style=\" font-weight:600;\">CTRL+Space </span>)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonStreamingPause->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelStreamingAnimation->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Blinks when new messages are being received</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelStreamingAnimation->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Buffer:", nullptr));
#ifndef QT_NO_TOOLTIP
        streamingSpinBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Size of the  Buffer (seconds) during streaming.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        streamingSpinBox->setSuffix(QString());
        label_8->setText(QApplication::translate("MainWindow", "Publishers", nullptr));
#ifndef QT_NO_TOOLTIP
        buttonHidePublishersFrame->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hide/Show</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        buttonHidePublishersFrame->setText(QApplication::translate("MainWindow", "-", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Timeseries List", nullptr));
#ifndef QT_NO_TOOLTIP
        playbackLoop->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Loop</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        playbackLoop->setText(QApplication::translate("MainWindow", "lo", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonPlay->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Start/Stop player</p><p>( <span style=\" font-weight:600;\">Space </span>)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonPlay->setText(QApplication::translate("MainWindow", "pl", nullptr));
        pushButtonZoomOut->setText(QApplication::translate("MainWindow", "zo", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonTimeTracker->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Change the amount of information displayed with the vertical TimeTracker</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonTimeTracker->setText(QApplication::translate("MainWindow", "tt", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonLegend->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hide/Mode/show the Legend</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonLegend->setText(QApplication::translate("MainWindow", "lg", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonUseDateTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If active, visualize the current time as DateTime ( YYYY/MM/DD:m::s::ms)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonUseDateTime->setText(QApplication::translate("MainWindow", "dt", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonActivateGrid->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Show/Hide the grid</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonActivateGrid->setText(QApplication::translate("MainWindow", "gr", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonLink->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When active, the zoom of all the plots is synchronized.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonLink->setText(QApplication::translate("MainWindow", "ln", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonRemoveTimeOffset->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If checked, an offset will be applied to each timeseries to ensure that the first time instant is equal to zero.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonRemoveTimeOffset->setText(QApplication::translate("MainWindow", "t0", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonRatio->setToolTip(QApplication::translate("MainWindow", "Keep the aspect ratio of XY plots", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonRatio->setText(QApplication::translate("MainWindow", "ra", nullptr));
        label->setText(QApplication::translate("MainWindow", "Speed:", nullptr));
#ifndef QT_NO_TOOLTIP
        playbackRate->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Rate (speed multiplier)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MainWindow", "Step size:", nullptr));
#ifndef QT_NO_TOOLTIP
        playbackStep->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Step size to move the time tracker (use the LEFT/RIGHT arrows)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        menuFile->setToolTip(QApplication::translate("MainWindow", "File Menu (ALT+F)", nullptr));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "App", nullptr));
#ifndef QT_NO_TOOLTIP
        menuHelp->setToolTip(QApplication::translate("MainWindow", "Help (ALT+H)", nullptr));
#endif // QT_NO_TOOLTIP
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
