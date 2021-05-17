#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setPlayer(Player *player){
    this->player = player;
}

void Dialog::on_pushButton_clicked()
{
    player->setX();
    this->close();
}

void Dialog::on_pushButton_2_clicked()
{
    player->setO();
    this->close();
}
