#include "mainwindow.h"


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


void MainWindow::on_pushButton_clicked()
{
    Player *player = new Player;
    Dialog chooseXO;
    chooseXO.setPlayer(player);
    chooseXO.setModal(true);
    chooseXO.exec();
    ui->playerName->setText(QString::fromStdString(player->getName()));
    ui->playerName->setAlignment(Qt::AlignCenter);
    game = new Game(player);
    play();
}

void MainWindow::mapButtonsEnable(){
    ui->button_1->setEnabled(true);
    ui->button_2->setEnabled(true);
    ui->button_3->setEnabled(true);
    ui->button_4->setEnabled(true);
    ui->button_5->setEnabled(true);
    ui->button_6->setEnabled(true);
    ui->button_7->setEnabled(true);
    ui->button_8->setEnabled(true);
    ui->button_9->setEnabled(true);
}

void MainWindow::mapButtonsDisable(){
    ui->button_1->setEnabled(false);
    ui->button_2->setEnabled(false);
    ui->button_3->setEnabled(false);
    ui->button_4->setEnabled(false);
    ui->button_5->setEnabled(false);
    ui->button_6->setEnabled(false);
    ui->button_7->setEnabled(false);
    ui->button_8->setEnabled(false);
    ui->button_9->setEnabled(false);
}

void MainWindow::play(){
    if(game->getPlayer() == "O"){
        mapButtonsDisable();
    } else{
        mapButtonsEnable();
    }
}
