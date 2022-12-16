#ifndef WIDGET_H
#define WIDGET_H
#include "CategoryOfAddressBook.cpp"
#include "AddressBook.h"

#include <QWidget>
#include <QProcess>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QByteArray>
#include <QKeyEvent>
#include <QStandardItemModel>
#include <QRegularExpression>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    AddressBook addressBook;

    /**
     * @brief Bind bind signal and slots
     */
    void Bind();

    /**
     * @brief fillComboBoxAndTableWidget fill with 1) 设定列标题及样式；
     */
    void fillComboBoxAndTableWidget();

    /**
     * @brief keyPressEvent shortcut for load(ctrl+o) save(ctrl+s)
     * @param key
     */
    void keyPressEvent(QKeyEvent *key);

    void addTemplateData();

    /**
     * @brief clearLineEdit
     */
    void clearLineEdit();

    /**
     * @brief initModelFromStringList 调用自定义函数 initModelFromStringList()，用 fileContentStringList 的内容初始化数据模型
     * @param fileContentStringList
     */
    void initModelFromStringList(QStringList& fileContentStringList);

    /**
     * @brief customizedTableStyle 设定自定义表的样式
     */
    void customizedTableStyle();

private slots:
    void ExitWidget();

    /**
     * @brief LoadFile 8、 文件读取操作流程框架 “打开文件”按钮的槽函数代码
     */
    void LoadFile();

    /**
     * @brief saveButtonSlot 9、 文件保存流程框架
     */
    void saveButtonSlot();

    /**
     * @brief newButtonSlot 2) 加入一行数据；
     */
    void newButtonSlot();

    /**
     * @brief clickedTableView 3) 选中一行数据（槽函数）；
     */
    void clickedTableView();

    /**
     * @brief deleteARow 4) 删除一行数据；
     */
    void deleteARow();

    /**
     * @brief alterALine 5) 修改某一行；
     */
    void alterALine();

private:
    /**
     * @brief categories category for comboBox
     */
    Category categories;

    Ui::Widget *ui;

    /**
     * @brief model
     * @see Qt模型/视图框架（一） - 小豆君编程分享的文章 - 知乎 https://zhuanlan.zhihu.com/p/47402006
     * Address Book Example https://doc.qt.io/qt-6/qtwidgets-itemviews-addressbook-example.html
     */
    QStandardItemModel* model;
};
#endif // WIDGET_H
