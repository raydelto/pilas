#include <iostream>
#include "Pila.h"
using namespace std;


int main() {
	Nodo* disco1 = new Nodo("Caramelos De Cianuro");
	Nodo* disco2 = new Nodo("Enanitos Verdes");
	Nodo* disco3 = new Nodo("Heroes del Silencio");
	Nodo* disco4 = new Nodo("Sodastero");
	Pila* pila = new Pila();
	pila -> agregar(disco1);
	pila -> agregar(disco2);
	pila -> agregar(disco3);
	pila -> agregar(disco4);
	Nodo* i = pila -> getUltimo();
	while(i != NULL){
		cout << i -> getNombre() << endl;
		i = i -> getSiguiente() ;
	}
	return 0;
}
