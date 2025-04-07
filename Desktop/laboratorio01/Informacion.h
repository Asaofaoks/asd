#ifndef INFORMACION_H
#define INFORMACION_H

#include "DTFecha.h"  
#include <iostream>  
#include <string>  

using namespace std;
class Informacion {
public:
    Informacion(int x, DTFecha fecha); //CONSTRUCTOR
    Informacion();
    Informacion(const Informacion& orig);
    virtual ~Informacion();
    virtual int getID() const = 0;
    virtual DTFecha getFecha() const = 0;
    virtual void metodo() = 0;
private:
    int id; //NUMERO QUE LA IDENTIFICA
    DTFecha fecha;//DATATYPE DE FECHA
};

#endif /* INFORMACION_H */

