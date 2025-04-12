#ifndef INFORMACION_H_
#define INFORMACION_H_

//INCLUDES
#include "DTFecha.h"
#include <iostream>
#include <string>
#include <vector>

//NO USAR INCLUDE ESTUDIANTE, SE FORMA UNA DEPENDECIA CIRCULAR(GENERA ERRORES)

using namespace std;

class Estudiante; //USAMOS UNA DECLARACION AVANZADA PARA NO GENERAR UNA DEPENDENCIA CIRCULAR

class Informacion {
//-------------------------------------------------
//---------CONTRUCTORES Y OPERACIONES--------------
//-------------------------------------------------
public:
//------------------CONSTRUCTORES-------------------
	Informacion(int id, DTFecha fecha);
	Informacion(DTFecha& fecha);
	Informacion();

	virtual ~Informacion();//DESTUCTOR
	virtual string toString() = 0; //OPERACION ABTRACTA / NO SE USA TOSTRING PARA MOSTRAR

	virtual string getIdentificador();
	virtual string getFecha();


//-------------------------------------------------
//---------ATRIBUTOS-------------------------------
//-------------------------------------------------
private:
	Estudiante* guardadoPor; // Informacion es guardada por estudiante (pseudo ATRIBUTO)
	int id; //NUMERO QUE LA IDENTIFICA
	DTFecha fecha; //DATATYPE DE FECHA
	vector<Informacion*> informaciones;
};

#endif /* INFORMACION_H_ */
