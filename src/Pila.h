/*
 * Pila.h
 *
 *  Created on: Oct 21, 2017
 *      Author: raydeltohernandez
 */

#ifndef PILA_H_
#define PILA_H_
#include "Nodo.h"

class Pila {
private:
	Nodo* _ultimo;
public:
	void agregar(Nodo* nodo);
	Pila();
	virtual ~Pila();
	Nodo* getUltimo() { return _ultimo; }
};

#endif /* PILA_H_ */
