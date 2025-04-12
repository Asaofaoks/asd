#ifndef PAGINAWEB_H
#define PAGINAWEB_H
#include "DTFecha.h"
#include "Informacion.h"
#include <string>
#include <set>

using namespace std;

class PaginaWeb: public Informacion{//clase página web hija de información
    private:
        string tituloPW;
        string link;
        string text;
    public:
        PaginaWeb();
        PaginaWeb(int _numID, DTFecha _fechaReg, string _tituloPW, string _link, string _text);//constructor común
        ~PaginaWeb();
        string getLink();
        string getText();
        string toString();
};

#endif /* PAGINAWEB_H */

