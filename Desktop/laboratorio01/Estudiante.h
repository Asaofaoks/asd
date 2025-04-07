#ifndef ESTUDIANTE_H_
#define ESTUDIANTE_H_
#include <iostream>
#include <string>
#include <vector>
#include "Informacion.h"




using namespace std;

class Estudiante {
public:
	Estudiante(string nombre, int ci, string email);
	Estudiante(const Estudiante& orig);
	virtual ~Estudiante();

private:
	vector<Informacion*> informaciones; //Estudiante guarda informacion (pseudo ATRIBUTO)
	string nombre;
	int ci;
	string email;
};

#endif /* ESTUDIANTE_H_ */
