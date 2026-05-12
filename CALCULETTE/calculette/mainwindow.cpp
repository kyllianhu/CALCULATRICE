#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , pendingValue(0.0)
    , pendingOperator("")
    , waitingForOperand(true)
    , currentInput("0")
{
    ui->setupUi(this);
    
    ui->lcdNumber->display(currentInput);

    // Connexion des boutons numériques
    connect(ui->pushButton_0, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_1, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_55, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_66, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton7, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_88, &QPushButton::clicked, this, &MainWindow::digitClicked);
    connect(ui->pushButton_99, &QPushButton::clicked, this, &MainWindow::digitClicked);

    // Point décimal
    connect(ui->pushButton_point, &QPushButton::clicked, this, &MainWindow::pointClicked);

    // Opérateurs
    connect(ui->pushButton_plus, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->pushButton_moins, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->pushButton_mul, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    connect(ui->pushButton_div, &QPushButton::clicked, this, &MainWindow::operatorClicked);

    // Égal
    connect(ui->pushButton_egal, &QPushButton::clicked, this, &MainWindow::equalClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digitClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if (!clickedButton) return;

    QString digitValue = clickedButton->text();

    if (waitingForOperand) {
        currentInput = digitValue;
        waitingForOperand = false;
    } else {
        if (currentInput == "0" && digitValue == "0") return;
        if (currentInput == "0" && digitValue != "0") {
            currentInput = digitValue;
        } else {
            currentInput += digitValue;
        }
    }
    ui->lcdNumber->display(currentInput);
}

void MainWindow::pointClicked()
{
    if (waitingForOperand) {
        currentInput = "0.";
        waitingForOperand = false;
    } else if (!currentInput.contains(".")) {
        currentInput += ".";
    }
    ui->lcdNumber->display(currentInput);
}

void MainWindow::operatorClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if (!clickedButton) return;

    QString clickedOperator = clickedButton->text();
    double operand = currentInput.toDouble();

    if (!pendingOperator.isEmpty() && !waitingForOperand) {
        calculate(operand, pendingOperator);
        ui->lcdNumber->display(QString::number(pendingValue));
        currentInput = QString::number(pendingValue);
    } else {
        pendingValue = operand;
    }

    pendingOperator = clickedOperator;
    waitingForOperand = true;
}

void MainWindow::equalClicked()
{
    double operand = currentInput.toDouble();

    if (!pendingOperator.isEmpty()) {
        calculate(operand, pendingOperator);
        pendingOperator.clear();
    } else {
        pendingValue = operand;
    }

    currentInput = QString::number(pendingValue);
    ui->lcdNumber->display(currentInput);
    waitingForOperand = true;
}

void MainWindow::calculate(double rightOperand, const QString &pendingOperator)
{
    if (pendingOperator == "+") {
        pendingValue += rightOperand;
    } else if (pendingOperator == "-") {
        pendingValue -= rightOperand;
    } else if (pendingOperator == "*") {
        pendingValue *= rightOperand;
    } else if (pendingOperator == "/") {
        if (rightOperand == 0.0) return; // Ne pas diviser par zéro
        pendingValue /= rightOperand;
    }
}

