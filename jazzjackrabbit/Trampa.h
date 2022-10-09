#pragma once
#include "Escenario.h"
class Trampa :
    public Escenario
{
public:
    Trampa();
    int Dureza;
protected:
    int VelocidadMecanismo;
    int Dano;
    int Ubicacion;
    void MecanismoMovimiento();
    void Destruir();
    void Perimetro();
};

