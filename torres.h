#ifndef TORRES_H
#define TORRES_H
#include <QString>

class torres
{
public:
    torres();
    QString getEtapa();
    void comprar();
    int getCosto();
    int Alcance;
    int Dano;
    int EsperaDanar;
    int costo;
    QString etapa1;
    QString etapa2;
    QString etapa3;
    QString etapa4;
private:


    int etapa;
};

#endif // TORRES_H
