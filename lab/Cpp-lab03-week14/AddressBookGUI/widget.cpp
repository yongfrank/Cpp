#include "widget.h"
#include "ui_widget.h"

/**
 * @brief Widget::Widget
 * @param parent
 * @note In this code, Widget is a class that is derived from the QWidget class.
 * The Widget class has a constructor that takes a QWidget pointer as an argument
 * and assigns it to the parent of the new Widget object.
 * The constructor also initializes a new Ui::Widget object
 * and assigns it to the ui member variable of the Widget object.
 * @todo delete add Template data
 */
Widget::Widget(QWidget *parent) : QWidget(parent) ,
    ui(new Ui::Widget)
{
    this->ui->setupUi(this);
    this->Bind();
    this->fillComboBoxAndTableWidget();
//    this->addTemplateData();
}

Widget::~Widget()
{
    delete this->ui;
}

void Widget::Bind() {
    QObject::connect(ui->nameLineEdit, SIGNAL(returnPressed()), this, SLOT(ExitWidget()));
    QObject::connect(ui->exitButton, SIGNAL(clicked(bool)), this, SLOT(ExitWidget()));
//    QObject::connect(ui->exitButton, &QPushButton::clicked, this, &Widget::ExitWidget);
//    QObject::connect(ui->exitButton, SLGNAL(clicked()), this, SLOT(ExitWidget()));
//    connect(ui->loadButton, &QPushButton::clicked, [this](){
//        QMessageBox::information(this, "Info", "Click to explore");
//    });

//    QObject::connect(ui->loadButton, SIGNAL(clicked()), this, SLOT(LoadFile()));

    QObject::connect(this->ui->newButton, &QPushButton::clicked, this, &Widget::newButtonSlot);
    QObject::connect(this->ui->loadButton, &QPushButton::clicked, this, &Widget::LoadFile);
    QObject::connect(this->ui->saveButton, &QPushButton::clicked, this, &Widget::saveButtonSlot);
    QObject::connect(this->ui->tableView, &QTableView::clicked, this, &Widget::clickedTableView);
    QObject::connect(this->ui->deleteButton, &QPushButton::clicked, this, &Widget::deleteARow);
    QObject::connect(this->ui->updateButton, &QPushButton::clicked, this, &Widget::alterALine);

}

/**
 * @note
 * 一个 ComboBox 相当于一个 LineEdit 和一个 List 组件的结合。用于在一列数据中选择其中某一项。一个 ComboBox 的数据可以来源于一个 QStringList 对象。
 * 1. 填充列表数据；
 * 2. 设定当前选项数据；
 * 3. 获取当前选项数据；
 *
 * QTableWidget 小部件的使用
 * Qt 为我们提供了两类表格小部件（QTableView 和 QTableWidget）供用户显示二维表。
 * QTableView 基于 View/Model/Delegate 的灵活架构，可以非常灵活地以多种方式显示后台数据（model）；
 * 而 QTableWidget 也是基于 View/Model 架构，但它提供了默认的数据结构，
 * 用户不需要涉及过多的架构细节就可以迅速地用它来显示二维数据表格。
 * QTableWidget 使用行号（row）和列号（column）去定位一个单元格（cell）并显示数据。
 * @see
 * C++ Qt 47 - Intro to model view programming https://www.youtube.com/watch?v=uDC9L4T59bM
 */
void Widget::fillComboBoxAndTableWidget()
{

//    this->ui->groupComboBox->setModel();
//    this->ui->groupComboBox->setModel();
    this->addressBook.setId(0);

    // ComboBox
    QStringList groupItems;
    groupItems.append(categories.friends);
    groupItems.append(categories.colleague);
    groupItems.append(categories.family);
    groupItems.append(categories.relative);
    groupItems.append(categories.student);
    this->ui->groupComboBox->addItems(groupItems);

    this->ui->groupComboBox->setCurrentText(categories.student);

//    qDebug() << this->ui->groupComboBox->currentText();

    // QTableWidget 小部件的使用
    QStringList header;
    header << categories.name << categories.phoneNumber << categories.group;
    this->ui->tableWidget->setColumnCount(3); //设定列总数为 3
    this->ui->tableWidget->setHorizontalHeaderLabels(header); //设定列标题

    // Table View(Model Based) Title
    this->model = new QStandardItemModel;
    this->model->setHorizontalHeaderLabels(header);

    // Table View(Model Based) model for view
    this->ui->tableView->setModel(model);
    this->ui->tableWidget->hide();
//    this->ui->tableView->hide();

    this->customizedTableStyle();
}

