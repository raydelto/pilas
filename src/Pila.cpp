/*
 * Pila.cpp
 *
 *  Created on: Oct 21, 2017
 *      Author: raydeltohernandez
 */

#include "Pila.h"

Pila::Pila(): _ultimo(NULL) {


}

void Pila::agregar(Nodo* nodo) {
	if(_ultimo == NULL){ //Si la pila esta vacia
		_ultimo = nodo;
	}else{
		nodo -> _siguiente = _ultimo;
		_ultimo = nodo;
	}
}

Pila::~Pila() {
	// TODO Auto-generated destructor stub
}

