/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *passwordF;
    QLineEdit *userNameF;
    QLabel *label_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QLabel *errorMsg;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(968, 629);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(Login);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color:#EEEEEE"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(450, 16777215));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#52a3ff;background-color:#FFFFFF"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 2, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMaximumSize(QSize(450, 16777215));
        frame_2->setStyleSheet(QString::fromUtf8("background-color:#eeeeee"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        passwordF = new QLineEdit(frame_2);
        passwordF->setObjectName("passwordF");
        passwordF->setMinimumSize(QSize(0, 50));
        passwordF->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));
        passwordF->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout_3->addWidget(passwordF, 3, 0, 1, 1);

        userNameF = new QLineEdit(frame_2);
        userNameF->setObjectName("userNameF");
        userNameF->setMinimumSize(QSize(0, 50));
        userNameF->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF"));

        gridLayout_3->addWidget(userNameF, 1, 0, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 60));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:#52a3ff;color:white;"));

        gridLayout_3->addWidget(pushButton, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 1);

        errorMsg = new QLabel(frame_2);
        errorMsg->setObjectName("errorMsg");
        errorMsg->setEnabled(false);
        errorMsg->setStyleSheet(QString::fromUtf8("color:red;"));

        gridLayout_3->addWidget(errorMsg, 6, 0, 1, 1);


        gridLayout_2->addWidget(frame_2, 0, 0, 2, 1);


        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Login", "Login Sherif!", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "User Name", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        errorMsg->setText(QCoreApplication::translate("Login", "incorrect user name or password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
