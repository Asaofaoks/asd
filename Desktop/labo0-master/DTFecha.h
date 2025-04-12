#ifndef DTFECHA_H
#define DTFECHA_H
#include <iostream>
#include <string>

using namespace std;
class DTFecha {
public:
    //////////////////////////////////////////
    ///////////// CONSTRUCTORES //////////////
    //////////////////////////////////////////

    DTFecha(int dia,int mes,int ano);
    DTFecha(const DTFecha& orig);
    DTFecha();
    virtual ~DTFecha();
    friend ostream& operator<<(ostream& os, const DTFecha& fecha); //para mostrar fecha constructor
    string to_string();

    bool operator>(const DTFecha& otra) const; //AUXILIAR LISTARINFO

    //////////////////////////////////////////
    ////////////////// GET ///////////////////
    //////////////////////////////////////////
    int getDia();
    int getMes();
    int getAno();
    DTFecha getFecha();
    //////////////////////////////////////////
    ////////////////// SET ///////////////////
    //////////////////////////////////////////
    void setDia(int Dia);
    void setMes(int Mes);
    void setAno(int Ano);
    void setFecha(int dia, int mes, int ano);
    //////////////////////////////////////////
    //////////////////////////////////////////
    //////////////////////////////////////////

private:
    int dia;
    int mes;
    int ano;
};

#endif /* DTFECHA_H */

