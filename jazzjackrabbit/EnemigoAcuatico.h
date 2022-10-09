#pragma once
#include "Enemigo.h"
class EnemigoAcuatico :
    public Enemigo
{
public:
    EnemigoAcuatico();
    int Oxigeno;
protected:
    void Nadar();
    void RespiracionAcuatica();
private:
};

