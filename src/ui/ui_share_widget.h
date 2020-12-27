/********************************************************************************
** Form generated from reading UI file 'share_widgetFIvsYY.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SHARE_WIDGETFIVSYY_H
#define SHARE_WIDGETFIVSYY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wgtShare
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblName;
    QHBoxLayout *horizontalLayout;
    QLabel *lblSize;
    QSpacerItem *horizontalSpacer;
    QLabel *lblSpeed;
    QSpacerItem *verticalSpacer;
    QProgressBar *progressBar;
    QLabel *label_3;
    QLabel *label;
    QPushButton *btnCancel;
    QPushButton *btnRetry;
    QLabel *label_2;
    QFrame *line;

    void setupUi(QWidget *wgtShare)
    {
        if (wgtShare->objectName().isEmpty())
            wgtShare->setObjectName(QString::fromUtf8("wgtShare"));
        wgtShare->resize(496, 139);
        verticalLayoutWidget = new QWidget(wgtShare);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 10, 301, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lblName = new QLabel(verticalLayoutWidget);
        lblName->setObjectName(QString::fromUtf8("lblName"));
        lblName->setMaximumSize(QSize(16777215, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblName->setFont(font);

        verticalLayout->addWidget(lblName);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblSize = new QLabel(verticalLayoutWidget);
        lblSize->setObjectName(QString::fromUtf8("lblSize"));
        lblSize->setMaximumSize(QSize(16777215, 18));
        QFont font1;
        font1.setItalic(true);
        lblSize->setFont(font1);

        horizontalLayout->addWidget(lblSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblSpeed = new QLabel(verticalLayoutWidget);
        lblSpeed->setObjectName(QString::fromUtf8("lblSpeed"));
        lblSpeed->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(lblSpeed);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 23));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setFormat(QString::fromUtf8("%p%"));

        verticalLayout->addWidget(progressBar);

        label_3 = new QLabel(wgtShare);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 58, 18));
        label = new QLabel(wgtShare);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 58, 18));
        btnCancel = new QPushButton(wgtShare);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(400, 80, 84, 24));
        btnRetry = new QPushButton(wgtShare);
        btnRetry->setObjectName(QString::fromUtf8("btnRetry"));
        btnRetry->setEnabled(true);
        btnRetry->setGeometry(QRect(310, 80, 84, 24));
        label_2 = new QLabel(wgtShare);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 80, 101, 18));
        line = new QFrame(wgtShare);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(136, 10, 20, 101));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(wgtShare);

        QMetaObject::connectSlotsByName(wgtShare);
    } // setupUi

    void retranslateUi(QWidget *wgtShare)
    {
        wgtShare->setWindowTitle(QCoreApplication::translate("wgtShare", "Share Widget", nullptr));
        lblName->setText(QCoreApplication::translate("wgtShare", "Ava.2020.BluRay.720p.DreamMovie.mp4", nullptr));
        lblSize->setText(QCoreApplication::translate("wgtShare", "1.34 gb", nullptr));
        lblSpeed->setText(QCoreApplication::translate("wgtShare", "8.34 mb/s", nullptr));
        label_3->setText(QCoreApplication::translate("wgtShare", "Sending:", nullptr));
        label->setText(QCoreApplication::translate("wgtShare", "TextLabel", nullptr));
        btnCancel->setText(QCoreApplication::translate("wgtShare", "Cancel", nullptr));
        btnRetry->setText(QCoreApplication::translate("wgtShare", "Retry", nullptr));
        label_2->setText(QCoreApplication::translate("wgtShare", "<html><head/><body><p><span style=\" color:#ff0000;\">Connection lost</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wgtShare: public Ui_wgtShare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SHARE_WIDGETFIVSYY_H
