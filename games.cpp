#include "games.h"
#include "ui_games.h"
#include "datosespeciales.h"
#include "magos.h"
#include <QString>
#include <QMessageBox>
#include <QPushButton>
using namespace std;
int DatosEspeciales::ArrayTowwer[4][4]= {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
torres DatosEspeciales::torre[4][4];
Ogro DatosEspeciales::nogro[20];
int DatosEspeciales::oro = 20000;
//QString DatosEspeciales::user;
int DatosEspeciales::selecTorre=0;
games::games(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::games)
{
    ui->setupUi(this);

    ui->btnpagar->setVisible(false);
    upgrade = false;

    //*************************Constructor**********************************************//
    botoncitos[0][0] = ui->btn11;
    botoncitos[0][1] = ui->btn12;
    botoncitos[0][2] = ui->btn13;
    botoncitos[0][3] = ui->btn14;
    botoncitos[1][0] = ui->btn21;
    botoncitos[1][1] = ui->btn22;
    botoncitos[1][2] = ui->btn23;
    botoncitos[1][3] = ui->btn24;
    botoncitos[2][0] = ui->btn31;
    botoncitos[2][1] = ui->btn32;
    botoncitos[2][2] = ui->btn33;
    botoncitos[2][3] = ui->btn34;
    botoncitos[3][0] = ui->btn41;
    botoncitos[3][1] = ui->btn42;
    botoncitos[3][2] = ui->btn43;
    botoncitos[3][3] = ui->btn44;

    //***************************Agregamos labels para los monstruos**********************//

    labeles[0] = ui->lb0;
    labeles[1] = ui->lb1;
    labeles[2] = ui->lb2;
    labeles[3] = ui->lb3;
    labeles[4] = ui->lb4;
    labeles[5] = ui->lb5;
    labeles[6] = ui->lb6;
    labeles[7] = ui->lb7;
    labeles[8] = ui->lb8;
    labeles[9] = ui->lb9;
    labeles[10] = ui->lb10;
    labeles[11] = ui->lb11;
    labeles[12] = ui->lb12;
    labeles[13] = ui->lb13;
    labeles[14] = ui->lb14;
    labeles[15] = ui->lb15;
    labeles[16] = ui->lb16;
    labeles[17] = ui->lb17;
    labeles[18] = ui->lb18;
    labeles[19] = ui->lb19;


    DatosEspeciales::selecTorre = 0;
    actualizarBotones(rutaimagen);
}

games::~games()
{
    delete ui;
}


void games::actualizarBotones(QString fondo){


    ui->lbusuario->setText(DatosEspeciales::user);
    ui->lboro->setText(QString::number(DatosEspeciales::oro));
    QPixmap pixmap(fondo);


    int x = 0;
    int posX = 100;
    int posY = 100;
    int opcX = 0;
    int opcY = 0;
    while(x<=15){
        //*******************ESTA SECCIÓN CARGA LAS IMAGENES EN LOS BOTONES*************************//

        if(DatosEspeciales::ArrayTowwer[opcY][opcX] == 0){
            botoncitos[opcY][opcX]->setIcon(pixmap);
            botoncitos[opcY][opcX]->setGeometry(posX,posY,100,100);
            botoncitos[opcY][opcX]->setIconSize(QSize(100,100));
        }else{
            botoncitos[opcY][opcX]->setIcon(QPixmap(DatosEspeciales::torre[opcY][opcX].getEtapa()));
        }
        //**************************ESTA SECCIÓN CARGA LAS POSICIONES DE LOS BOTONES**************//
        x = x+1;
        opcX = opcX + 1;
        posX = posX +  100;
        if(posX == 500){
            opcX = 0;
            opcY = opcY+1;
            posX = 100;
            posY = posY+100;

        }
    }
}

void games::on_torre_clicked()
{
    DatosEspeciales::selecTorre = 1;
    actualizarBotones(fondo2);
}



void games::on_btn11_clicked()
{
    selec(0,0);
}


//***********************EN ESTA SECCIÓN ES PARA CUANDO SE SELECCIONA UN BOTÓN DEL TABLERO***************//
void games::selec(int x,int y){
    if(!(DatosEspeciales::ArrayTowwer[x][y]==0)){
        //QMessageBox::information(this,"ok","hola");
        ui->btnpagar->setText(QString::number(DatosEspeciales::torre[x][y].getCosto()));
        ui->btnpagar->setVisible(true);
        ui->btnpagar->setFocus();
        seleccionx = x;
        selecciony = y;
        upgrade = true;
    }else{
            if(DatosEspeciales::selecTorre == 1){
                //aquí voy a intentar llamar el objeto torre
                 {
                    if(DatosEspeciales::ArrayTowwer[x][y]==0){
                        QPixmap pixmap(DatosEspeciales::torre[x][y].getEtapa());
                        botoncitos[x][y]->setIcon(pixmap);
                        DatosEspeciales::ArrayTowwer[x][y] = 1;
                    }

                    actualizarBotones(rutaimagen);
                    DatosEspeciales::selecTorre = 0;
                }
            }
            if(DatosEspeciales::selecTorre == 2){
                QMessageBox::information(this,"ok","hola");
                if(DatosEspeciales::ArrayTowwer[x][y] == 0){
                    magos mago;
                    DatosEspeciales::torre[x][y]= mago;
                    QPixmap pixmap(DatosEspeciales::torre[x][y].getEtapa());
                    botoncitos[x][y]->setIcon(pixmap);
                    DatosEspeciales::ArrayTowwer[x][y] = 1;
                }
                actualizarBotones(rutaimagen);
                DatosEspeciales::selecTorre == 0;
            }
        }

}


void games::mover(){
    //*********************************metodo que mueve los ogros***********************//

    ui->lb0->setPixmap(QPixmap(DatosEspeciales::nogro[0].mover()));
    ui->lb0->setGeometry(DatosEspeciales::nogro[0].x,DatosEspeciales::nogro[0].y,100,100);

}
//*****************EN ESTA SECCIÓN SE HACE EL UPGRADE *******************//


void games::upgradeTorre(){
    //QMessageBox::information(this,"ok","hola");
    if(upgrade){

        if(DatosEspeciales::oro>=(DatosEspeciales::torre[seleccionx][selecciony].getCosto())){
            //QMessageBox::information(this,"ok","hola como está?");
            DatosEspeciales::oro = DatosEspeciales::oro - DatosEspeciales::torre[seleccionx][selecciony].getCosto();
            DatosEspeciales::torre[seleccionx][selecciony].comprar();
            actualizarBotones(rutaimagen);
            ui->btnpagar->setVisible(false);
            ui->btnpagar->setText("");
        }
    }
    upgrade == false;
}

void games::on_btn12_clicked()
{
    selec(0,1);
}

void games::on_btn13_clicked()
{
    selec(0,2);
}

void games::on_btn14_clicked()
{
    selec(0,3);

}

void games::on_btn21_clicked()
{
    selec(1,0);
}

void games::on_btn22_clicked()
{
    selec(1,1);
}

void games::on_btn23_clicked()
{
    selec(1,2);
}

void games::on_btn24_clicked()
{
    selec(1,3);
}

void games::on_btn31_clicked()
{
    selec(2,0);
}

void games::on_btn32_clicked()
{
    selec(2,1);
}

void games::on_btn33_clicked()
{
    selec(2,2);

}
void games::on_btn34_clicked()
{
    selec(2,3);
}

void games::on_btn41_clicked()
{
    selec(3,0);
}

void games::on_btn42_clicked()
{
    selec(3,1);
}

void games::on_btn43_clicked()
{
    selec(3,2);
}

void games::on_btn44_clicked()
{
    selec(3,3);
}

void games::on_pushButton_clicked()
{
    mover();
}

void games::on_btnpagar_clicked()
{
    upgradeTorre();
}



void games::on_btnMago_clicked()
{
    DatosEspeciales::selecTorre = 2;
    actualizarBotones(fondo3);
}
