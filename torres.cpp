#include "torres.h"

torres::torres()
{
    etapa1      = "C:/Users/estadm.B-71734/Documents/progra/imgs/torre.png";
    etapa2      = "C:/Users/estadm.B-71734/Documents/progra/imgs/torre2.png";
    etapa3      = "C:/Users/estadm.B-71734/Documents/progra/imgs/torre3.png";
    etapa4      = "C:/Users/estadm.B-71734/Documents/progra/imgs/torre4.png";
    Alcance     = 1;
    Dano        = 20;
    EsperaDanar = 4;
    costo       = 100;
    etapa       = 1;
}
QString torres::getEtapa(){
    if(etapa==1){
        return etapa1;
    }
    if(etapa == 2){
        return etapa2;
    }
    if(etapa == 3){
        return etapa3;
    }
    if(etapa == 4){
        return etapa4;
    }

}
int torres::getCosto(){
    return costo;
}
void torres::comprar(){

    if (etapa<=3){
        costo = costo*3;
        Dano  = Dano+20;
        etapa = etapa+1;
        EsperaDanar = EsperaDanar - 1;
    }

}
