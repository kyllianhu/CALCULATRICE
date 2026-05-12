/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdNumber;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton7;
    QPushButton *pushButton_88;
    QPushButton *pushButton_99;
    QPushButton *pushButton_plus;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_55;
    QPushButton *pushButton_66;
    QPushButton *pushButton_moins;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_mul;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_0;
    QPushButton *pushButton_point;
    QPushButton *pushButton_egal;
    QPushButton *pushButton_div;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(300, 170, 181, 201));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout_2->addWidget(lcdNumber);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton7 = new QPushButton(widget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        horizontalLayout->addWidget(pushButton7);

        pushButton_88 = new QPushButton(widget);
        pushButton_88->setObjectName(QString::fromUtf8("pushButton_88"));

        horizontalLayout->addWidget(pushButton_88);

        pushButton_99 = new QPushButton(widget);
        pushButton_99->setObjectName(QString::fromUtf8("pushButton_99"));

        horizontalLayout->addWidget(pushButton_99);

        pushButton_plus = new QPushButton(widget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));

        horizontalLayout->addWidget(pushButton_plus);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);

        pushButton_55 = new QPushButton(widget);
        pushButton_55->setObjectName(QString::fromUtf8("pushButton_55"));

        horizontalLayout_5->addWidget(pushButton_55);

        pushButton_66 = new QPushButton(widget);
        pushButton_66->setObjectName(QString::fromUtf8("pushButton_66"));

        horizontalLayout_5->addWidget(pushButton_66);

        pushButton_moins = new QPushButton(widget);
        pushButton_moins->setObjectName(QString::fromUtf8("pushButton_moins"));

        horizontalLayout_5->addWidget(pushButton_moins);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        horizontalLayout_6->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_mul = new QPushButton(widget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));

        horizontalLayout_6->addWidget(pushButton_mul);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        horizontalLayout_7->addWidget(pushButton_0);

        pushButton_point = new QPushButton(widget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));

        horizontalLayout_7->addWidget(pushButton_point);

        pushButton_egal = new QPushButton(widget);
        pushButton_egal->setObjectName(QString::fromUtf8("pushButton_egal"));

        horizontalLayout_7->addWidget(pushButton_egal);

        pushButton_div = new QPushButton(widget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));

        horizontalLayout_7->addWidget(pushButton_div);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_88->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_99->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_55->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_66->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_moins->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_egal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