void Widget::newButtonSlot() {
//    this->ui->textEdit->clear();
//    this->setWindowTitle("New Address Book");
//    QUuid id = QUuid();

    // 获得行计数
//    int lastRow = this->model->rowCount();
//    qDebug() << lastRow;

    std::string name = this->ui->nameLineEdit->text().toStdString();
    std::string phone = this->ui->phoneLineEdit->text().toStdString();
    std::string group = this->ui->groupComboBox->currentText().toStdString();
//    qDebug() << id << QString::fromStdString(name) << this->ui->groupComboBox->currentText();

    this->addressBook.AddContact(name, phone, group);
    QStandardItem* nameItem = new QStandardItem(QString::fromStdString(name));
    QStandardItem* phoneItem = new QStandardItem(QString::fromStdString(phone));
    QStandardItem* groupItem = new QStandardItem(QString::fromStdString(group));

    QList<QStandardItem*> itemList;
    itemList << nameItem << phoneItem << groupItem;

    // 在表格后添加一行
    model->appendRow(itemList);

    this->clearLineEdit();
}

/**
 * @note "/home", "*.txt, *.cpp" 这段代码让用户选择所需要打开的数据文本文件，然后用只读和文本格式打开文件，逐行读取其内容，将每行字符串显示到界面上的 TextEdit 里，并且添加到一个临时的 QStringList 类型的变量 FileContent 里。
 * @see Qt QStandardItemModel用法（超级详细） http://c.biancheng.net/view/1869.html
 */
void Widget::LoadFile() {

    // 获取应用程序的路径
    // 调用打开文件对话框打开一个文件
    QString fileName = QFileDialog::getOpenFileName(this, "Choose a file", QApplication::applicationDirPath(),
                                                    "Text File(*.txt);;All File(*.*)");
//    QString fileName = QFileDialog::getOpenFileName(this, "Choose a File",
//                                             QCoreApplication::applicationFilePath());
//    QFileDialog::getOpenFileName(this, "Choose a File", QCoreApplication::applicationDirPath());

    // 如果未选择文件，退出
    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Choose a File, please");
        return;
    }
//    qDebug() << fileName;

    // 文件内容字符串列表
    QStringList fileContentStringList;

    // Create a QFile Object
    // https://doc.qt.io/qt-6/qfile.html
    // 以文件方式读出
    QFile file(fileName);

    // 以只读文本方式打开文件
    file.open(QIODevice::ReadOnly);

    // 用文本流读取文件
    QTextStream fileStream(&file);

    // 清空
    this->ui->textEdit->clear();

    while(!fileStream.atEnd()) {
        // 读取文件的一行
        QString stringToBeDisplayed = fileStream.readLine();

        // 添加到文本框显示
        this->ui->textEdit->append(stringToBeDisplayed);

        // 添加到 fileContentStringList
        fileContentStringList.append(stringToBeDisplayed);
    }

    // 关闭文件
    //    QByteArray byteArray = file.readAll();
    //    ui->textEdit->setText(QString(byteArray));
    file.close();

    // 窗口标题显示
    this->setWindowTitle(fileName);

    // 从StringList的内容初始化数据模型
    this->initModelFromStringList(fileContentStringList);
}

/**
 * @see https://doc.qt.io/qt-6/qbytearray.html
 * Qt QStandardItemModel用法（超级详细） http://c.biancheng.net/view/1869.html
 */
void Widget::saveButtonSlot() {

    // 获取应用程序的路径
//    QString curPath = QCoreApplication::applicationDirPath();
//    qDebug() << curPath;

    // Save New Dialog
    // 调用打开文件对话框选择一个文件
    QString fileName = QFileDialog::getSaveFileName(this, "Chose a file", QCoreApplication::applicationFilePath(),
                                                    "Text File(*.txt);;All File(*.*)");


    // 未选择文件，退出
    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Choose a file");
        return;
    }

    QFile file(fileName);
    file.open(QIODevice::WriteOnly);

