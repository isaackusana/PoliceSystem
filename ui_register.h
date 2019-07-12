/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *user_line;
    QLabel *label_3;
    QLineEdit *name_line;
    QLabel *label_4;
    QLineEdit *surname_line;
    QLabel *label_5;
    QLineEdit *email_line;
    QLabel *label_6;
    QLineEdit *password_line;
    QLabel *label_7;
    QLineEdit *password_edit;
    QLabel *label_8;
    QLineEdit *cell_line;
    QLabel *snVerify;
    QLabel *emailVerify;
    QLabel *label_10;
    QLabel *userVerify;
    QLabel *nameVerify;
    QLabel *match;
    QLabel *label;
    QLabel *passVerify;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *cancelBtn;
    QPushButton *saveBtn;
    QLabel *num_verify;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(656, 483);
        Register->setStyleSheet(QLatin1String("Register{\n"
"background-image:url(:/new/photos/guns/gun.jpg);\n"
"\n"
"}"));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(51, 102, 135, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_2->setPalette(palette);

        verticalLayout->addWidget(label_2);

        user_line = new QLineEdit(layoutWidget);
        user_line->setObjectName(QStringLiteral("user_line"));

        verticalLayout->addWidget(user_line);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette1);

        verticalLayout->addWidget(label_3);

        name_line = new QLineEdit(layoutWidget);
        name_line->setObjectName(QStringLiteral("name_line"));

        verticalLayout->addWidget(name_line);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette2);

        verticalLayout->addWidget(label_4);

        surname_line = new QLineEdit(layoutWidget);
        surname_line->setObjectName(QStringLiteral("surname_line"));

        verticalLayout->addWidget(surname_line);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_5->setPalette(palette3);

        verticalLayout->addWidget(label_5);

        email_line = new QLineEdit(layoutWidget);
        email_line->setObjectName(QStringLiteral("email_line"));

        verticalLayout->addWidget(email_line);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette4);

        verticalLayout->addWidget(label_6);

        password_line = new QLineEdit(layoutWidget);
        password_line->setObjectName(QStringLiteral("password_line"));
        password_line->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password_line);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_7->setPalette(palette5);

        verticalLayout->addWidget(label_7);

        password_edit = new QLineEdit(layoutWidget);
        password_edit->setObjectName(QStringLiteral("password_edit"));
        password_edit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password_edit);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_8->setPalette(palette6);

        verticalLayout->addWidget(label_8);

        cell_line = new QLineEdit(layoutWidget);
        cell_line->setObjectName(QStringLiteral("cell_line"));

        verticalLayout->addWidget(cell_line);

        snVerify = new QLabel(Register);
        snVerify->setObjectName(QStringLiteral("snVerify"));
        snVerify->setGeometry(QRect(200, 215, 71, 21));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        snVerify->setPalette(palette7);
        emailVerify = new QLabel(Register);
        emailVerify->setObjectName(QStringLiteral("emailVerify"));
        emailVerify->setGeometry(QRect(200, 260, 61, 16));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        emailVerify->setPalette(palette8);
        label_10 = new QLabel(Register);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 50, 381, 31));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_10->setPalette(palette9);
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(14);
        label_10->setFont(font);
        userVerify = new QLabel(Register);
        userVerify->setObjectName(QStringLiteral("userVerify"));
        userVerify->setGeometry(QRect(200, 115, 71, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        userVerify->setPalette(palette10);
        nameVerify = new QLabel(Register);
        nameVerify->setObjectName(QStringLiteral("nameVerify"));
        nameVerify->setGeometry(QRect(200, 170, 71, 16));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        nameVerify->setPalette(palette11);
        match = new QLabel(Register);
        match->setObjectName(QStringLiteral("match"));
        match->setGeometry(QRect(200, 350, 141, 16));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        match->setPalette(palette12);
        label = new QLabel(Register);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 101, 21));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette13);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        passVerify = new QLabel(Register);
        passVerify->setObjectName(QStringLiteral("passVerify"));
        passVerify->setGeometry(QRect(200, 295, 71, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        passVerify->setPalette(palette14);
        layoutWidget_2 = new QWidget(Register);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(480, 450, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cancelBtn = new QPushButton(layoutWidget_2);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));
        QPalette palette15;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(85, 85, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(213, 213, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(149, 149, 255, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(42, 42, 127, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(56, 56, 170, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush8(QColor(0, 255, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush9(QColor(170, 170, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        cancelBtn->setPalette(palette15);

        horizontalLayout->addWidget(cancelBtn);

        saveBtn = new QPushButton(layoutWidget_2);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush11(QColor(193, 187, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush11);
        QBrush brush12(QColor(222, 222, 222, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush12);
        QBrush brush13(QColor(174, 189, 255, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush13);
        QBrush brush14(QColor(0, 42, 127, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush14);
        QBrush brush15(QColor(0, 56, 170, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush15);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush16(QColor(0, 85, 255, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush17(QColor(127, 170, 255, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush17);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush10);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush12);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush13);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush14);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush15);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush17);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush14);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush12);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush13);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush14);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush15);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush14);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush14);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        saveBtn->setPalette(palette16);

        horizontalLayout->addWidget(saveBtn);

        num_verify = new QLabel(Register);
        num_verify->setObjectName(QStringLiteral("num_verify"));
        num_verify->setGeometry(QRect(200, 390, 251, 16));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        num_verify->setPalette(palette17);
        QFont font2;
        font2.setPointSize(9);
        num_verify->setFont(font2);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("Register", "Username*", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "Name*", Q_NULLPTR));
        label_4->setText(QApplication::translate("Register", "Surname*", Q_NULLPTR));
        label_5->setText(QApplication::translate("Register", "Emai*", Q_NULLPTR));
        email_line->setText(QString());
        label_6->setText(QApplication::translate("Register", "Password*", Q_NULLPTR));
        password_line->setText(QString());
        label_7->setText(QApplication::translate("Register", "Confirm Password*", Q_NULLPTR));
        password_edit->setText(QString());
        label_8->setText(QApplication::translate("Register", "Cell phone Numbers*", Q_NULLPTR));
        snVerify->setText(QString());
        emailVerify->setText(QString());
        label_10->setText(QApplication::translate("Register", "Fields marked with * should be completed", Q_NULLPTR));
        userVerify->setText(QString());
        nameVerify->setText(QString());
        match->setText(QString());
        label->setText(QApplication::translate("Register", "Welcome", Q_NULLPTR));
        passVerify->setText(QString());
        cancelBtn->setText(QApplication::translate("Register", "cancel", Q_NULLPTR));
        saveBtn->setText(QApplication::translate("Register", "save", Q_NULLPTR));
        num_verify->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
