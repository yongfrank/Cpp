/********************************************************************************
** Form generated from reading UI file 'EasyCalculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASYCALCULATOR_H
#define UI_EASYCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EasyCalculator
{
public:
    QLineEdit *lhsLineEdit;
    QLineEdit *rhsLineEdit;
    QGroupBox *groupBox;
    QLineEdit *resultLineEdit;
    QPushButton *calculateButton;
    QPushButton *clearButton;
    QFrame *line;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *btn_plus;
    QRadioButton *btn_minus;
    QRadioButton *btn_multiply;
    QRadioButton *btn_divide;

    void setupUi(QDialog *EasyCalculator)
    {
        if (EasyCalculator->objectName().isEmpty())
            EasyCalculator->setObjectName("EasyCalculator");
        EasyCalculator->resize(402, 193);
        lhsLineEdit = new QLineEdit(EasyCalculator);
        lhsLineEdit->setObjectName("lhsLineEdit");
        lhsLineEdit->setGeometry(QRect(270, 40, 113, 21));
        rhsLineEdit = new QLineEdit(EasyCalculator);
        rhsLineEdit->setObjectName("rhsLineEdit");
        rhsLineEdit->setGeometry(QRect(270, 80, 113, 21));
        groupBox = new QGroupBox(EasyCalculator);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 20, 231, 81));
        resultLineEdit = new QLineEdit(EasyCalculator);
        resultLineEdit->setObjectName("resultLineEdit");
        resultLineEdit->setGeometry(QRect(270, 120, 113, 21));
        resultLineEdit->setReadOnly(true);
        calculateButton = new QPushButton(EasyCalculator);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(270, 150, 51, 32));
        clearButton = new QPushButton(EasyCalculator);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(330, 150, 51, 32));
        line = new QFrame(EasyCalculator);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 100, 371, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(EasyCalculator);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 50, 209, 39));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_plus = new QRadioButton(widget);
        btn_plus->setObjectName("btn_plus");
        btn_plus->setChecked(true);

        gridLayout->addWidget(btn_plus, 0, 0, 1, 1);

        btn_minus = new QRadioButton(widget);
        btn_minus->setObjectName("btn_minus");
        btn_minus->setChecked(false);

        gridLayout->addWidget(btn_minus, 0, 1, 1, 1);

        btn_multiply = new QRadioButton(widget);
        btn_multiply->setObjectName("btn_multiply");

        gridLayout->addWidget(btn_multiply, 1, 0, 1, 1);

        btn_divide = new QRadioButton(widget);
        btn_divide->setObjectName("btn_divide");

        gridLayout->addWidget(btn_divide, 1, 1, 1, 1);


        retranslateUi(EasyCalculator);

        QMetaObject::connectSlotsByName(EasyCalculator);
    } // setupUi

    void retranslateUi(QDialog *EasyCalculator)
    {
        EasyCalculator->setWindowTitle(QCoreApplication::translate("EasyCalculator", "EasyCalculator", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EasyCalculator", "\350\256\241\347\256\227", nullptr));
        calculateButton->setText(QCoreApplication::translate("EasyCalculator", "\350\256\241\347\256\227", nullptr));
        clearButton->setText(QCoreApplication::translate("EasyCalculator", "\346\270\205\351\231\244", nullptr));
        btn_plus->setText(QCoreApplication::translate("EasyCalculator", "+", nullptr));
        btn_minus->setText(QCoreApplication::translate("EasyCalculator", "-", nullptr));
        btn_multiply->setText(QCoreApplication::translate("EasyCalculator", "*", nullptr));
        btn_divide->setText(QCoreApplication::translate("EasyCalculator", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EasyCalculator: public Ui_EasyCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASYCALCULATOR_H
