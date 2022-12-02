#include <ctime>
#include <QApplication>
#include <QtGui>
#include <QWidget>
#include <QStackedWidget>
#include <QScrollArea>


inline int show_scroll(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget* wgt = new QWidget;
    QScrollArea sa;

    QPixmap pix("manule.jpg");
    QPalette pal;
    pal.setBrush(wgt->backgroundRole(), QBrush(pix));

    wgt->setPalette(pal);
    wgt->setAutoFillBackground(true);
    wgt->setFixedSize(pix.width(), pix.height());

    // QScrollArea is a visible window. Widget is a "full-size" partially visible
    sa.setWidget(wgt);
    sa.resize(300, 150);
    sa.show();

    return app.exec();
}


int main(int argc, char **argv)
{
    return show_scroll(argc, argv);
}