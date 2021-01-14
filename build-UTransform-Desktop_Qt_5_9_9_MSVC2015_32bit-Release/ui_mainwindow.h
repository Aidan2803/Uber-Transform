/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *capsUncaps;
    QPushButton *engRusButton;
    QLabel *label;
    QPushButton *replaceButton;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *findInText_textEdit;
    QTextEdit *replaceForWhat_textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(890, 600);
        QIcon icon;
        icon.addFile(QStringLiteral("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        capsUncaps = new QPushButton(centralwidget);
        capsUncaps->setObjectName(QStringLiteral("capsUncaps"));
        capsUncaps->setGeometry(QRect(20, 480, 121, 71));
        engRusButton = new QPushButton(centralwidget);
        engRusButton->setObjectName(QStringLiteral("engRusButton"));
        engRusButton->setGeometry(QRect(160, 480, 121, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 16));
        replaceButton = new QPushButton(centralwidget);
        replaceButton->setObjectName(QStringLiteral("replaceButton"));
        replaceButton->setGeometry(QRect(300, 480, 61, 71));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 490, 91, 61));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(660, 490, 61, 61));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 30, 851, 441));
        textEdit->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";"));
        findInText_textEdit = new QTextEdit(centralwidget);
        findInText_textEdit->setObjectName(QStringLiteral("findInText_textEdit"));
        findInText_textEdit->setGeometry(QRect(470, 490, 151, 71));
        findInText_textEdit->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";"));
        replaceForWhat_textEdit = new QTextEdit(centralwidget);
        replaceForWhat_textEdit->setObjectName(QStringLiteral("replaceForWhat_textEdit"));
        replaceForWhat_textEdit->setGeometry(QRect(730, 490, 151, 71));
        replaceForWhat_textEdit->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 890, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        capsUncaps->setText(QApplication::translate("MainWindow", "CAPS/Uncaps", Q_NULLPTR));
        engRusButton->setText(QApplication::translate("MainWindow", "ENG/RUS", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Insert your text below:", Q_NULLPTR));
        replaceButton->setText(QApplication::translate("MainWindow", "Replace", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "What to change:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Change to:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
