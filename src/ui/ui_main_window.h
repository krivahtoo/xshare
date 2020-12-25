/********************************************************************************
** Form generated from reading UI file 'main_windowGrnfmn.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAIN_WINDOWGRNFMN_H
#define MAIN_WINDOWGRNFMN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSend;
    QAction *actQuit;
    QAction *actHistory;
    QAction *actionAbout;
    QAction *actReceive;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabOngoing;
    QWidget *tabReceived;
    QVBoxLayout *verticalLayout;
    QWidget *tabSent;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hzlReceiveSend;
    QPushButton *btnReceive;
    QSpacerItem *hspReceiveSend;
    QPushButton *btnSend;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(388, 373);
        actSend = new QAction(MainWindow);
        actSend->setObjectName(QString::fromUtf8("actSend"));
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        actHistory = new QAction(MainWindow);
        actHistory->setObjectName(QString::fromUtf8("actHistory"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actReceive = new QAction(MainWindow);
        actReceive->setObjectName(QString::fromUtf8("actReceive"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabOngoing = new QWidget();
        tabOngoing->setObjectName(QString::fromUtf8("tabOngoing"));
        tabWidget->addTab(tabOngoing, QString());
        tabReceived = new QWidget();
        tabReceived->setObjectName(QString::fromUtf8("tabReceived"));
        verticalLayout = new QVBoxLayout(tabReceived);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget->addTab(tabReceived, QString());
        tabSent = new QWidget();
        tabSent->setObjectName(QString::fromUtf8("tabSent"));
        verticalLayout_3 = new QVBoxLayout(tabSent);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget->addTab(tabSent, QString());

        verticalLayout_2->addWidget(tabWidget);

        hzlReceiveSend = new QHBoxLayout();
        hzlReceiveSend->setObjectName(QString::fromUtf8("hzlReceiveSend"));
        btnReceive = new QPushButton(centralwidget);
        btnReceive->setObjectName(QString::fromUtf8("btnReceive"));
        btnReceive->setMinimumSize(QSize(0, 51));

        hzlReceiveSend->addWidget(btnReceive);

        hspReceiveSend = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hzlReceiveSend->addItem(hspReceiveSend);

        btnSend = new QPushButton(centralwidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setMinimumSize(QSize(0, 51));

        hzlReceiveSend->addWidget(btnSend);


        verticalLayout_2->addLayout(hzlReceiveSend);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 388, 29));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actSend);
        menuFile->addAction(actReceive);
        menuFile->addAction(actHistory);
        menuFile->addSeparator();
        menuFile->addAction(actQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "xShare", nullptr));
        actSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        actQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actHistory->setText(QCoreApplication::translate("MainWindow", "History", nullptr));
#if QT_CONFIG(shortcut)
        actHistory->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actReceive->setText(QCoreApplication::translate("MainWindow", "Receive", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabOngoing), QCoreApplication::translate("MainWindow", "Ongoing", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabReceived), QCoreApplication::translate("MainWindow", "Received", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSent), QCoreApplication::translate("MainWindow", "Sent", nullptr));
        btnReceive->setText(QCoreApplication::translate("MainWindow", "Receive", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAIN_WINDOWGRNFMN_H
