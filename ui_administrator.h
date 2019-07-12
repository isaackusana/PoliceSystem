/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Administrator
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *courtRoll;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QSplitter *splitter;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Administrator)
    {
        if (Administrator->objectName().isEmpty())
            Administrator->setObjectName(QStringLiteral("Administrator"));
        Administrator->resize(535, 405);
        Administrator->setStyleSheet(QLatin1String("Administrator{\n"
"background-image:url(:/new/photos/court/5a7f7e53c89b6_lapdvc3.jpg.f4f918bad99fe36f51191df4394af580.jpg);\n"
"}"));
        label = new QLabel(Administrator);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 261, 31));
        QPalette palette;
        label->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        layoutWidget = new QWidget(Administrator);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 130, 291, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette1;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_2->setPalette(palette1);
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette2);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        courtRoll = new QPushButton(layoutWidget);
        courtRoll->setObjectName(QStringLiteral("courtRoll"));

        gridLayout->addWidget(courtRoll, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette3);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        splitter = new QSplitter(Administrator);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(350, 370, 150, 23));
        splitter->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);

        retranslateUi(Administrator);

        QMetaObject::connectSlotsByName(Administrator);
    } // setupUi

    void retranslateUi(QDialog *Administrator)
    {
        Administrator->setWindowTitle(QApplication::translate("Administrator", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Administrator", "Administrator portal", Q_NULLPTR));
        label_2->setText(QApplication::translate("Administrator", "Investigation", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Administrator", "Assign", Q_NULLPTR));
        label_3->setText(QApplication::translate("Administrator", "Court Case", Q_NULLPTR));
        courtRoll->setText(QApplication::translate("Administrator", "Assign", Q_NULLPTR));
        label_4->setText(QApplication::translate("Administrator", "Patrol", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Administrator", "Assign", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Administrator", "Add Officer", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Administrator", "Logout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Administrator: public Ui_Administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
