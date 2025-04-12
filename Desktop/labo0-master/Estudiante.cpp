#include <cstdlib>
#include <iostream>
#include <string>
#include <set>
#include "DTFecha.h"
#include "Informacion.h"
#include "Estudiante.h"

using namespace std;

estudiante::estudiante(){
    
}

estudiante::estudiante(string _nom, int _ci, string _email){
    this->nom = _nom;
    this->ci = _ci;
    this->email = _email;
}

estudiante::~estudiante(){
    
}

string estudiante::toString(){
    
    return ("Nombre = "+this->nom+"\nCi = "+to_string(this->ci) +"\nEmail = "+this->email);
}

void listarInfo(){
    
}

