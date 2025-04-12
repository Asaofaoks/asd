#include "DTInfoEstudiante.h"
#include <iostream>

//CONSTRUCTORES
DTInfoEstudiante::DTInfoEstudiante() {
}

DTInfoEstudiante::DTInfoEstudiante(int ci, string NombreEst, int idInfo){
}

DTInfoEstudiante::~DTInfoEstudiante() {
}

//GETTERS
int DTInfoEstudiante::getCI(){
    return this->CI;
}

string DTInfoEstudiante::getNombre(){
    return this->NombreEst;
}

int DTInfoEstudiante::getID(){
    return this->IdentificadorInfo;
}

DTInfoEstudiante DTInfoEstudiante::getIdEstudiante(){
    return DTInfoEstudiante(this->getCI(), this->getNombre(), this->getID());
}

//SETTERS
void DTInfoEstudiante::setCI(int ci){
    this->CI = ci;
}

void DTInfoEstudiante::setNombre(string nombre){
    this->NombreEst = nombre;
}

void DTInfoEstudiante::setID(int idInfo){
    this->IdentificadorInfo = idInfo;
}

void DTInfoEstudiante::setInfoEstudiante(int ci, string nombre, int idInfo){
    setCI(ci);
    setNombre(nombre);
    setID(idInfo);
}
