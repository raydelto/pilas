/*
 * Nodo.h
 *
 *  Created on: Oct 21, 2017
 *      Author: raydeltohernandez
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
using namespace std;
class Nodo {
private:
	Nodo* _siguiente;
	string _nombre;

public:
	Nodo(string nombre);
	virtual ~Nodo();

	string getNombre() { return _nombre; }

	Nodo* getSiguiente()  { return _siguiente; }

	friend class Pila;
};



#endif /* NODO_H_ */
