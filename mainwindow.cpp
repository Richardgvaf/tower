#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ventanajuego.h>
#include <games.h>
#include <QMessageBox>
#include "datosespeciales.h"

QString DatosEspeciales::user;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnIngresar_clicked()
{
    const QString user = ui->userName->text();
    if(!user.isEmpty()){
        DatosEspeciales::user = user;
        /*QMessageBox::information(this,"ok","se emitió la señal clicket");
        ventanajuego *ventana1 = new ventanajuego;
        ventana1->show();*/
        games *juego = new games;
        juego->show();
        close();
    }
}
