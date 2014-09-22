#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "RGTasksOfADay.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    RGTasksOfADay taskOfDay;
    taskOfDay.initFromDataSouce();

}

MainWindow::~MainWindow()
{
    delete ui;
}
