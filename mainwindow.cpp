#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , valeurPrecedente(0.0)
    , operateur("")
    , attenteSaisie(true)
    , saisie("0")
{
    ui->setupUi(this);
    
    ui->lcdNumber->display(saisie);

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

    if (attenteSaisie) {
        saisie = digitValue;
        attenteSaisie = false;
    } else {
        if (saisie == "0" && digitValue == "0") return;
        if (saisie == "0" && digitValue != "0") {
            saisie = digitValue;
        } else {
            saisie += digitValue;
        }
    }
    ui->lcdNumber->display(saisie);
}

void MainWindow::pointClicked()
{
    if (attenteSaisie) {
        saisie = "0.";
        attenteSaisie = false;
    } else if (!saisie.contains(".")) {
        saisie += ".";
    }
    ui->lcdNumber->display(saisie);
}

void MainWindow::operatorClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    if (!clickedButton) return;

    QString clickedOperator = clickedButton->text();
    double valeurActuelle = saisie.toDouble();

    if (!operateur.isEmpty() && !attenteSaisie) {
        calculate(valeurActuelle, operateur);
        ui->lcdNumber->display(QString::number(valeurPrecedente));
        saisie = QString::number(valeurPrecedente);
    } else {
        valeurPrecedente = valeurActuelle;
    }

    operateur = clickedOperator;
    attenteSaisie = true;
}

void MainWindow::equalClicked()
{
    double valeurActuelle = saisie.toDouble();

    if (!operateur.isEmpty()) {
        calculate(valeurActuelle, operateur);
        operateur.clear();
    } else {
        valeurPrecedente = valeurActuelle;
    }

    saisie = QString::number(valeurPrecedente);
    ui->lcdNumber->display(saisie);
    attenteSaisie = true;
}

void MainWindow::calculate(double valeurActuelle, const QString &operateur)
{
    if (operateur == "+") {
        valeurPrecedente += valeurActuelle;
    } else if (operateur == "-") {
        valeurPrecedente -= valeurActuelle;
    } else if (operateur == "*") {
        valeurPrecedente *= valeurActuelle;
    } else if (operateur == "/") {
        if (valeurActuelle == 0.0) return; // Ne pas diviser par zéro
        valeurPrecedente /= valeurActuelle;
    }
}

