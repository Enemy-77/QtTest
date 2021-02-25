#include "signalmapperwidget.h"
#include "ui_signalmapperwidget.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QSignalMapper>
#include <QGridLayout>
#include <QPushButton>

SignalMapperWidget::SignalMapperWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SignalMapperWidget)
{
    ui->setupUi(this);

    QVBoxLayout* vLayout = new QVBoxLayout(this);

    QLineEdit *edit = new QLineEdit;
    edit->setAlignment(Qt::AlignRight);
    vLayout->addWidget(edit);

    QSignalMapper* signalmapper = new QSignalMapper(this);
    QGridLayout* gridLayout = new QGridLayout;
    for(int i = 0 ; i < 10; ++i)
    {
        QString txt = QString::number(i);
        QPushButton *button = new QPushButton(txt);
        connect(button, SIGNAL(clicked()), signalmapper, SLOT(map()));
        signalmapper->setMapping(button, txt);
        gridLayout->addWidget(button, i / 3, i % 3);
    }

    connect(signalmapper, SIGNAL(mapped(QString)), edit, SLOT(setText(QString)));

    vLayout->addLayout(gridLayout);
    resize(200, 200);
}

SignalMapperWidget::~SignalMapperWidget()
{
    delete ui;
}

