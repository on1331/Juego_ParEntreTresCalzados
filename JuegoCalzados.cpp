#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include "Calzado.h"
using namespace std;
int main() {
	srand(time(NULL));
	Calzado a, b, c;
	string resp;
	string parEncontrado;
	int puntajeTotal = 0;
	while (true) {
		a.randomizar();
		b.randomizar();
		c.randomizar();

		cout << "A -> ";
		a.verDatos();
		cout << "B -> ";
		b.verDatos();
		cout << "C -> ";
		c.verDatos();

		//Buscando el par
		if (a.esParDe(b)) {
			parEncontrado = "AB";
		}
		else {
			if (b.esParDe(c)) {
				parEncontrado = "BC";
			}
			else {
				if (a.esParDe(c))
					parEncontrado = "AC";
				else
					parEncontrado = "n";
			}

		}
		cout << endl;
		cout << "No Hay Par[n]" << endl;
		cout << "Salir[s]" << endl;
		cout << endl;
		cout << "CUALES FORMAN UN PAR ?: ";
		cin >> resp;

		if (resp == "s")
		{
			cout << "Puntaje Total: " << puntajeTotal;
			break;
		}
		else
		{

			if (resp == parEncontrado)
			{
				cout << "Acertaste" << endl;
				puntajeTotal += 1;
			}
			else
			{
				cout << "Incorrecto, ";
				if (parEncontrado == "n")
					cout << "No Hay Pares" << endl;
				else
					cout << parEncontrado << " forman un Par." << endl;


			}

		}
		parEncontrado = "";

		cout << "============================" << endl;
	}
	return 0;
}

