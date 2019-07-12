/********************************************************************************
** Form generated from reading UI file 'investigation.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVESTIGATION_H
#define UI_INVESTIGATION_H

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

class Ui_Investigation
{
public:
    QLabel *label_6;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_22;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *batch_no;
    QLabel *label_2;
    QLineEdit *case_no;
    QSplitter *splitter;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QLabel *label_16;
    QLineEdit *vict_name;
    QLabel *label_17;
    QLineEdit *vict_surname;
    QLabel *label_18;
    QLineEdit *vict_gender;
    QLabel *label_19;
    QLineEdit *vict_age;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *off_name;
    QLabel *label_4;
    QLineEdit *off_surname;
    QLabel *label_20;
    QLineEdit *off_gender;
    QLabel *label_21;
    QLineEdit *off_age;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLineEdit *violation;
    QLabel *label_9;
    QLineEdit *location_name;
    QLabel *label_10;
    QLineEdit *location_add;
    QLabel *label_11;
    QLineEdit *city;
    QLabel *label_7;
    QLabel *label_23;
    QLabel *label_12;
    QLineEdit *date;
    QLabel *label_13;
    QLineEdit *time;

    void setupUi(QDialog *Investigation)
    {
        if (Investigation->objectName().isEmpty())
            Investigation->setObjectName(QStringLiteral("Investigation"));
        Investigation->resize(711, 531);
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
        Investigation->setPalette(palette);
        Investigation->setStyleSheet(QLatin1String("Investigation{\n"
"background-image:url(:/new/photos/tape/1 (2).jpg);\n"
"}"));
        label_6 = new QLabel(Investigation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 310, 191, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_6->setPalette(palette1);
        QFont font;
        font.setPointSize(14);
        label_6->setFont(font);
        label_14 = new QLabel(Investigation);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(150, 130, 71, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_14->setPalette(palette2);
        QFont font1;
        font1.setPointSize(12);
        label_14->setFont(font1);
        label_15 = new QLabel(Investigation);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(510, 130, 51, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_15->setPalette(palette3);
        label_15->setFont(font1);
        label_22 = new QLabel(Investigation);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(280, 10, 171, 31));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        label_22->setPalette(palette4);
        QFont font2;
        font2.setPointSize(16);
        label_22->setFont(font2);
        layoutWidget = new QWidget(Investigation);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 50, 231, 81));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label->setPalette(palette5);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        batch_no = new QLineEdit(layoutWidget);
        batch_no->setObjectName(QStringLiteral("batch_no"));

        gridLayout->addWidget(batch_no, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_2->setPalette(palette6);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        case_no = new QLineEdit(layoutWidget);
        case_no->setObjectName(QStringLiteral("case_no"));

        gridLayout->addWidget(case_no, 1, 1, 1, 1);

        splitter = new QSplitter(Investigation);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(530, 500, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);
        layoutWidget1 = new QWidget(Investigation);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(400, 150, 271, 121));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_16->setPalette(palette7);
        QFont font3;
        font3.setPointSize(10);
        label_16->setFont(font3);

        gridLayout_4->addWidget(label_16, 0, 0, 1, 1);

        vict_name = new QLineEdit(layoutWidget1);
        vict_name->setObjectName(QStringLiteral("vict_name"));

        gridLayout_4->addWidget(vict_name, 0, 1, 1, 1);

        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_17->setPalette(palette8);
        label_17->setFont(font3);

        gridLayout_4->addWidget(label_17, 1, 0, 1, 1);

        vict_surname = new QLineEdit(layoutWidget1);
        vict_surname->setObjectName(QStringLiteral("vict_surname"));

        gridLayout_4->addWidget(vict_surname, 1, 1, 1, 1);

        label_18 = new QLabel(layoutWidget1);
        label_18->setObjectName(QStringLiteral("label_18"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_18->setPalette(palette9);
        label_18->setFont(font3);

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        vict_gender = new QLineEdit(layoutWidget1);
        vict_gender->setObjectName(QStringLiteral("vict_gender"));

        gridLayout_4->addWidget(vict_gender, 2, 1, 1, 1);

        label_19 = new QLabel(layoutWidget1);
        label_19->setObjectName(QStringLiteral("label_19"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_19->setPalette(palette10);
        label_19->setFont(font3);

        gridLayout_4->addWidget(label_19, 3, 0, 1, 1);

        vict_age = new QLineEdit(layoutWidget1);
        vict_age->setObjectName(QStringLiteral("vict_age"));

        gridLayout_4->addWidget(vict_age, 3, 1, 1, 1);

        layoutWidget2 = new QWidget(Investigation);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(41, 150, 281, 121));
        gridLayout_2 = new QGridLayout(layoutWidget2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_3->setPalette(palette11);
        label_3->setFont(font3);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        off_name = new QLineEdit(layoutWidget2);
        off_name->setObjectName(QStringLiteral("off_name"));

        gridLayout_2->addWidget(off_name, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_4->setPalette(palette12);
        label_4->setFont(font3);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        off_surname = new QLineEdit(layoutWidget2);
        off_surname->setObjectName(QStringLiteral("off_surname"));

        gridLayout_2->addWidget(off_surname, 1, 1, 1, 1);

        label_20 = new QLabel(layoutWidget2);
        label_20->setObjectName(QStringLiteral("label_20"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_20->setPalette(palette13);
        label_20->setFont(font3);

        gridLayout_2->addWidget(label_20, 2, 0, 1, 1);

        off_gender = new QLineEdit(layoutWidget2);
        off_gender->setObjectName(QStringLiteral("off_gender"));

        gridLayout_2->addWidget(off_gender, 2, 1, 1, 1);

        label_21 = new QLabel(layoutWidget2);
        label_21->setObjectName(QStringLiteral("label_21"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_21->setPalette(palette14);
        label_21->setFont(font3);

        gridLayout_2->addWidget(label_21, 3, 0, 1, 1);

        off_age = new QLineEdit(layoutWidget2);
        off_age->setObjectName(QStringLiteral("off_age"));

        gridLayout_2->addWidget(off_age, 3, 1, 1, 1);

        widget = new QWidget(Investigation);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(42, 357, 449, 122));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_8->setPalette(palette15);
        label_8->setFont(font3);

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        violation = new QLineEdit(widget);
        violation->setObjectName(QStringLiteral("violation"));

        gridLayout_3->addWidget(violation, 0, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_9->setPalette(palette16);
        label_9->setFont(font3);

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        location_name = new QLineEdit(widget);
        location_name->setObjectName(QStringLiteral("location_name"));

        gridLayout_3->addWidget(location_name, 1, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_10->setPalette(palette17);
        label_10->setFont(font3);

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        location_add = new QLineEdit(widget);
        location_add->setObjectName(QStringLiteral("location_add"));

        gridLayout_3->addWidget(location_add, 2, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_11->setPalette(palette18);
        label_11->setFont(font3);

        gridLayout_3->addWidget(label_11, 2, 2, 1, 1);

        city = new QLineEdit(widget);
        city->setObjectName(QStringLiteral("city"));

        gridLayout_3->addWidget(city, 2, 3, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_7->setPalette(palette19);
        label_7->setFont(font3);

        gridLayout_3->addWidget(label_7, 3, 1, 1, 1);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QStringLiteral("label_23"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_23->setPalette(palette20);
        label_23->setFont(font3);

        gridLayout_3->addWidget(label_23, 3, 3, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_12->setPalette(palette21);
        label_12->setFont(font3);

        gridLayout_3->addWidget(label_12, 4, 0, 1, 1);

        date = new QLineEdit(widget);
        date->setObjectName(QStringLiteral("date"));

        gridLayout_3->addWidget(date, 4, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_13->setPalette(palette22);
        label_13->setFont(font3);

        gridLayout_3->addWidget(label_13, 4, 2, 1, 1);

        time = new QLineEdit(widget);
        time->setObjectName(QStringLiteral("time"));

        gridLayout_3->addWidget(time, 4, 3, 1, 1);


        retranslateUi(Investigation);

        QMetaObject::connectSlotsByName(Investigation);
    } // setupUi

    void retranslateUi(QDialog *Investigation)
    {
        Investigation->setWindowTitle(QApplication::translate("Investigation", "Dialog", Q_NULLPTR));
        label_6->setText(QApplication::translate("Investigation", "General Information", Q_NULLPTR));
        label_14->setText(QApplication::translate("Investigation", "Offender", Q_NULLPTR));
        label_15->setText(QApplication::translate("Investigation", "Victim", Q_NULLPTR));
        label_22->setText(QApplication::translate("Investigation", "Investigation Case", Q_NULLPTR));
        label->setText(QApplication::translate("Investigation", "Batch NO:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Investigation", "Case type:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Investigation", "Back", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Investigation", "Save", Q_NULLPTR));
        label_16->setText(QApplication::translate("Investigation", "Name:", Q_NULLPTR));
        label_17->setText(QApplication::translate("Investigation", "Surname:", Q_NULLPTR));
        label_18->setText(QApplication::translate("Investigation", "Gender:", Q_NULLPTR));
        label_19->setText(QApplication::translate("Investigation", "Age:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Investigation", "Name:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Investigation", "Surname:", Q_NULLPTR));
        label_20->setText(QApplication::translate("Investigation", "Gender:", Q_NULLPTR));
        label_21->setText(QApplication::translate("Investigation", "Age:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Investigation", "Violation:", Q_NULLPTR));
        label_9->setText(QApplication::translate("Investigation", "Loc.Name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("Investigation", "Loc.Add:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Investigation", "City:", Q_NULLPTR));
        label_7->setText(QApplication::translate("Investigation", "format(dd-mm-yy)", Q_NULLPTR));
        label_23->setText(QApplication::translate("Investigation", "format(hh-mm)", Q_NULLPTR));
        label_12->setText(QApplication::translate("Investigation", "Date occured:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Investigation", "Time occured:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Investigation: public Ui_Investigation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVESTIGATION_H
