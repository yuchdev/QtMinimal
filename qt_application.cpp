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

void QtMinimalApplication::initWidgets()
{
    auto* layout = new QVBoxLayout;
    layout->addWidget(tabLayout(this));
    layout->setMargin(3);

    this->addTab(tabLayout(this), "Tab One");
    this->addTab(tabLayout(this), "Tab Two");

    this->setLayout(layout);
}

QWidget* QtMinimalApplication::tabLayout(QWidget*)
{
    auto* wnd = new QTabWidget;
    auto* box = new QVBoxLayout();


    wnd->setLayout(box);
    return wnd;
}
