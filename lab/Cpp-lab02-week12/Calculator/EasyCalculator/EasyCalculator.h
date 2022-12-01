#ifndef EASYCALCULATOR_H
#define EASYCALCULATOR_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class EasyCalculator; }
QT_END_NAMESPACE

/**
 * @brief The EasyCalculator class 简单计算器类
 * @note 【C语言/C++QT实现win10系统简易计算器 ！手把手教你开发 ~】 https://www.bilibili.com/video/BV1Fe4y1n7ng
 */
class EasyCalculator : public QDialog
{
    /**
     * @brief 但凡Qobject子类，都必须在类的第一行放置该宏
     */
    Q_OBJECT

public:

    /**
     * @brief EasyCalculator constructor 本对话框的构造函数
     * @param parent
     */
    EasyCalculator(QWidget *parent = nullptr);

    /**
     * @brief Destruction Function
     */
    ~EasyCalculator();

    /**
     * @brief The Operation enum
     */
    enum class Operation {
        Addition,///< 加法
        Subtraction, ///< 减法
        /**乘法*/
        Multiplication,
        /**除法*/
        Division
    };

private slots:
    /**
     * @brief on_btn_plus_clicked 槽函数，用来响应以下预定义的系统信号，函数名由系统维护，不得随意更改
     */
    void on_btn_plus_clicked();

    /**
     * @brief on_btn_minus_clicked 当 on_btn_minus_clicked 被点击时调用
     */
    void on_btn_minus_clicked();

    /**
     * @brief on_btn_multiply_clicked
     */
    void on_btn_multiply_clicked();

    /**
     * @brief on_btn_divide_clicked
     */
    void on_btn_divide_clicked();

    /**
     * @brief on_pushButton_clicked 计算按钮按下时的逻辑
     */
    void on_calculateButton_clicked();

    /**
     * @brief on_clearButton_clicked 清除按钮按下时的逻辑
     */
    void on_clearButton_clicked();

private:
    Ui::EasyCalculator *ui;

    /**
     * @brief op enum, default value is addition 系统界面对象指针，我们可以通过本指针访问所有放置在界面上的小部件(Widgets）
     */
    Operation op = Operation::Addition;
};

#endif // EASYCALCULATOR_H
