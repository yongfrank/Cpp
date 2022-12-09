#include "dialog.h"
#include "ui_dialog.h"
#include <QButtonGroup>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    iniUI();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::iniUI() {
    // 1. Put Button into a group
    auto buttonGroup = new QButtonGroup(this);
    auto btnList = findChildren<QPushButton*>();
    for (auto btn: btnList) {
        buttonGroup->addButton(btn);
    }

    // 2. 关联按钮组的点击信号
    connect(buttonGroup, &QButtonGroup::buttonClicked, this, &Dialog::onButtonGroupClicked);

    this->vectorOfNumbersAndSigns.resize(5);
}

void Dialog::onButtonGroupClicked(QAbstractButton* btn) {
    // Print in terminal
    qInfo() << btn->text();

    float val = this->ui->lineEdit->text().toFloat();

    // if the number pressed, print

    /**
     * @brief name 计算器输入的数据
     */
    QString name = btn->text();

    // 根据按钮的点击，处理不同的逻辑
    // 如果是数字，直接显示
    if ((name >= "0" && name <= "9") || name == ".") {
        // 一开始显示零，输入一个数
        if(ui->lineEdit->text() == "0" && name != ".") {
            ui->lineEdit->clear();
        }

        // 如果点击数字键，输入框有数据，而且表达式框只有两个数据，重置输入的
        if(this->prevBtn == "+" || this->prevBtn == "-" || this->prevBtn == "*" || this->prevBtn == "/" || this->prevBtn == "=") {
            this->ui->lineEdit->clear();
        }
        this->ui->lineEdit->insert(name);
    }
    else if (name == "+") {
        if(this->vectorOfNumbersAndSigns[2].isNull()) {
            // 把 lhs 数字和操作符存起来
            this->vectorOfNumbersAndSigns[0] = val;
            this->vectorOfNumbersAndSigns[1] = "+";
        }
    }
    else if (name == "-") {
        if(this->vectorOfNumbersAndSigns[2].isNull()) {
            // 把 lhs 数字和操作符存起来
            this->vectorOfNumbersAndSigns[0] = val;
            this->vectorOfNumbersAndSigns[1] = "-";
        }
    }
    else if (name == "*") {
        if(this->vectorOfNumbersAndSigns[2].isNull()) {
            // 把 lhs 数字和操作符存起来
            this->vectorOfNumbersAndSigns[0] = val;
            this->vectorOfNumbersAndSigns[1] = "*";
        }
    }
    else if (name == "/") {
        if(this->vectorOfNumbersAndSigns[2].isNull()) {
            // 把 lhs 数字和操作符存起来
            this->vectorOfNumbersAndSigns[0] = val;
            this->vectorOfNumbersAndSigns[1] = "/";
        }
    }
    else if (name == "=") {
        this->vectorOfNumbersAndSigns[2] = val;
        this->vectorOfNumbersAndSigns[3] = "=";
        if(this->vectorOfNumbersAndSigns[1] == "+") {
           this->vectorOfNumbersAndSigns[4] = this->vectorOfNumbersAndSigns[0].toFloat() + this->vectorOfNumbersAndSigns[2].toFloat();
        }
        else if(this->vectorOfNumbersAndSigns[1] == "-") {
            this->vectorOfNumbersAndSigns[4] = this->vectorOfNumbersAndSigns[0].toFloat() - this->vectorOfNumbersAndSigns[2].toFloat();
        }
        else if(this->vectorOfNumbersAndSigns[1] == "*") {
            this->vectorOfNumbersAndSigns[4] = this->vectorOfNumbersAndSigns[0].toFloat() * this->vectorOfNumbersAndSigns[2].toFloat();
        }
        else if(this->vectorOfNumbersAndSigns[1] == "/") {
            this->vectorOfNumbersAndSigns[4] = this->vectorOfNumbersAndSigns[0].toFloat() / this->vectorOfNumbersAndSigns[2].toFloat();
        }

//        this->ui->lineEdit->setText(this->vectorOfNumbersAndSigns[4].toString());
        this->ui->lineEdit->setText(QString::asprintf("%.2f", this->vectorOfNumbersAndSigns[4].toFloat()));
        this->vectorOfNumbersAndSigns.clear();
    }
    else if (name == "C") {
        this->ui->lineEdit->clear();
        this->ui->expLineEdit->clear();
        this->vectorOfNumbersAndSigns.clear();
    }
    else if (name == "CE") {
        this->ui->lineEdit->clear();
        this->vectorOfNumbersAndSigns.pop_back();
    }
    else if (name == "DEL") {
        this->ui->lineEdit->setCursorPosition(ui->lineEdit->cursorPosition() - 1);
        this->ui->lineEdit->del();
    }

    // Display Sign and Number
    ui->expLineEdit->clear();
    for (auto var: this->vectorOfNumbersAndSigns) {
        this->ui->expLineEdit->insert(var.toString());
    }

    this->prevBtn = name;
}

/**
 * @brief Dialog::isNumeric
 * @param stringToBeTest
 * @return
 */
bool Dialog::isNumeric(QString stringToBeTest) {
    QString pattern = "[\\-]?[0][\\.][0-9]*|0|[\\-]?[1-9][0-9]*[\\.][0-9]*";
    QRegularExpression reg(pattern);
    QRegularExpressionValidator validator(reg);
    int positionStarted = 0;
    return validator.validate(stringToBeTest, positionStarted) == QValidator::Acceptable;
}













