#pragma once
#include "Obstaculo.h"
class CajasBonificacion :
    public Obstaculo
{
    CajasBonificacion();
public:
    int Dureza;
    int Ubicacion;
private:
    void Desaparecer();
    void Aparecer();
    void Bonificacion();
};

