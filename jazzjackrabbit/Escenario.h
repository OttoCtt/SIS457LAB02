#pragma once
class Escenario
{
public:
	Escenario();
	int Friccion;
	int Gravedad;
	int Iluminacion;
protected:
	void Luz();
	void Colision();
	void Fgravedad();
private:
	void Generacion();
	int seed;
};

