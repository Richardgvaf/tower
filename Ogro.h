#ifndef OGRO_H
#define OGRO_H
#include <QString>

class Ogro
{
public:
    Ogro();
    QString mover();
    int x;
    int y;
private:
    int velocidad;
    int vida;
    int resistencia;

    QString imagen;


};

#endif // OGRO_H
