#include <iostream>
#include "Soldado.h"
#include <locale.h>
#include "Arma.h"



using namespace std;

int main() {
	setlocale(LC_ALL, "");

	Soldado* soldado1 = new Soldado("Emiliano");
	Arma* revolver1 = new Revolver();
	Arma* escopeta1 = new Escopeta();
	Arma* rifle1 = new Rifle();

	bool menu = true;

	while (menu) {
		char opcion = 'n';
		cout << endl <<"-= = Bienvenido al campo de entrenamiento, Soldado "<< soldado1->Iden() <<" == -" << endl;
		cout << "¿Qué desea hacer?" << endl;
		cout << "(presione el número correspondiente a la opción del menú)" << endl;
		cout << endl;
		cout << "1- Recoger arma" << endl << "2- Dejar arma" << endl << "3- Disparar" << endl << "4- Ver arma en uso" << endl;
		cout << "5- Recargar" << endl << "X-Salir" << endl;
		cout << "Su opción: ";
		cin >> opcion;
		cin.get();
		system("cls");

		if (opcion == 'X' or opcion == 'x') { menu = false; }
		if (opcion == '1') {
			cout << endl << "Por favor, escoja el arma que desea utilizar:" << endl << endl;
			cout << "1- Revolver" << endl << "2- Rifle" << endl << "3- Escopeta" << endl;
			cout << "X- Volver atrás" << endl;
			cout << "Su opción: ";
			cin >> opcion;
			cin.get();			
			if (opcion == '1') { 
				if (!soldado1->RecogerArma(revolver1)) {
					system("cls");
					cout << "Soldado ya tiene un arma, úsela!"<< endl; 
				} 
			}
			if (opcion == '2') {
				if (!soldado1->RecogerArma(rifle1)) { 
					system("cls");
					cout << "Soldado ya tiene un arma, úsela!" << endl;
						
				}
			}
			if (opcion == '3') { 
				if (!soldado1->RecogerArma(escopeta1)) {
					system("cls");
					cout << "Soldado ya tiene un arma, úsela!" << endl;
				}
			}
			opcion = 'n';
		}
		if (opcion == '2') {
			cout << "Has dejado " << soldado1->VerArma() << endl;
			if (soldado1->DejarArma()) { cout << endl; }
		}
		if (opcion == '3') {
			if (soldado1->Equipada()) {
				if (soldado1->Disparar() < 1) { cout << "Se ha quedado sin balas soldado " << soldado1->Iden() << ". Recargue!" << endl; }
			}
			else {
				cout << "No tiene un arma soldado " << soldado1->Iden() << ". Tome una y empiece a disparar!" << endl;
			}
			
		}
		if (opcion == '4') {
			if (soldado1->Equipada()) {
				cout << "Está con " << soldado1->VerArma() << " y tiene " << soldado1->VerBalas() << " balas.";
				cout << ". Úsela soldado " << soldado1->Iden() << "!" << endl;
			}
			else {
				cout << "Deje de mirar sus manos vacías Soldado " << soldado1->Iden() << ", tome un arma." << endl;
			}
		}
		if (opcion == '5') {
			if (soldado1->Equipada()) {
				soldado1->Recargar();
			}
			else {
				cout << "No tiene un arma soldado " << soldado1->Iden() << ". Tome una y empiece a disparar!" << endl;
			}
		}
	}
	
	return 0;
}