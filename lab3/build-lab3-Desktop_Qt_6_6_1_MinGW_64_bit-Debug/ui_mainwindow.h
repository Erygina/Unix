/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *startButton;
    QLabel *label;
    QDoubleSpinBox *euroEd;
    QDoubleSpinBox *dollarEd;
    QLabel *label_2;
    QLabel *eurolabel;
    QLabel *label_4;
    QLabel *dollarlabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(260, 10, 80, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 71, 16));
        euroEd = new QDoubleSpinBox(centralwidget);
        euroEd->setObjectName("euroEd");
        euroEd->setGeometry(QRect(100, 10, 62, 22));
        dollarEd = new QDoubleSpinBox(centralwidget);
        dollarEd->setObjectName("dollarEd");
        dollarEd->setGeometry(QRect(180, 10, 62, 22));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 81, 16));
        eurolabel = new QLabel(centralwidget);
        eurolabel->setObjectName("eurolabel");
        eurolabel->setGeometry(QRect(110, 60, 45, 15));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 90, 91, 16));
        dollarlabel = new QLabel(centralwidget);
        dollarlabel->setObjectName("dollarlabel");
        dollarlabel->setGeometry(QRect(110, 90, 45, 15));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Next value", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Initial value", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Next euro value", nullptr));
        eurolabel->setText(QCoreApplication::translate("MainWindow", "Euro", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Next dollar value", nullptr));
        dollarlabel->setText(QCoreApplication::translate("MainWindow", "Dollar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
