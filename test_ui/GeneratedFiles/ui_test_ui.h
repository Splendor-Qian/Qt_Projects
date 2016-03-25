/********************************************************************************
** Form generated from reading UI file 'test_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_UI_H
#define UI_TEST_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_test_uiClass
{
public:
    QWidget *centralWidget;
    QwtPlot *qwtPlot;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QFrame *line;
    QFrame *line_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_uiClass)
    {
        if (test_uiClass->objectName().isEmpty())
            test_uiClass->setObjectName(QStringLiteral("test_uiClass"));
        test_uiClass->resize(1000, 600);
        test_uiClass->setMinimumSize(QSize(1000, 600));
        test_uiClass->setMaximumSize(QSize(1000, 600));
        centralWidget = new QWidget(test_uiClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qwtPlot = new QwtPlot(centralWidget);
        qwtPlot->setObjectName(QStringLiteral("qwtPlot"));
        qwtPlot->setGeometry(QRect(690, 420, 300, 150));
        qwtPlot->setFrameShape(QFrame::NoFrame);
        QBrush brush(QColor(0, 0, 0, 123));
        brush.setStyle(Qt::SolidPattern);
        qwtPlot->setCanvasBackground(brush);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(680, 340, 162, 45));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_3);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(670, 390, 321, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(660, 10, 20, 571));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        test_uiClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(test_uiClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_uiClass->setStatusBar(statusBar);

        retranslateUi(test_uiClass);

        QMetaObject::connectSlotsByName(test_uiClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_uiClass)
    {
        test_uiClass->setWindowTitle(QApplication::translate("test_uiClass", "test_ui", 0));
        label->setText(QApplication::translate("test_uiClass", "\345\274\200\345\205\263", 0));
        pushButton_2->setText(QApplication::translate("test_uiClass", "OPEN", 0));
        label_2->setText(QApplication::translate("test_uiClass", "Go\345\217\221\351\200\201\346\240\207\345\277\227\344\275\215", 0));
        pushButton->setText(QApplication::translate("test_uiClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class test_uiClass: public Ui_test_uiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_UI_H
