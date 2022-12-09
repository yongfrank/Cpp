#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout> // Horizontal Layout
#include <QVBoxLayout> // Vertical Layout
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    QLabel *infoLabel = new QLabel;
    QLabel *openLabel = new QLabel;
    QLineEdit *cmdLineEdit = new QLineEdit;
    QPushButton *cancelButton = new QPushButton;
    QPushButton *commitButton = new QPushButton;
    QPushButton *browseButton = new QPushButton;

    infoLabel->setText("Type the name of a program, folder, document, or Internet resource, and Windows will open it for you.");
    openLabel->setText("Open: ");
    commitButton->setText("OK");
    cancelButton->setText("Cancel");
    browseButton->setText("Browse...");


    QHBoxLayout *cmdLayout = new QHBoxLayout; // Horizontal layout object
    cmdLayout->addWidget(openLabel);
    cmdLayout->addWidget(cmdLineEdit);
    
    QHBoxLayout *buttonLayout = new QHBoxLayout; // Horizontal Layout Object
    buttonLayout->addWidget(commitButton);
    buttonLayout->addWidget(cancelButton);
    buttonLayout->addWidget(browseButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(infoLabel);
    mainLayout->addLayout(cmdLayout);
    mainLayout->addLayout(buttonLayout);

    QWidget window;
    window.setLayout(mainLayout);
    window.show();
    window.setWindowTitle("Run");

    return app.exec();
}
