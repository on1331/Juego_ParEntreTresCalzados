#pragma once
#include <iostream>
#include <time.h>

using namespace std;
class Calzado {
private:
	int talla;
	int ladoPie;  // 0 -> lado Derech
	// 1 -> lado Izquierdo
public:
	Calzado() {
		talla = 40;
		ladoPie = 0;
	};
	bool esParDe(Calzado cal) {
		if (talla == cal.talla && ladoPie != cal.ladoPie)
			return true;
		else
			return false;
	}
	void randomizar() {
		//talla = 40 + rand() % (42 + 1 - 40) talla entre 40-42
		//ladoPie = 0 + rand() % (1 + 1 -0)   ladoPie entre 0-1
		talla = 40 + rand() % 3;
		ladoPie = rand() % 2;
	}
	void verDatos() {
		cout << "Talla " << talla;
		if (ladoPie == 0)
		{
			cout << ", Derecho" << endl; // **
			// ** 4 puntos representa una talla
			for (int i = 0; i < 2; i++)
			{
				for (int j = 40; j <= talla; j++)
					cout << "  ";
				cout << "**" << endl;
			}
			for (int k = 0; k < 2; k++)
			{
				for (int l = 40; l <= talla; l++)
					cout << "**";
				cout << "**" << endl;
			}
		}
		else
		{
			cout << ", Izquierdo" << endl;
			cout << "**" << endl;
			cout << "**" << endl;
			for (int m = 0; m < 2; m++)
			{

				for (int n = 40; n <= (talla); n++) {
					cout << "**";
				}
				cout << "**" << endl;
			}
		}
	}


	void setTalla(int t) {
		talla = t;
	}
	void setLadoPie(int ld) {
		ladoPie = ld;
	}
	int getTalla() {
		return talla;
	}
	int getLadoPie() {
		return ladoPie;
	}
};

