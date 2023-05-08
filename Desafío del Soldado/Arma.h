#pragma once

#include <string>

using namespace std;

class Arma{
public:
	Arma();
	int Disparar();
	int Cargador();
	void Reload(int balas);
	virtual void Recargar() {};
	void Sound(string sonido);
	virtual string Tipo();

private:
	int m_balas = 0;
	string m_sonido = "";
};


class Revolver : public Arma {
public:
	Revolver();
	string Tipo();
	void Recargar();
};

class Escopeta : public Arma {
public:
	Escopeta();
	string Tipo();
	void Recargar();
};

class Rifle : public Arma {
public:
	Rifle();
	string Tipo();
	void Recargar();
};

