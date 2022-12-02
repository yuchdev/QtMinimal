#include <ctime>
#include <QApplication>
#include <QtGui>
#include <QWidget>
#include <QStackedWidget>
#include <QScrollArea>
#include "qt_application.h"


int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QtMinimalApplication wnd;

    // Get screen size, and make window twice as smaller
    QRect screen = QGuiApplication::screens()[0]->geometry();
    wnd.resize(screen.width() / 2, screen.height() / 2);
    wnd.show();

    return QApplication::exec();

}