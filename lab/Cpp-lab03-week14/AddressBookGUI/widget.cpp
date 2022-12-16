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
 */
Widget::Widget(QWidget *parent) : QWidget(parent) ,
    ui(new Ui::Widget)
{
    this->ui->setupUi(this);
    this->Bind();
    this->fillComboBoxAndTableWidget();
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
    this->ui->tableWidget->horizontalHeader()->setStretchLastSection(true); //设定列延展特性

    //设定标题样式
    this->ui->tableWidget->horizontalHeader()->setStyleSheet("border:none; border-bottom:1px solid grey");

    //设定表格行选定行为
    this->ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    this->ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    //显示网格线
    this->ui->tableWidget->showGrid();

}

void Widget::newButtonSlot() {
    this->ui->textEdit->clear();
    this->setWindowTitle("New Address Book");

}

/*
 * @brief Widget::LoadFile
 * @note "/home", "*.txt, *.cpp"
 */
void Widget::LoadFile() {
    QString fileName = QFileDialog::getOpenFileName(this, "Choose a file", "/");
//    QString fileName = QFileDialog::getOpenFileName(this, "Choose a File",
//                                             QCoreApplication::applicationFilePath());
//    QFileDialog::getOpenFileName(this, "Choose a File", QCoreApplication::applicationDirPath());
    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Choose a File, please");
    } else {
        qDebug() << fileName;

        // Create a QFile Object
        // https://doc.qt.io/qt-6/qfile.html
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QByteArray byteArray = file.readAll();
        ui->textEdit->setText(QString(byteArray));
        file.close();
    }
}

/**
 * @brief Widget::saveButtonSlot
 * @see https://doc.qt.io/qt-6/qbytearray.html
 */
void Widget::saveButtonSlot() {

    // Save new comment
    QString fileName = QFileDialog::getSaveFileName(this, "Chose a file", QCoreApplication::applicationFilePath());
    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Choose a file");
    } else {
        QFile file(fileName);
        file.open(QIODevice::WriteOnly);
        QByteArray ba;
        ba.append(this->ui->textEdit->toPlainText().toUtf8());
        file.write(ba);
        file.close();
    }
}

/**
 * @brief Widget::on_exitButton_clicked
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

