#ifndef CHATGPT_H_
#define CHATGPT_H_
#include "Informacion.h"

class ChatGPT : public Informacion {
public:
    ChatGPT(string pregunta, string respuesta);
    virtual ~ChatGPT();
    string toString();
    string getPregunta();
    string getRespuesta();
private:
    string pregunta;
    string respuesta;
};

    
#endif /* CHATGPT_H_ */