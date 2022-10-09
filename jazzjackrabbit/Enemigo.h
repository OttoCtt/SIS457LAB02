#pragma once
class Enemigo
{
public:
	Enemigo();
	void Posicion();
	
private:
	int Vida;
	int Velocidad;
	int Ataque;
	int Defensa;
	int Regeneracion;
protected:
	void Mover();
	void Curar();
	void Golpear();
	void Disparar();

};

