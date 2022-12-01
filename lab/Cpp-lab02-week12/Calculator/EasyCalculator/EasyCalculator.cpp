#include "EasyCalculator.h"
#include "ui_EasyCalculator.h"

EasyCalculator::EasyCalculator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EasyCalculator)
{
    ui->setupUi(this);
}

EasyCalculator::~EasyCalculator()
{
    delete ui;
}


void EasyCalculator::on_btn_plus_clicked()
{
    this->op = Operation::Addition;
}

void EasyCalculator::on_btn_minus_clicked()
{
    this->op = Operation::Subtraction;
}


void EasyCalculator::on_btn_multiply_clicked()
{
    this->op = Operation::Multiplication;
}


void EasyCalculator::on_btn_divide_clicked()
{
    this->op = Operation::Division;
}

/**
 * @note
 * LineEdit 的使用
 * 在本例中，我们使用三个 LineEdit 小部件供用户输入两个运算数，
 * 并将计算结果显示在 第三个只读的 Line Edit widget 中。
 * Line Edit 是单行文本框，其中文本的数据类型是 QString。
 * 使用以下语句读取 LineEdit 中的 QString 对象并将其转化为浮点数。
```cpp
lhs = this->ui->lhsLineEdit->text().toFloat();
rhs = this->ui->rhsLineEdit->text().toFloat();
this->ui->resultLineEdit->setText(QString::asprintf("%f", result));
```

setText 方法可以将参数 QString 字串设置到行文本框内显示。
本方法可以按格式字串（与 c 语言 printf 格式串相同）将 list_of_objects 转化为 QString 对象。
例如以下函数可以将整型变量 x 转化为 QString 类型对象返回。
```cpp
QString::asprintf(“format string”,list_of_objects);
QString::asprintf(“%d”,x);
```
 */
void EasyCalculator::on_calculateButton_clicked()
{
    float lhs, rhs, result;
    lhs = this->ui->lhsLineEdit->text().toFloat();
    rhs = this->ui->rhsLineEdit->text().toFloat();
//    if(this->op == Operation::Addition) {
//        result = lhs + rhs;
//        this->ui->resultLineEdit->setText(QString::asprintf("%f", result));
//    }
//    else if(this->op == Operation::Subtraction) {
//        result = lhs - rhs;
//    }

    switch (this->op) {
    case Operation::Addition:
        result = lhs + rhs;
        break;
    case Operation::Subtraction:
        result = lhs - rhs;
        break;
    case Operation::Multiplication:
        result = lhs * rhs;
        break;
    case Operation::Division:
        result = lhs / rhs;
        break;
    default:
        break;
    }
    this->ui->resultLineEdit->setText(QString::asprintf("%f", result));
}


void EasyCalculator::on_clearButton_clicked()
{
    this->ui->lhsLineEdit->clear();
    this->ui->rhsLineEdit->clear();
    this->ui->resultLineEdit->clear();
}

