#ifndef WIDGET_H
#define WIDGET_H
#include "CategoryOfAddressBook.cpp"

#include <QWidget>
#include <QProcess>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QByteArray>
#include <QKeyEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    /**
     * @brief Bind bind signal and slots
     */
    void Bind();

    /**
     * @brief fillComboBoxAndTableWidget fill with
     */
    void fillComboBoxAndTableWidget();

    /**
     * @brief keyPressEvent shortcut for load(ctrl+o) save(ctrl+s)
     * @param key
     */
    void keyPressEvent(QKeyEvent *key);

private slots:
    void ExitWidget();
    void LoadFile();
    void newButtonSlot();
    void saveButtonSlot();

private:
    /**
     * @brief categories category for comboBox
     */
    Category categories;

    Ui::Widget *ui;
};
#endif // WIDGET_H
