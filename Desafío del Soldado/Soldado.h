#pragma once

#include "Arma.h"

using namespace std;

class Soldado {
public:
	Soldado(string identificacion);
	string Iden();
	int Disparar();
	void Recargar();
	bool Equipada();
	bool RecogerArma(Arma* arma);
	bool DejarArma();
	string VerArma();
	int VerBalas();

private:
	string m_identificacion = "";
	bool m_armaequipada;
	Arma* m_equipada;
};