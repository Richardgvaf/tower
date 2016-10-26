#include "games.h"
#include "ui_games.h"
#include <QString>
#include <QMessageBox>

games::games(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::games)
{
    ui->setupUi(this);
//lol
    //QString filename = QFileDialog::getOpenFileName(this,tr("choose"),"",tr("Images(*.png *.jpg *.bmp)"));
    QImage img;
    bool val = img.load(rutaimagen);
    QLabel *label[] = {ui->lb1,ui->lb2,ui->lb3,ui->lb4,ui->lb5,ui->lb6,ui->lb7,ui->lb8,ui->lb9};
   // QMessageBox::information(this,"ok",filename);

    if(val){
        try{
            int x = 0;

            while(x<=8){
                img = img.scaledToWidth(label[x]->width(),Qt::SmoothTransformation);
                //QMessageBox::information(this,"ok","se emitió la señal clicket");
                label[x]->setPixmap(QPixmap::fromImage(img));
                x = x+1;
            }
        }catch(...){}
    }

    //Ui->lb1->setPixmap(QPixmap(rutaimagen));
    //Ui->lb1->setPixmap(QPixmap(rutaimagen));




}

games::~games()
{
    delete ui;
}



void games::on_torre_clicked()
{
    int x = 0;
    QLabel *label[] = {ui->lb1,ui->lb2,ui->lb3,ui->lb4,ui->lb5,ui->lb6,ui->lb7,ui->lb8,ui->lb9};
    while(x<=8){
        QImage img;
        img.load(fondo2);
        img = img.scaledToWidth(label[x]->width(),Qt::SmoothTransformation);
        //QMessageBox::information(this,"ok","se emitió la señal clicket");
        label[x]->setPixmap(QPixmap::fromImage(img));
        x = x+1;
    }
}
