#include "Ogro.h"
#include <QString>

Ogro::Ogro()
{
vida = 10;
resistencia = 5;
velocidad = 4;
imagen = "C:/Users/estadm.B-71734/Documents/progra/imgs/ogri.png";
x = 300;
y = 300;
}
QString Ogro::mover(){
    x = x+velocidad;
    y = y+velocidad;
    return imagen;
}
