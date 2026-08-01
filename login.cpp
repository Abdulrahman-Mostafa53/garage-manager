#include "login.h"
#include "ui_login.h"
#include "gui.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->errorMsg->hide();
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    QString userName = ui->userNameF->text();
    QString password = ui->passwordF->text();
    if(userName=="sherif" && password == "123"){
        this->close();
        Gui *garage = new Gui();
        garage->show();

    }
    else{
        ui->errorMsg->show();
    }
}

