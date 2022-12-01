/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEdit;
    QLineEdit *expLineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_14;
    QPushButton *pushButton_19;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_15;
    QPushButton *btn_divide;
    QPushButton *btn_num7;
    QPushButton *btn_num8;
    QPushButton *btn_num9;
    QPushButton *btn_multiply;
    QPushButton *btn_num4;
    QPushButton *btn_num5;
    QPushButton *btn_num6;
    QPushButton *btn_minus;
    QPushButton *btn_num1;
    QPushButton *btn_num2;
    QPushButton *btn_num3;
    QPushButton *btn_add;
    QPushButton *btn_numSign;
    QPushButton *btn_num0;
    QPushButton *btn_numDot;
    QPushButton *btn_equal;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(345, 425);
        Dialog->setMinimumSize(QSize(345, 425));
        Dialog->setMaximumSize(QSize(345, 450));
        Dialog->setStyleSheet(QString::fromUtf8("*\n"
"{\n"
"border:none;\n"
"background-color: rgb(238, 236, 236);\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: rgb(243, 243, 243);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"border:1px solid rgb(193, 193, 193);\n"
"background-color: rbg(221, 223, 221);\n"
"}\n"
"\n"
"QPushButton#btn_numSign:hover, #btn_numDot:hover, #btn_num0:hover, #btn_num1:hover, #btn_num2:hover, #btn_num3:hover, #btn_num4:hover, #btn_num5:hover, #btn_num6:hover, #btn_num7:hover, #btn_num8:hover, #btn_num9:hover {\n"
"background-color: rgb(221, 223, 221);\n"
"}\n"
"\n"
"QPushButton#btn_numSign, #btn_numDot, #btn_num0, #btn_num1, #btn_num2, #btn_num3, #btn_num4, #btn_num5, #btn_num6, #btn_num7, #btn_num8, #btn_num9 {\n"
"background-color: rgb(252, 252, 252);\n"
"}"));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 30, 320, 70));
        lineEdit->setMinimumSize(QSize(320, 70));
        lineEdit->setMaximumSize(QSize(320, 70));
        QFont font;
        font.setPointSize(26);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);
        expLineEdit = new QLineEdit(Dialog);
        expLineEdit->setObjectName("expLineEdit");
        expLineEdit->setGeometry(QRect(10, 5, 320, 21));
        expLineEdit->setMinimumSize(QSize(320, 0));
        expLineEdit->setMaximumSize(QSize(320, 16777215));
        expLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 110, 344, 312));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(75, 50));
        pushButton_5->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(75, 50));
        pushButton_6->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setMinimumSize(QSize(75, 50));
        pushButton_14->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton_14, 0, 2, 1, 1);

        pushButton_19 = new QPushButton(widget);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setMinimumSize(QSize(75, 50));
        pushButton_19->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton_19, 0, 3, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(75, 50));
        pushButton->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setMinimumSize(QSize(75, 50));
        pushButton_9->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton_9, 1, 1, 1, 1);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setMinimumSize(QSize(75, 50));
        pushButton_15->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(pushButton_15, 1, 2, 1, 1);

        btn_divide = new QPushButton(widget);
        btn_divide->setObjectName("btn_divide");
        btn_divide->setMinimumSize(QSize(75, 50));
        btn_divide->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_divide, 1, 3, 1, 1);

        btn_num7 = new QPushButton(widget);
        btn_num7->setObjectName("btn_num7");
        btn_num7->setMinimumSize(QSize(75, 50));
        btn_num7->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num7, 2, 0, 1, 1);

        btn_num8 = new QPushButton(widget);
        btn_num8->setObjectName("btn_num8");
        btn_num8->setMinimumSize(QSize(75, 50));
        btn_num8->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num8, 2, 1, 1, 1);

        btn_num9 = new QPushButton(widget);
        btn_num9->setObjectName("btn_num9");
        btn_num9->setMinimumSize(QSize(75, 50));
        btn_num9->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num9, 2, 2, 1, 1);

        btn_multiply = new QPushButton(widget);
        btn_multiply->setObjectName("btn_multiply");
        btn_multiply->setMinimumSize(QSize(75, 50));
        btn_multiply->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_multiply, 2, 3, 1, 1);

        btn_num4 = new QPushButton(widget);
        btn_num4->setObjectName("btn_num4");
        btn_num4->setMinimumSize(QSize(75, 50));
        btn_num4->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num4, 3, 0, 1, 1);

        btn_num5 = new QPushButton(widget);
        btn_num5->setObjectName("btn_num5");
        btn_num5->setMinimumSize(QSize(75, 50));
        btn_num5->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num5, 3, 1, 1, 1);

        btn_num6 = new QPushButton(widget);
        btn_num6->setObjectName("btn_num6");
        btn_num6->setMinimumSize(QSize(75, 50));
        btn_num6->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num6, 3, 2, 1, 1);

        btn_minus = new QPushButton(widget);
        btn_minus->setObjectName("btn_minus");
        btn_minus->setMinimumSize(QSize(75, 50));
        btn_minus->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_minus, 3, 3, 1, 1);

        btn_num1 = new QPushButton(widget);
        btn_num1->setObjectName("btn_num1");
        btn_num1->setMinimumSize(QSize(75, 50));
        btn_num1->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num1, 4, 0, 1, 1);

        btn_num2 = new QPushButton(widget);
        btn_num2->setObjectName("btn_num2");
        btn_num2->setMinimumSize(QSize(75, 50));
        btn_num2->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num2, 4, 1, 1, 1);

        btn_num3 = new QPushButton(widget);
        btn_num3->setObjectName("btn_num3");
        btn_num3->setMinimumSize(QSize(75, 50));
        btn_num3->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num3, 4, 2, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName("btn_add");
        btn_add->setMinimumSize(QSize(75, 50));
        btn_add->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_add, 4, 3, 1, 1);

        btn_numSign = new QPushButton(widget);
        btn_numSign->setObjectName("btn_numSign");
        btn_numSign->setMinimumSize(QSize(75, 50));
        btn_numSign->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_numSign, 5, 0, 1, 1);

        btn_num0 = new QPushButton(widget);
        btn_num0->setObjectName("btn_num0");
        btn_num0->setMinimumSize(QSize(75, 50));
        btn_num0->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_num0, 5, 1, 1, 1);

        btn_numDot = new QPushButton(widget);
        btn_numDot->setObjectName("btn_numDot");
        btn_numDot->setMinimumSize(QSize(75, 50));
        btn_numDot->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_numDot, 5, 2, 1, 1);

        btn_equal = new QPushButton(widget);
        btn_equal->setObjectName("btn_equal");
        btn_equal->setMinimumSize(QSize(75, 50));
        btn_equal->setMaximumSize(QSize(75, 50));

        gridLayout->addWidget(btn_equal, 5, 3, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Calculator", nullptr));
        lineEdit->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "%", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "CE", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Dialog", "C", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Dialog", "DEL", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "1/x", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "SQUARE", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Dialog", "SQRT", nullptr));
        btn_divide->setText(QCoreApplication::translate("Dialog", "/", nullptr));
        btn_num7->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        btn_num8->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        btn_num9->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        btn_multiply->setText(QCoreApplication::translate("Dialog", "*", nullptr));
        btn_num4->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        btn_num5->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        btn_num6->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        btn_minus->setText(QCoreApplication::translate("Dialog", "-", nullptr));
        btn_num1->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        btn_num2->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        btn_num3->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("Dialog", "+", nullptr));
        btn_numSign->setText(QCoreApplication::translate("Dialog", "+/-", nullptr));
        btn_num0->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        btn_numDot->setText(QCoreApplication::translate("Dialog", ".", nullptr));
        btn_equal->setText(QCoreApplication::translate("Dialog", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
