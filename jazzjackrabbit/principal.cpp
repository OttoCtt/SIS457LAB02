#include <iostream>
#include <stdlib.h>
#include "Escenario.h"
#include "Obstaculo.h"
#include "Trampa.h"
#include "CajasBonificacion.h"
#include "JugadorR.h"
#include "Enemigo.h"
#include "EnemigoAcuatico.h"
#include "Jefe.h"
#include "JugadorRr.h"

using namespace std;

int main() {
	Escenario* ecn = new Escenario();
	Obstaculo* obs = new Obstaculo();
	Trampa* tra = new Trampa();
	JugadorR* ply = new JugadorR();
	Enemigo* enm = new Enemigo();

	system("pause");
	return 0;
}