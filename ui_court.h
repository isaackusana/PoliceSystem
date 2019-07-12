/********************************************************************************
** Form generated from reading UI file 'court.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURT_H
#define UI_COURT_H

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

class Ui_Court
{
public:
    QLabel *label_14;
    QLabel *label_22;
    QSplitter *splitter;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *case_num;
    QLabel *label_6;
    QLineEdit *case_name;
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
    QSplitter *splitter_2;
    QLabel *label;
    QLineEdit *batch_no;

    void setupUi(QDialog *Court)
    {
        if (Court->objectName().isEmpty())
            Court->setObjectName(QStringLiteral("Court"));
        Court->resize(609, 434);
        Court->setStyleSheet(QLatin1String("Court\n"
"{\n"
"background-image:url(:/new/photos/court/court-e1359386733536.jpg)\n"
"}"));
        label_14 = new QLabel(Court);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(240, 160, 181, 16));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(127, 127, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_14->setPalette(palette);
        QFont font;
        font.setPointSize(14);
        label_14->setFont(font);
        label_22 = new QLabel(Court);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(217, 14, 171, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_22->setPalette(palette1);
        QFont font1;
        font1.setPointSize(16);
        label_22->setFont(font1);
        splitter = new QSplitter(Court);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(440, 400, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);
        widget = new QWidget(Court);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(111, 200, 471, 131));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_5->setPalette(palette2);

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        case_num = new QLineEdit(widget);
        case_num->setObjectName(QStringLiteral("case_num"));

        gridLayout_2->addWidget(case_num, 0, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette3);

        gridLayout_2->addWidget(label_6, 0, 2, 1, 2);

        case_name = new QLineEdit(widget);
        case_name->setObjectName(QStringLiteral("case_name"));

        gridLayout_2->addWidget(case_name, 0, 4, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_9->setPalette(palette4);
        QFont font2;
        font2.setPointSize(10);
        label_9->setFont(font2);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        location_name = new QLineEdit(widget);
        location_name->setObjectName(QStringLiteral("location_name"));

        gridLayout_2->addWidget(location_name, 1, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_10->setPalette(palette5);
        label_10->setFont(font2);

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        location_add = new QLineEdit(widget);
        location_add->setObjectName(QStringLiteral("location_add"));

        gridLayout_2->addWidget(location_add, 2, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_11->setPalette(palette6);
        label_11->setFont(font2);

        gridLayout_2->addWidget(label_11, 2, 2, 1, 1);

        city = new QLineEdit(widget);
        city->setObjectName(QStringLiteral("city"));

        gridLayout_2->addWidget(city, 2, 3, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_3->setPalette(palette7);
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 3, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_4->setPalette(palette8);
        label_4->setFont(font2);

        gridLayout_2->addWidget(label_4, 3, 3, 1, 2);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_12->setPalette(palette9);
        label_12->setFont(font2);

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        date = new QLineEdit(widget);
        date->setObjectName(QStringLiteral("date"));

        gridLayout_2->addWidget(date, 4, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_13->setPalette(palette10);
        label_13->setFont(font2);

        gridLayout_2->addWidget(label_13, 4, 2, 1, 1);

        time = new QLineEdit(widget);
        time->setObjectName(QStringLiteral("time"));

        gridLayout_2->addWidget(time, 4, 3, 1, 2);

        splitter_2 = new QSplitter(Court);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(180, 90, 190, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label->setPalette(palette11);
        label->setFont(font2);
        splitter_2->addWidget(label);
        batch_no = new QLineEdit(splitter_2);
        batch_no->setObjectName(QStringLiteral("batch_no"));
        splitter_2->addWidget(batch_no);

        retranslateUi(Court);

        QMetaObject::connectSlotsByName(Court);
    } // setupUi

    void retranslateUi(QDialog *Court)
    {
        Court->setWindowTitle(QApplication::translate("Court", "Dialog", Q_NULLPTR));
        label_14->setText(QApplication::translate("Court", "Area Information ", Q_NULLPTR));
        label_22->setText(QApplication::translate("Court", "Court Case", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Court", "Back", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Court", "Save", Q_NULLPTR));
        label_5->setText(QApplication::translate("Court", "Case Number:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Court", "Case Name:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Court", "Loc.Name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Court", "Loc.Add:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Court", "City:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Court", "format(dd-mm-yy)", Q_NULLPTR));
        label_4->setText(QApplication::translate("Court", "format(hh-mm)", Q_NULLPTR));
        label_12->setText(QApplication::translate("Court", "Court date:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Court", "Time: ", Q_NULLPTR));
        label->setText(QApplication::translate("Court", "Batch NO:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Court: public Ui_Court {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURT_H
