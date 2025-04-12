#include "DTFecha.h"
#include <sstream> //LIBRERIA PARA USAR FECHA



//////////////////////////////////////////
///////////// CONSTRUCTORES //////////////
//////////////////////////////////////////
DTFecha::DTFecha(int _dia, int _mes, int _ano){
	dia = _dia;
	mes = _mes;
	ano = _ano;
}

DTFecha :: DTFecha(){ //SE ASIGNAN EN NULO O 0 PORQUE SINO GENERA BASURA.
	/*dia = 0;
	mes = 0;
	ano = 0;*/
}
DTFecha::DTFecha(const DTFecha& orig) {
/*	dia = orig.dia;
	mes = orig.mes;
	ano = orig.ano;*/
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
////////////////// SET ///////////////////
//////////////////////////////////////////
    void DTFecha::setDia(int dia){
        this->dia = dia;
    }
    void DTFecha::setMes(int mes){
        this->mes = mes;
    }
    void DTFecha::setAno(int ano){
        this->ano = ano;
    }
    void DTFecha::setFecha(int dia, int mes, int ano){
        setDia(dia);
        setMes(mes);
        setAno(ano);
    }

//////////////////////////////////////////
//////////////////////////////////////////
//////////////////////////////////////////


string DTFecha::to_string() {
    std::ostringstream oss;
    oss << dia << '/' << mes << '/' << ano;
    return oss.str();
}

bool DTFecha::operator>(const DTFecha& otra) const {
     if (ano != otra.ano) return ano > otra.ano;
     if (mes != otra.mes) return mes > otra.mes;
     return dia > otra.dia;
 }