//    QByteArray ba;
//    ba.append(this->ui->textEdit->toPlainText().toUtf8());
//    file.write(ba);
//    file.close();

    QString stringToBeStored;

    // 用文本流读取文件
    QTextStream fileStream(&file);
    QStandardItem* item;

    // 获取表头文字
    for(int i = 0; i < this->model->columnCount(); i++) {

        // 获取表头的项数据
        item = this->model->horizontalHeaderItem(i);

        // 以 TAB 间隔开
        stringToBeStored += item->text() + "\t\t";
    }

    // 文件里需要加入换行符 \n
    fileStream << stringToBeStored << "\n";

    this->ui->textEdit->append(stringToBeStored);

    // 获取数据区文字
    for (int i = 0; i < this->model->rowCount(); i++) {
        stringToBeStored = "";
        for (int j = 0; j < this->model->columnCount(); j++) {
            item = this->model->item(i, j);
            stringToBeStored += item->text() + "\t\t";
        }

        this->ui->textEdit->append(stringToBeStored);
        fileStream << stringToBeStored << "\n";
    }

    file.close();
}

/**
 * @see 【QT快速入门 | 最简单最简洁的QT入门教程 | 嵌入式UI-哔哩哔哩】 https://b23.tv/ADss8yy
 */
void Widget::ExitWidget()
{
//    QString program = "/System/Applications/Utilities/Terminal.app";
//    program = "/Applications/" + this->ui->nameLineEdit->text() + ".app";
//    this->ui->nameLineEdit->setText(program);
//    QProcess *myProcess = new QProcess(this);
//    myProcess->start(program);
    this->close();
}

void Widget::keyPressEvent(QKeyEvent *key) {
    if(key->modifiers() == Qt::ControlModifier && key->key() == Qt::Key_S) {
        this->saveButtonSlot();
    }
    if(key->modifiers() == Qt::ControlModifier && key->key() == Qt::Key_O) {
        this->LoadFile();
    }
}

void Widget::addTemplateData()
{
    QStandardItem* name = new QStandardItem(QString("apple"));
    QStandardItem* phone = new QStandardItem(QString("400-666-8800"));
    QStandardItem* group = new QStandardItem(QString("Colleague"));

    QList<QStandardItem*> itemList;
    itemList << name << phone << group;
    model->appendRow(itemList);

    name = new QStandardItem(QString("google"));
    phone = new QStandardItem(QString("901-3283-2233"));
    group = new QStandardItem(QString("Colleague"));
    itemList.clear();
    itemList << name << phone << group;
    model->appendRow(itemList);
}

void Widget::clearLineEdit()
{
    // clear Text
    this->ui->nameLineEdit->setText("");
    this->ui->phoneLineEdit->setText("");
}

/**
 * @note 传递来的参数 fileContentStringList 是文本文件所有行构成的 StringList，文件的每一行是 aFileContent 的一行字符串，第 1 行是表头文字，数据从第 2 行开始。
 * 程序首先获取字符串列表的行数，然后设置数据模型的行数，因为数据模型的列数在初始化时己经设置了。
 * 然后获取字符串列表的第 1 行，即表头文字，用 QString::split() 函数分割成一个 QStringList，设置为数据模型的表头标题。
 * QString::split() 函数根据某个特定的符号将字符串进行分割。例如，header 是数据列的标题，每个标题之间通过一个或多个 TAB 键分隔，其内容是：
```
Name        Phone Number        Group
```
 * 那么通过上面的 split() 函数操作，得到一个字符串列表 headerList，其内容是：
```
Name
Phone Number
Group
```
 * 也就是分解为一个 3 行的 StringList。然后使用此字符串列表作为数据模型，设置表头标题的函数 setHorizontalHeaderLabels() 的参数，就可以为数据模型设置表头了。
 * 同样，在逐行获取字符串后，也采用 split() 函数进行分解，为每个数据创建一个 QStandardltem 类型的项数据 altem，并赋给数据模型作为某行某列的项数据。
 * QStandardItemModel 以二维表格的形式保存项数据，每个项数据对应着 QTableView 的一个单元格。项数据不仅可以存储显示的文字，还可以存储其他角色的数据。
 */
