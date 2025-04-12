#include "ChatGPT.h"
#include <sstream> //LIBRERIA PARA USAR FECHA

ChatGPT::ChatGPT(int _numID, DTFecha _fechaReg,string _pregunta, string _respuesta){
	this->pregunta = _pregunta;
	this->respuesta =_respuesta;
}

ChatGPT::~ChatGPT() {
}

string ChatGPT::getPregunta(){
	return this->pregunta;
}

string ChatGPT::getRespuesta(){
	return this->respuesta;
}

string ChatGPT::toString(){
	std::ostringstream resultado;
	resultado << "chatGPT: " << getIdentificador() << "," << getFecha() << ","<< getPregunta() << "," << getRespuesta();
	return resultado.str();
}