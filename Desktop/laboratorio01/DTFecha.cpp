#include "DTFecha.h"

//////////////////////////////////////////
///////////// CONSTRUCTORES //////////////
//////////////////////////////////////////
DTFecha::DTFecha(int dia, int mes, int ano){
}

DTFecha::DTFecha() {
}

DTFecha::DTFecha(const DTFecha& orig) {
}

DTFecha::~DTFecha() {
}
//////////////////////////////////////////
////////////////// GET ///////////////////
//////////////////////////////////////////
int DTFecha::getDia(){
    return this->dia;
}

int DTFecha::getMes(){
    return this->mes;
}

int DTFecha::getAno(){
    return this->ano;
}

DTFecha DTFecha::getFecha(){
    return DTFecha(getDia(), getMes(), getAno());
}

//////////////////////////////////////////
//////////////////////////////////////////
//////////////////////////////////////////
std::string DTFecha::to_string(){
    std::string fstr = std::to_string(this->getDia()) + " / "+ std::to_string(this->getMes()) +" / "+std::to_string(this->getAno());
    return fstr;
}