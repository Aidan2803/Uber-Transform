#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_capsUncaps_clicked()
{
    QString textFromTextBox;
    int counterLower = 0, counterUpper = 0, spacCounter = 0;

    textFromTextBox = ui->textEdit->toPlainText();

    for(int i = 0; i < textFromTextBox.size(); i++){
        if(textFromTextBox[i] != ' '){
            if(textFromTextBox[i].isLower()){
                counterLower++;
            }
            else{counterUpper++;}
        }
        else{spacCounter++;}
    }

    if(counterLower >= textFromTextBox.size() - spacCounter){
        textFromTextBox = textFromTextBox.toUpper();
    }
    else if(counterUpper >= textFromTextBox.size() - spacCounter){
        textFromTextBox = textFromTextBox.toLower();
    }

    qDebug() << textFromTextBox;

    ui->textEdit->setText(textFromTextBox);
}

void MainWindow::on_engRusButton_clicked()
{
    QString textFromTextBox;
    std::string textFromTextBoxCppString;
    int counterRus = 0, counterEng = 0;

    QString engKeys = "qwertyuiop[]asdfghjkl;'\zxcvbnm,./QWERTYUIOP{}ASDFGHJKL:\"|ZXCVBNM<>?";
    QString rusKeys = "йцукенгшщзхъфывапролджэ\ячсмитьбю.ЙЦУКЕНГШЩЗХЪФЫВАПРОЛДЖЭ/ЯЧСМИТЬБЮ,";

    textFromTextBox = ui->textEdit->toPlainText();
    textFromTextBoxCppString = textFromTextBox.toStdString();

    for(int i = 0; i < textFromTextBox.size(); i++){
        if(textFromTextBoxCppString[i] >= 65 && textFromTextBoxCppString[i] <= 122){
            counterEng++;
        }
        else{
            counterRus++;
        }
    }

    if(counterEng >= counterRus){
        for(int i = 0; i < textFromTextBox.size(); i++){
            if(textFromTextBox[i] != ' '){
                int replaceJ;
                for(int j = 0; j < engKeys.size(); j++){
                    if(textFromTextBox[i] == engKeys[j]){
                        replaceJ = j;
                    }
                }
                textFromTextBox[i] = rusKeys[replaceJ];
            }
        }
    }
    else{
        for(int i = 0; i < textFromTextBox.size(); i++){
            if(textFromTextBox[i] != ' '){
                int replaceJ;
                for(int j = 0; j < rusKeys.size(); j++){
                    if(textFromTextBox[i] == rusKeys[j]){
                        replaceJ = j;
                    }
                }
                textFromTextBox[i] = engKeys[replaceJ];
            }
        }
    }

    ui->textEdit->setText(textFromTextBox);
}

void MainWindow::on_replaceButton_clicked()
{   
    if(ui->findInText_textEdit->toPlainText() == "" || ui->replaceForWhat_textEdit->toPlainText() == ""){
        QMessageBox msgBox;
        msgBox.setText("\"What to change\" and \"Change to\" cant be empty");
        msgBox.exec();
    }
    else{
        QString textFromTextBox;
        QString findInText;
        QString replaceForWhat;
        bool end = false;

        std::vector<int> replaceVect;


        textFromTextBox = ui->textEdit->toPlainText();
        findInText = ui->findInText_textEdit->toPlainText();
        replaceForWhat = ui->replaceForWhat_textEdit->toPlainText();

        while(!end){
             int replaceI = -1;
            for(int i = 0; i < textFromTextBox.size(); i++){
                if(textFromTextBox[i] == findInText[0]){
                    int counter = 0;
                    for(int j = 0; j < findInText.size(); j++){
                        if(textFromTextBox[i + j] == findInText[j]){
                           counter++;
                        }
                    }
                    if(counter == findInText.size()){
                       replaceI = i;
                       break;
                    }
                }
                if(i == textFromTextBox.size() - 1){
                    end = true;
                }
            }
            if(replaceI != -1){
                QString resultString;
                QString strLeftPart;
                QString strRightPart;
                int jumpOverIndex = 0;
                strLeftPart = textFromTextBox.left(replaceI);
                jumpOverIndex = replaceI + findInText.size();
                if(jumpOverIndex < textFromTextBox.size()){
                    strRightPart = textFromTextBox.right(textFromTextBox.size() - jumpOverIndex);
                }
                resultString.append(strLeftPart);
                resultString.append(replaceForWhat);
                resultString.append(strRightPart);

                textFromTextBox = resultString;

                ui->textEdit->setText(textFromTextBox);
            }
        }
    }
}
