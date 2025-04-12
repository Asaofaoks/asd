#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H
#include <string>

using namespace std;

class DTInfoEstudiante {
    public:
        DTInfoEstudiante();
        DTInfoEstudiante(int ci, string NombreEst, int idInfo);
        virtual ~DTInfoEstudiante();
        //GETTERS
        int getCI();
        string getNombre();
        int getID();
        DTInfoEstudiante getIdEstudiante();
       //SETTERS
        void setCI(int ci);
        void setNombre(string nombre);
        void setID(int idInfo);
        void setInfoEstudiante(int ci, string nombre, int idInfo);
        
    
    private:
        int CI;
        string NombreEst;
        int IdentificadorInfo;
};


#endif /* DTINFOESTUDIANTE_H */

