#include "Libro.h"
#include <sstream> //LIBRERIA PARA USAR FECHA

Libro::Libro(int _numID, DTFecha _fechaReg, string _titulo, set<string> _aut, string _resumen){
	titulo = _titulo;
	aut = _aut;
	resumen = _resumen;
}

Libro::~Libro() {
    
}

Libro::Libro(const Libro& orig) {
}

string Libro:: getTitulo(){
	return this->titulo;
}

string Libro:: getResumen(){
	return this->resumen;
}

string Libro::getAutores(){ // FUNCION AUXILIAR PARA PODER MOSTRAR LOS AUTORES
    string vAutores = "";//almacena autores.
    for (const auto& autor : this->aut){//auto detecta automáticamente el tipo de elemento.
        if (!vAutores.empty()){//chequea si está vacía, si no es así agrega el separador.
            vAutores += ", ";//separa autores.
        }
        vAutores += autor;
    }
    return vAutores;
}

string Libro::toString(){
    std::ostringstream resultado;
    resultado << "Libro: " << getIdentificador() << "," << getFecha() << ","<< getTitulo() << "," << getAutores() <<"," << getResumen();
    return resultado.str();
}