void Widget::initModelFromStringList(QStringList& fileContentStringList)
{
    // 将内存中的 model 数据模型清除
    this->model->clear();

    // 从一个StringList 获取数据，初始化数据Model
    // 文本行数，第1行是标题
    int rowCount = fileContentStringList.count();

    // 实际数据行数
    this->model->setRowCount(rowCount - 1);

    // 设置表头
    // 第1行是表头
    QString header = fileContentStringList.at(0);

    /**
     * @brief multiTab
     * @note
     * Description:
     * Don't create temporary QRegularExpression objects. a Use a static QRegularExpression object instead
     * [clazy-use-static-qregularexpression]
     * Location:
     * /Users/yongfrank/Developer/Cpp/lab/Cpp-labo3-week14/AddressBookGU/widget.cpp:360:43
     * Documentation:
     * https://github.com/KDE/clazy/blob/1.11/docs/checks/READ ME-use-statio-qregularexpression.md
     */
    static auto multiTab = QRegularExpression("\\t+");

    // 一个或多个空格、TAB("\s+") 多个 TAB 分隔("\t+")等分隔符隔开的字符串， 分解为一个StringList
    QStringList headerList = header.split(multiTab);
    headerList.removeLast();
    //设置表头文字
    this->model->setHorizontalHeaderLabels(headerList);

    //设置表格数据
//    QString lineText;
//    QStringList lineTempList;
    QStandardItem *itemStandard;
    for(int i = 0; i < rowCount; i++) {

        //获取数据区的一行
        QString lineText = fileContentStringList.at(i);

        //一个或多个空格、TAB等分隔符隔开的字符串， 分解为一个StringList
        QStringList lineTempList = lineText.split(multiTab);

        //lineTempList 的行数等于 headerList.count, 固定的
        for(int j = 0; j < headerList.count(); j++) {

            //创建item
            itemStandard = new QStandardItem(lineTempList.at(j));

            //为模型的某个行列位置设置Item
            this->model->setItem(i - 1, j, itemStandard);
        }
    }
    this->customizedTableStyle();
}

void Widget::customizedTableStyle()
{
    // Style sheet
    //设定列延展特性
    this->ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    this->ui->tableView->horizontalHeader()->setStretchLastSection(true);

    // QTableView column width
    // https://stackoverflow.com/questions/26681578/qtableview-column-width
    this->ui->tableView->setColumnWidth(1, 200);

    //设定标题样式
    this->ui->tableWidget->horizontalHeader()->setStyleSheet("border:none; border-bottom:1px solid grey");
    this->ui->tableView->horizontalHeader()->setStyleSheet("border:none; border-bottom:1px solid grey");

    //设定表格行选定行为
    this->ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    this->ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    this->ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    //显示网格线
    this->ui->tableWidget->showGrid();
    this->ui->tableView->showGrid();
}

void Widget::clickedTableView()
{
    QAbstractItemModel* modelSelected = this->ui->tableView->model();
    int row = this->ui->tableView->currentIndex().row();
//    qDebug() << row;

    //根据行号在地址簿中读取并显示相应的联系人至编辑界面
    this->ui->nameLineEdit->setText(modelSelected->index(row, 0).data().toString());
    this->ui->phoneLineEdit->setText(modelSelected->index(row, 1).data().toString());
    this->ui->groupComboBox->setCurrentText(modelSelected->index(row, 2).data().toString());

    //选中一行后启用按钮
    this->ui->deleteButton->setEnabled(true);
    this->ui->updateButton->setEnabled(true);
}

/**
 * @see Qt Delete selected row in QTableView https://stackoverflow.com/questions/19012450/qt-delete-selected-row-in-qtableview
 */
void Widget::deleteARow()
{
    // 获取当前联系人行
    auto currentRow = this->ui->tableView->currentIndex().row();

    // 将联系人从数据模型中删除
    this->model->removeRow(currentRow);

    // 调整相关按钮 LineEdit 状态
    this->clearLineEdit();
    this->ui->deleteButton->setEnabled(false);
    this->ui->updateButton->setEnabled(false);
}

void Widget::alterALine()
{
    // 将数据先保存到地址簿当下位置
    // 获取当前联系人行
    this->newButtonSlot();
    this->deleteARow();
}
