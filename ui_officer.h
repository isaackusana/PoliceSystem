/********************************************************************************
** Form generated from reading UI file 'officer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFICER_H
#define UI_OFFICER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Officer
{
public:
    QLabel *label_4;
    QLabel *label_5;
    QSplitter *splitter;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *inv_lb;
    QSpacerItem *horizontalSpacer;
    QPushButton *investigationView;
    QLabel *label_9;
    QLabel *court_lb;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *courtView;
    QLabel *label_10;
    QLabel *pat_lb;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *patrolView;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;
    QLabel *label_12;
    QSplitter *splitter_2;
    QLabel *label_11;
    QLineEdit *edit;
    QPushButton *pushButton_2;
    QTableView *tableView;

    void setupUi(QDialog *Officer)
    {
        if (Officer->objectName().isEmpty())
            Officer->setObjectName(QStringLiteral("Officer"));
        Officer->resize(1094, 478);
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
        Officer->setPalette(palette);
        Officer->setStyleSheet(QLatin1String("Officer\n"
"{\n"
"background-image:url(:/new/photos/badges/badge2.png);\n"
"\n"
"}"));
        label_4 = new QLabel(Officer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 70, 451, 31));
        QPalette palette1;
        label_4->setPalette(palette1);
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(17);
        label_4->setFont(font);
        label_5 = new QLabel(Officer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 20, 391, 41));
        QPalette palette2;
        label_5->setPalette(palette2);
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(25);
        label_5->setFont(font1);
        splitter = new QSplitter(Officer);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(120, 220, 321, 19));
        splitter->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette3;
        label_6->setPalette(palette3);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        splitter->addWidget(label_6);
        label_7 = new QLabel(splitter);
        label_7->setObjectName(QStringLiteral("label_7"));
        QPalette palette4;
        label_7->setPalette(palette4);
        label_7->setFont(font2);
        splitter->addWidget(label_7);
        layoutWidget = new QWidget(Officer);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 260, 391, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette5;
        label_8->setPalette(palette5);
        QFont font3;
        font3.setPointSize(16);
        label_8->setFont(font3);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        inv_lb = new QLabel(layoutWidget);
        inv_lb->setObjectName(QStringLiteral("inv_lb"));
        QFont font4;
        font4.setPointSize(14);
        inv_lb->setFont(font4);

        gridLayout->addWidget(inv_lb, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        investigationView = new QPushButton(layoutWidget);
        investigationView->setObjectName(QStringLiteral("investigationView"));

        gridLayout->addWidget(investigationView, 0, 3, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette6;
        label_9->setPalette(palette6);
        label_9->setFont(font3);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        court_lb = new QLabel(layoutWidget);
        court_lb->setObjectName(QStringLiteral("court_lb"));
        court_lb->setFont(font4);

        gridLayout->addWidget(court_lb, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        courtView = new QPushButton(layoutWidget);
        courtView->setObjectName(QStringLiteral("courtView"));

        gridLayout->addWidget(courtView, 1, 3, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette7;
        label_10->setPalette(palette7);
        label_10->setFont(font3);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        pat_lb = new QLabel(layoutWidget);
        pat_lb->setObjectName(QStringLiteral("pat_lb"));
        pat_lb->setFont(font4);

        gridLayout->addWidget(pat_lb, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        patrolView = new QPushButton(layoutWidget);
        patrolView->setObjectName(QStringLiteral("patrolView"));

        gridLayout->addWidget(patrolView, 2, 3, 1, 1);

        layoutWidget1 = new QWidget(Officer);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(890, 440, 123, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label_12 = new QLabel(Officer);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 120, 491, 20));
        QFont font5;
        font5.setPointSize(11);
        label_12->setFont(font5);
        splitter_2 = new QSplitter(Officer);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(140, 160, 351, 23));
        splitter_2->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(splitter_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        splitter_2->addWidget(label_11);
        edit = new QLineEdit(splitter_2);
        edit->setObjectName(QStringLiteral("edit"));
        QPalette palette8;
        edit->setPalette(palette8);
        splitter_2->addWidget(edit);
        pushButton_2 = new QPushButton(splitter_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter_2->addWidget(pushButton_2);
        tableView = new QTableView(Officer);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(610, 20, 471, 361));

        retranslateUi(Officer);

        QMetaObject::connectSlotsByName(Officer);
    } // setupUi

    void retranslateUi(QDialog *Officer)
    {
        Officer->setWindowTitle(QApplication::translate("Officer", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("Officer", "Keep track of the current work assigned", Q_NULLPTR));
        label_5->setText(QApplication::translate("Officer", "Officers information Portal", Q_NULLPTR));
        label_6->setText(QApplication::translate("Officer", "Case type", Q_NULLPTR));
        label_7->setText(QApplication::translate("Officer", "Case Status", Q_NULLPTR));
        label_8->setText(QApplication::translate("Officer", "Investigation  :", Q_NULLPTR));
        inv_lb->setText(QApplication::translate("Officer", "No case available", Q_NULLPTR));
        investigationView->setText(QApplication::translate("Officer", "View", Q_NULLPTR));
        label_9->setText(QApplication::translate("Officer", "Court Case     :", Q_NULLPTR));
        court_lb->setText(QApplication::translate("Officer", "No case available", Q_NULLPTR));
        courtView->setText(QApplication::translate("Officer", "View", Q_NULLPTR));
        label_10->setText(QApplication::translate("Officer", "Patrol            :", Q_NULLPTR));
        pat_lb->setText(QApplication::translate("Officer", "No case available", Q_NULLPTR));
        patrolView->setText(QApplication::translate("Officer", "View", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Officer", "Logout", Q_NULLPTR));
        label_12->setText(QApplication::translate("Officer", "Enter your batch number below to check for cases,then click search button", Q_NULLPTR));
        label_11->setText(QApplication::translate("Officer", "Enter batch NO:", Q_NULLPTR));
        edit->setText(QString());
        pushButton_2->setText(QApplication::translate("Officer", "search", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Officer: public Ui_Officer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFICER_H
