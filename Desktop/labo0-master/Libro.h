#ifndef LIBRO_H_
#define LIBRO_H_
#include <cstdlib>
#include <set>
#include "Informacion.h"

using namespace std;

class Libro : public Informacion {
public:
	Libro(int _numID, DTFecha _fechaReg,string titulo, set<string> aut, string resumen);
	virtual ~Libro();
	Libro(const Libro& orig);
	string toString() override; //override = sobrescrita
	string getAutores();
	string getTitulo();
	string getResumen();
private:
	set<string> aut; //CUIDADO CON LOS ASTERISCOS
	string titulo;
	string resumen;
};

#endif /* LIBRO_H_ */
