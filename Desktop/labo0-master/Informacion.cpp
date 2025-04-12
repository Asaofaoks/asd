#include <cstdlib>
#include <iostream>
#include <string>
#include <set>
#include "DTFecha.h"
#include "Informacion.h"
#include "Estudiante.h"

Informacion::Informacion(DTFecha& fecha){

}

Informacion::Informacion(int _id, DTFecha _fecha) {
	this->id = _id;
	this->fecha = _fecha;
}

Informacion::Informacion() { //NO BORAR CONSTRUCTOR VACIO (el compilador busca un constructor sin parámetros)
}

Informacion::~Informacion() {
	for (Informacion* info : informaciones) {
	        delete info;
	    }
	    informaciones.clear();
	}


string Informacion::getIdentificador(){
	  return std::to_string(this->id);
}
string Informacion::getFecha(){
	return this->fecha.to_string();
}
