#pragma once
class JugadorR
{
public:
	JugadorR();
	void Posicion();
	int Vida;
	int Velocidad;

private:
	
	int Stamina;
	int Resistencia;
	int Ataque;
	int Defensa;
	int Regeneracion;

protected:
	void Mover();
	void Curar();
	void Golpear();
	void Disparar();
	void Comer();
	void Transformar();
	void Trepar();
};

