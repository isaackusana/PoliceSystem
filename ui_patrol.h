/********************************************************************************
** Form generated from reading UI file 'patrol.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATROL_H
#define UI_PATROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Patrol
{
public:
    QLabel *label_22;
    QLabel *label_14;
    QSplitter *splitter;
    QPushButton *pushButton_2;
    QPushButton *save;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QLineEdit *location_name;
    QLabel *label_10;
    QLineEdit *location_add;
    QLabel *label_11;
    QLineEdit *city;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_12;
    QLineEdit *date;
    QLabel *label_13;
    QLineEdit *time;
    QLabel *label_7;
    QLineEdit *time_to;
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *batch_no;

    void setupUi(QDialog *Patrol)
    {
        if (Patrol->objectName().isEmpty())
            Patrol->setObjectName(QStringLiteral("Patrol"));
        Patrol->resize(719, 434);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Patrol->setPalette(palette);
        Patrol->setStyleSheet(QLatin1String("Patrol{\n"
"background-image:url(:/new/photos/court/police.jpg)\n"
"}"));
        label_22 = new QLabel(Patrol);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(270, 0, 171, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_22->setPalette(palette1);
        QFont font;
        font.setPointSize(16);
        label_22->setFont(font);
        label_14 = new QLabel(Patrol);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(260, 150, 241, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_14->setPalette(palette2);
        QFont font1;
        font1.setPointSize(14);
        label_14->setFont(font1);
        splitter = new QSplitter(Patrol);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(560, 400, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);
        save = new QPushButton(splitter);
        save->setObjectName(QStringLiteral("save"));
        splitter->addWidget(save);
        widget = new QWidget(Patrol);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(53, 226, 659, 111));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_9->setPalette(palette3);
        QFont font2;
        font2.setPointSize(10);
        label_9->setFont(font2);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        location_name = new QLineEdit(widget);
        location_name->setObjectName(QStringLiteral("location_name"));

        gridLayout_2->addWidget(location_name, 0, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_10->setPalette(palette4);
        label_10->setFont(font2);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        location_add = new QLineEdit(widget);
        location_add->setObjectName(QStringLiteral("location_add"));

        gridLayout_2->addWidget(location_add, 1, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_11->setPalette(palette5);
        label_11->setFont(font2);

        gridLayout_2->addWidget(label_11, 1, 2, 1, 1);

        city = new QLineEdit(widget);
        city->setObjectName(QStringLiteral("city"));

        gridLayout_2->addWidget(city, 1, 3, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_3->setPalette(palette6);
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_4->setPalette(palette7);
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 2, 3, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_12->setPalette(palette8);
        label_12->setFont(font2);

        gridLayout_2->addWidget(label_12, 3, 0, 1, 1);

        date = new QLineEdit(widget);
        date->setObjectName(QStringLiteral("date"));

        gridLayout_2->addWidget(date, 3, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_13->setPalette(palette9);
        label_13->setFont(font2);

        gridLayout_2->addWidget(label_13, 3, 2, 1, 1);

        time = new QLineEdit(widget);
        time->setObjectName(QStringLiteral("time"));

        gridLayout_2->addWidget(time, 3, 3, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_7->setPalette(palette10);
        label_7->setFont(font2);

        gridLayout_2->addWidget(label_7, 3, 4, 1, 1);

        time_to = new QLineEdit(widget);
        time_to->setObjectName(QStringLiteral("time_to"));

        gridLayout_2->addWidget(time_to, 3, 5, 1, 1);

        splitter_2 = new QSplitter(Patrol);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(231, 52, 231, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label->setPalette(palette11);
        label->setFont(font2);
        splitter_2->addWidget(label);
        batch_no = new QLineEdit(splitter_2);
        batch_no->setObjectName(QStringLiteral("batch_no"));
        splitter_2->addWidget(batch_no);

        retranslateUi(Patrol);

        QMetaObject::connectSlotsByName(Patrol);
    } // setupUi

    void retranslateUi(QDialog *Patrol)
    {
        Patrol->setWindowTitle(QApplication::translate("Patrol", "Dialog", Q_NULLPTR));
        label_22->setText(QApplication::translate("Patrol", "Patrol Case", Q_NULLPTR));
        label_14->setText(QApplication::translate("Patrol", "Area Information ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Patrol", "Back", Q_NULLPTR));
        save->setText(QApplication::translate("Patrol", "Save", Q_NULLPTR));
        label_9->setText(QApplication::translate("Patrol", "Loc.Name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Patrol", "Loc.Add:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Patrol", "City:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Patrol", "format(dd-mm-yy)", Q_NULLPTR));
        label_4->setText(QApplication::translate("Patrol", "format(hh-mm)", Q_NULLPTR));
        label_12->setText(QApplication::translate("Patrol", "Date to patrol:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Patrol", "From (Time): ", Q_NULLPTR));
        label_7->setText(QApplication::translate("Patrol", "To (Time):", Q_NULLPTR));
        label->setText(QApplication::translate("Patrol", "Batch NO:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Patrol: public Ui_Patrol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATROL_H
