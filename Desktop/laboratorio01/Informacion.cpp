#include "Informacion.h"

int Informacion::getID() const{
    return this->id;
}
DTFecha Informacion::getFecha() const{
    return this->fecha;
}

Informacion::Informacion() {
}

Informacion::Informacion(const Informacion& orig) {
}

Informacion::~Informacion() {
}

