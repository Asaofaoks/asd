#include <cstdlib>
#include <iostream>
#include <string>
#include <set>
#include "DTFecha.h"
#include "DTInfoEstudiante.h"
#include "PaginaWeb.h"
#include "Libro.h"
#include "ChatGPT.h"
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv) {
    //creo fechas.
    DTFecha infofecha1;
    infofecha1.setDia(2);
    infofecha1.setMes(9);
    infofecha1.setAno(2019);
    
    DTFecha pwfecha1;
    pwfecha1.setDia(7);
    pwfecha1.setMes(3);
    pwfecha1.setAno(2024);
    DTFecha pwfecha2;
    pwfecha2.setDia(5);
    pwfecha2.setMes(3);
    pwfecha2.setAno(2024);
            
    DTFecha gptfecha1;
    gptfecha1.setDia(8);
    gptfecha1.setMes(3);
    gptfecha1.setAno(2024);  
    DTFecha gptfecha2;
    gptfecha2.setDia(5);
    gptfecha2.setMes(3);
    gptfecha2.setAno(2024);
    
    DTFecha lbrfecha1;
    lbrfecha1.setDia(15);
    lbrfecha1.setMes(3);
    lbrfecha1.setAno(2024);
    //creo autores para libro.
    set<string> a_lbr1 = {"Craig Larman", "jorjor wel"};
    
    //creo estudiantes.
    estudiante *est1 = new estudiante("Alex Garcia", 52365899, "ag5678@gmail.com");
    estudiante *est2 = new estudiante("Betina Gonzalez", 49891239, "beg999@gmail.com");
    //creo página web.
    PaginaWeb *pw1 = new PaginaWeb(1, pwfecha1,"Programacion 4 Guia Semana 1 (4/3)", "https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf", "El objetivo de esta semana es contextualizar el paradigma de Orientacion a \nObjetos (OO) en el marco de la Ingenieria de Software, asi como comenzar a ver sus \nconceptos basicos y como estos se implementan en C++.");
    PaginaWeb *pw2 = new PaginaWeb(2, pwfecha2, "Programacion orientada a objetos","https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos", "La programación orientada a objetos (POO, en español) es un paradigma de \nprogramación que parte del concepto de objetos como base, los cuales contienen \ninformación en forma de campos (a veces también referidos como atributos o \npropiedades) y código en forma de métodos. Algunas características clave de la \nprogramación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, \nacoplamiento y encapsulamiento.");
    //creo chatGPT.
    ChatGPT *gpt1 = new ChatGPT(3, gptfecha1, "¿Que es el polimorfismo en orientacion a objetos?", "El polimorfismo en programacion orientada a objetos se refiere a la \ncapacidad de un objeto de tomar multiples formas. Puede ser estatico, resuelto en \ntiempo de compilacion, basado en la herencia, o dinamico, resuelto en tiempo de \nejecucion, asociado a interfaces o metodos abstractos. En esencia, permite que \nobjetos de diferentes clases respondan a la misma interfaz de manera coherente, \nfacilitando la flexibilidad y extensibilidad del codigo.");
    ChatGPT *gpt2 = new ChatGPT(4, gptfecha2, "¿Que es el acoplamiento en orientacion a objetos?", "El acoplamiento en programacion orientada a objetos se refiere al grado \nde dependencia entre las clases o modulos de un sistema. Un bajo acoplamiento es \ndeseable, ya que implica que las clases son independientes entre si, lo que facilita la \nmodificacion, mantenimiento y reutilizacion del codigo. Por otro lado, un alto \nacoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer \nque el sistema sea mas dificil de entender, modificar y mantener.");
    //creo libro.
    Libro *lbr1 = new Libro(5, lbrfecha1, "Applying UML and Patterns: An Introduction to Object-Oriented Analysis \nand Design and Iterative Development", a_lbr1, "Applying UML and Patterns is the world’s #1 business and college \nintroduction to “thinking in objects”―and using that insight in real-world object-\noriented analysis and design. Building on two widely acclaimed previous editions, \nCraig Larman has updated this book to fully reflect the new UML 2 standard, to help \nyou master the art of object design, and to promote high-impact, iterative, and skillful \nagile modeling practices.");
    
    // LINKS
    
    
    //muestro.
    cout<<"\t |Pagina Web|"<<endl;
    cout<<pw1->toString()<<endl<<endl;
    cout<<pw2->toString()<<endl<<endl;
    
    cout<<"\t |ChatGPT|"<<endl;
    cout<<gpt1->toString()<<endl<<endl;
    cout<<gpt2->toString()<<endl<<endl;
    
    cout<<"\t |Libro|"<<endl;
    cout<<lbr1->toString()<<endl<<endl;
    
    cout<<"\t |Estudiantes|"<<endl;
    cout<<est1->toString()<<endl<<endl;
    cout<<est2->toString()<<endl<<endl;
    
    return 0;
}

