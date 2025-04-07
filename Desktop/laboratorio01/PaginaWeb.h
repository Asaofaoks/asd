#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Informacion.h"

class PaginaWeb {
public:
    PaginaWeb();
    PaginaWeb(const PaginaWeb& orig);
    virtual ~PaginaWeb();
    string getURL();
    string getTexto();
    string toString();
private:
    string titulo;
    string url;
    string texto;
};

#endif /* PAGINAWEB_H */

