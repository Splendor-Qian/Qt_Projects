#ifndef TEST_UI_H
#define TEST_UI_H

#include <QtWidgets/QMainWindow>
#include "ui_test_ui.h"

class test_ui : public QMainWindow
{
	Q_OBJECT

public:
	test_ui(QWidget *parent = 0);
	~test_ui();

private:
	Ui::test_uiClass ui;
};

#endif // TEST_UI_H
