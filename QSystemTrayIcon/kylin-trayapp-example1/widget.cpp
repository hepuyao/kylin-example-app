#include "widget.h"
#include "ui_widget.h"

//Qt
#include <QIcon>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mTrayIcon = new QSystemTrayIcon(this);
    mTrayIcon->setVisible(false);
    trayIconMenu = new QMenu(this);
    mTrayIcon->setIcon(QIcon::fromTheme("firefox"));
    mTrayIcon->show();
    mTrayIcon->setContextMenu(trayIconMenu);
}

Widget::~Widget()
{
    delete ui;
}

