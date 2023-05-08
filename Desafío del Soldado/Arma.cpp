#include <iostream>
#include "Arma.h"

using namespace std;

Arma::Arma() {
	m_balas = 0;
	m_sonido = "";
}

int Arma::Disparar() {
	if (m_balas > 0) {
		m_balas -= 1;
		cout << m_sonido << endl;
		return m_balas;
	}
	return 0;
}
int Arma::Cargador() {
	return m_balas;
}

void Arma::Reload(int balas) {
	m_balas = balas;
}

void Arma::Sound(string sonido) {
	m_sonido = sonido;
}

string Arma::Tipo() {
	return "None";
}

Revolver::Revolver() {
	Reload(8);
	Sound("Pum!");
}

string Revolver::Tipo() {
	return "Revolver";
}

void Revolver::Recargar() {
	Reload(8);
}

Escopeta::Escopeta() {
	Reload(6);
	Sound("Paaa!");
}

string Escopeta::Tipo() {
	return "Escopeta";
}

void Escopeta::Recargar() {
	Reload(6);
}

Rifle::Rifle() {
	Reload(30);
	Sound("Pum!Pum!Pum!");
}

string Rifle::Tipo() {
	return "Rifle";
}

void Rifle::Recargar() {
	Reload(30);
}