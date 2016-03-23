#include "test_ui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_ui w;

	test_ui t;

	t.show();
	w.show();
	return a.exec();
}
