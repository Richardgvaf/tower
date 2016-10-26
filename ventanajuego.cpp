#include "ventanajuego.h"
#include "ui_ventanajuego.h"

ventanajuego::ventanajuego(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventanajuego)
{
    ui->setupUi(this);
}

ventanajuego::~ventanajuego()
{
    delete ui;
}


