#include "Soldado.h"

using namespace std;

Soldado::Soldado(string identificacion) { 
	m_identificacion = identificacion;
	m_armaequipada = false;
	Arma* m_equipada = NULL;
}

string Soldado::Iden() {
	return m_identificacion;
}

bool Soldado::Equipada() {
	return m_armaequipada;
}

int Soldado::Disparar() {

	return m_equipada->Disparar();
}

void Soldado::Recargar() {
	return m_equipada->Recargar();
}

bool Soldado::RecogerArma(Arma* arma) {

	if (m_equipada == NULL) {
		m_equipada = arma;
		m_armaequipada = true;
		return true;
	}
	return false;
}

bool Soldado::DejarArma() {

	if (m_equipada != NULL){
		m_equipada = NULL;
		m_armaequipada = false;
		return true;
	}
	return false;
}

string Soldado::VerArma() {

	if (m_equipada != NULL) {
		return m_equipada->Tipo();
	}
	return "ningún";
}

int Soldado::VerBalas() {

	return m_equipada->Cargador();

}