#ifndef LIBRO_H_
#define LIBRO_H_
#include "Informacion.h"
#include <vector>

using namespace std;

class Libro : public Informacion {
public:
	Libro(string titulo, string resumen,vector<string> aut );
	virtual ~Libro();
	Libro(const Libro& orig);
        string getAutores();
        string getTitulo();
        string getResumen();
        string toString();
private:
	vector<string> aut;
	string titulo;
	string resumen;
};

#endif /* LIBRO_H_ */