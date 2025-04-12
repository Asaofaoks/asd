#include <cstdlib>
#include <iostream>
#include <string>
#include <set>
#include "DTFecha.h"
#include "PaginaWeb.h"

using namespace std;

PaginaWeb::PaginaWeb(){
    
}

PaginaWeb::PaginaWeb(int _numID, DTFecha _fechaReg, string _tituloPW, string _link, string _text):Informacion(_numID, _fechaReg){
    this->tituloPW = _tituloPW;
    this->link = _link;
    this->text = _text;
}

PaginaWeb::~PaginaWeb(){//destructor página web
    
}

string PaginaWeb::toString(){
    
    return ("Identificador = "+this->getIdentificador()+"\nFecha = "+this->getFecha()+"\nTitulo = "+
            this->tituloPW+"\nLink = "+this->link+"\nTexto = "+this->text);;
}