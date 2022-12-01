/*
 * @Author: Frank Chu
 * @Date: 2022-12-01 13:38:03
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-01 14:27:04
 * @FilePath: /Cpp/lab/Cpp-lab02-week12/Calculator/dialog.h
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
#ifndef DIALOG_H
#define DIALOG_H

#include "QtWidgets/qabstractbutton.h"
#include <QDialog>
#include <QtWidgets/QWidget>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

/**
 * @brief The Dialog class UI 界面逻辑类
 */
class Dialog : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Dialog 构造函数
     * @param parent
     */
    Dialog(QWidget *parent = nullptr);

    /**
     * @brief Dialog 析构函数
     */
    ~Dialog();

    /**
     * @brief iniUI UI 初始化函数，1. 将数字按钮组成组 2. 关联按钮组的点击信号
     */
    void iniUI();
public slots:

    /**
     * @brief onButtonGroupClicked 当数字按钮组按下的的时候进行的反馈函数，在 iniUI() 中使用
     * @param btn 按下的按钮
     */
    void onButtonGroupClicked(QAbstractButton *btn);

private:
    /**
     * @brief ui ui 界面变量
     */
    Ui::Dialog *ui;

    /**
     * @brief vectorOfNumbersAndSigns 储存左数右数和符号，进行运算。
     */
    QVector<QVariant> vectorOfNumbersAndSigns;

    /**
     * @brief prevBtn 前一个按钮输入的符号 OR 数字
     */
    QString prevBtn;
};
#endif // DIALOG_H
