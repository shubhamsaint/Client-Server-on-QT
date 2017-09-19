/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_chat;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QTextEdit *textEditMessage;
    QPushButton *pushButtonSend;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *textEditIP;
    QLabel *label_2;
    QTextEdit *textEditPort;
    QPushButton *pushButtonConnect;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(812, 673);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 210, 571, 261));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit_chat = new QTextEdit(groupBox);
        textEdit_chat->setObjectName(QStringLiteral("textEdit_chat"));
        textEdit_chat->setOverwriteMode(false);

        verticalLayout->addWidget(textEdit_chat);

        widget = new QWidget(Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 480, 571, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        textEditMessage = new QTextEdit(widget);
        textEditMessage->setObjectName(QStringLiteral("textEditMessage"));

        horizontalLayout->addWidget(textEditMessage);

        pushButtonSend = new QPushButton(widget);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));

        horizontalLayout->addWidget(pushButtonSend);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(90, 100, 571, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        textEditIP = new QTextEdit(widget1);
        textEditIP->setObjectName(QStringLiteral("textEditIP"));

        horizontalLayout_2->addWidget(textEditIP);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textEditPort = new QTextEdit(widget1);
        textEditPort->setObjectName(QStringLiteral("textEditPort"));

        horizontalLayout_2->addWidget(textEditPort);

        pushButtonConnect = new QPushButton(widget1);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));

        horizontalLayout_2->addWidget(pushButtonConnect);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Dialog", "Chat", 0));
        label_4->setText(QApplication::translate("Dialog", "Message", 0));
        pushButtonSend->setText(QApplication::translate("Dialog", "Send", 0));
        label->setText(QApplication::translate("Dialog", "IP Address", 0));
        label_2->setText(QApplication::translate("Dialog", "Port", 0));
        pushButtonConnect->setText(QApplication::translate("Dialog", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
