#include "test_ui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_ui w;
	w.show();
	//测试更改，看是否能同步到服务器
	return a.exec();
}
