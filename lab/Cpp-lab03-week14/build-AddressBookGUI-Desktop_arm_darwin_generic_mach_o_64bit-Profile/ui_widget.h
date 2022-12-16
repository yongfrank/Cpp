/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *phoneLineEdit;
    QSpacerItem *horizontalSpacer;
    QComboBox *groupComboBox;
    QLabel *label_3;
    QLineEdit *nameLineEdit;
    QLabel *label;
    QFrame *line;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *loadButton;
    QPushButton *saveButton;
    QPushButton *newButton;
    QPushButton *updateButton;
    QPushButton *deleteButton;
    QPushButton *exitButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(815, 735);
        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 210, 581, 341));
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(true));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 40, 581, 141));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 566, 91));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        phoneLineEdit = new QLineEdit(layoutWidget);
        phoneLineEdit->setObjectName("phoneLineEdit");

        gridLayout->addWidget(phoneLineEdit, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        groupComboBox = new QComboBox(layoutWidget);
        groupComboBox->setObjectName("groupComboBox");
        groupComboBox->setMinimumSize(QSize(300, 0));

        gridLayout->addWidget(groupComboBox, 2, 3, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        nameLineEdit = new QLineEdit(layoutWidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(Widget);
        line->setObjectName("line");
        line->setGeometry(QRect(40, 190, 581, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(640, 70, 131, 481));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        loadButton = new QPushButton(layoutWidget1);
        loadButton->setObjectName("loadButton");

        verticalLayout->addWidget(loadButton);

        saveButton = new QPushButton(layoutWidget1);
        saveButton->setObjectName("saveButton");

        verticalLayout->addWidget(saveButton);

        newButton = new QPushButton(layoutWidget1);
        newButton->setObjectName("newButton");

        verticalLayout->addWidget(newButton);

        updateButton = new QPushButton(layoutWidget1);
        updateButton->setObjectName("updateButton");

        verticalLayout->addWidget(updateButton);

        deleteButton = new QPushButton(layoutWidget1);
        deleteButton->setObjectName("deleteButton");

        verticalLayout->addWidget(deleteButton);

        exitButton = new QPushButton(layoutWidget1);
        exitButton->setObjectName("exitButton");

        verticalLayout->addWidget(exitButton);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 560, 731, 131));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Contacts", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "Edit", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Phone", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Group", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Name", nullptr));
        loadButton->setText(QCoreApplication::translate("Widget", "Load", nullptr));
        saveButton->setText(QCoreApplication::translate("Widget", "Save", nullptr));
        newButton->setText(QCoreApplication::translate("Widget", "New", nullptr));
        updateButton->setText(QCoreApplication::translate("Widget", "Update", nullptr));
        deleteButton->setText(QCoreApplication::translate("Widget", "Delete", nullptr));
        exitButton->setText(QCoreApplication::translate("Widget", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
