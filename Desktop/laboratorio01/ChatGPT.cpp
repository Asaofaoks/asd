#include "ChatGPT.h"

ChatGPT::ChatGPT(string pregunta, string respuesta) {
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
    return ("chatGPT: | "+to_string(this->getID())+" | "+this->getFecha().to_string()+" | "+this->getPregunta()+" | "+this->getRespuesta());
}