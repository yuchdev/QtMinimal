#pragma once
#include <QWidget>

class QLabel;
class QPushButton;
class ScreenshotWidget;

class QtMinimalApplication : public QWidget
{
    Q_OBJECT
public:

    /// @brief Application constructor, create paths and connects
    explicit QtMinimalApplication(QWidget* parent = nullptr);

    /// @brief Show full-screen screenshotWidget
    void initWidgets();

public slots:


protected:

    /// Create layouts
    QWidget* tabLayout(QWidget* parent);

private:

};
