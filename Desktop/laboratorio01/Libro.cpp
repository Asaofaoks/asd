#include "Libro.h"

Libro::Libro(string titulo, string resumen,vector<string> aut) {
}

Libro::~Libro() {
}

Libro::Libro(const Libro& orig) {
}

string Libro::getAutores(){
    string vecToString = ""; // String que almacena los autores.
    for(int i = 0 ; i < this->aut.size(); i++){
        vecToString = vecToString +" | "+ this->aut[i]; 
    }
    return vecToString;
}

string Libro::getTitulo(){
    return this->titulo;
}
string Libro::getResumen(){
    return this->resumen;
}

string Libro::toString(){
    return ("Libro: | "+to_string(this->getID())+" | "+this->getFecha().to_string()+" | "+this->getTitulo()+" | "+this->getAutores()+" | "+this->getResumen());
}