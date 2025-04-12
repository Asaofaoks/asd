#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "DTFecha.h"
#include <string>
#include <set>
#include "Informacion.h"

using namespace std;

class estudiante{
    private:
        string nom;
        int ci;
        string email;
    public:
        estudiante();
        estudiante(string _nom, int _ci, string _email);
        virtual ~estudiante();
        virtual string toString();
        string getNombre();
        string getEmail();
        int getCI();
        void listarInfo();
};

#endif /* ESTUDIANTE_H */


