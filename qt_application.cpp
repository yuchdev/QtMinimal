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
    auto* wnd = new QTabWidget;
    auto* layout = new QVBoxLayout;
    layout->addWidget(tabLayout(this));
    layout->setMargin(3);

    wnd->addTab(tabLayout(this), "Tab One");
    wnd->addTab(tabLayout(this), "Tab Two");

    this->setLayout(layout);
}

QWidget* QtMinimalApplication::tabLayout(QWidget*)
{
    auto* box = new QVBoxLayout();
    auto* widget = new QWidget();
    auto* label = new QLabel("Label");
    auto* button = new QPushButton("Button");
    box->addWidget(label);
    box->addWidget(button);
    widget->setLayout(box);
    return widget;
}
