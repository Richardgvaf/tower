#ifndef DATOSESPECIALES_H
#define DATOSESPECIALES_H
#include "torres.h"
#include "Ogro.h"

class DatosEspeciales
{
public:
    DatosEspeciales();
    static int ArrayTowwer[4][4];
    static torres torre[4][4];
    static int selecTorre;
    static bool activate;
    static Correrlabels();
    static Ogro nogro[20];
    static int oro;
    static QString user;
};

#endif // DATOSESPECIALES_H
