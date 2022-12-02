#include <QLayout>
#include <QLabel>
#include <QPushButton>
#include <QTabWidget>
#include <QStandardPaths>
#include <QDir>
#include <QDebug>
#include <iostream>
#include "qt_application.h"

QtMinimalApplication::QtMinimalApplication(QWidget* parent /*= nullptr*/) :
    QWidget(parent)
{
    initWidgets();
}

void DiffApplication::initWidgets()
{
    auto* layout = new QVBoxLayout;
    layout->addWidget(tabLayout(this));
    layout->setMargin(3);
    this->setLayout(layout);
}

QWidget* DiffApplication::tabLayout(QWidget*)
{
    auto* wnd = new QTabWidget;
    auto* box = new QVBoxLayout();

    wnd->addTab(firstPictureWgt_, "Tab One");
    wnd->addTab(secondPictureWgt_, "Tab Two");

    wnd->setLayout(box);
    return wnd;
}
