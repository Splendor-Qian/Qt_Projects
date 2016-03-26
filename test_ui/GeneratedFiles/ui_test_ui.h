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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qwt_plot.h"
#include "qwt_text_label.h"

QT_BEGIN_NAMESPACE

class Ui_test_uiClass
{
public:
    QWidget *centralWidget;
    QwtPlot *qwtPlot;
    QwtTextLabel *TextLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test_uiClass)
    {
        if (test_uiClass->objectName().isEmpty())
            test_uiClass->setObjectName(QStringLiteral("test_uiClass"));
        test_uiClass->resize(790, 588);
        centralWidget = new QWidget(test_uiClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qwtPlot = new QwtPlot(centralWidget);
        qwtPlot->setObjectName(QStringLiteral("qwtPlot"));
        qwtPlot->setGeometry(QRect(190, 150, 400, 200));
        TextLabel = new QwtTextLabel(centralWidget);
        TextLabel->setObjectName(QStringLiteral("TextLabel"));
        TextLabel->setGeometry(QRect(280, 80, 100, 20));
        test_uiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test_uiClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 790, 23));
        test_uiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(test_uiClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        test_uiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(test_uiClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test_uiClass->setStatusBar(statusBar);

        retranslateUi(test_uiClass);

        QMetaObject::connectSlotsByName(test_uiClass);
    } // setupUi

    void retranslateUi(QMainWindow *test_uiClass)
    {
        test_uiClass->setWindowTitle(QApplication::translate("test_uiClass", "test_ui", 0));
        TextLabel->setPlainText(QApplication::translate("test_uiClass", "\346\265\213\350\257\225\346\233\264\346\224\271", 0));
    } // retranslateUi

};

namespace Ui {
    class test_uiClass: public Ui_test_uiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_UI_H
