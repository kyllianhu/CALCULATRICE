#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digitClicked();
    void operatorClicked();
    void equalClicked();
    void pointClicked();

private:
    Ui::MainWindow *ui;
    
    double valeurPrecedente;
    QString operateur;
    bool attenteSaisie;
    QString saisie;

    void calculate(double valeurActuelle, const QString &operateur);
};
#endif // MAINWINDOW_H
