#DEFINICIONES.
CXX = gcc #quizás alla que cambiar a gcc para usar en linux.

CXXFLAGS = -x c++ -Wall -g
LDFLAGS = -lstdc++
    #ejecutable.
OUTPUTEXE = Lab0-prueba
    #nombre del zip.
NOMBREZIP = 6_Lab0.zip
    #busca errores.
CHEQUEO = -g -Wall
    #incluye todos los .cpp del directorio.
FUENTE = $(wildcard *.cpp)
    #todo .cpp tiene su respectivo .o
OBJ = $(FUENTE:%.cpp=%.o)
    #incluye todos los .h del directorio.CABEZAL = $(wildcard *.h)

$(info $(FUENTE))

#lo que esté dentro de all va a ser lo primero que se construya.
all: $(OUTPUTEXE)

#para ejecutar en la consola.
run: $(OUTPUTEXE)
	./$(OUTPUTEXE)
#En linux se ejecuta abriendo un terminal en la carpeta raiz y ejecutando el comando 'make'.

#construye el ejecutable.
$(OUTPUTEXE): $(OBJ)
	#$(CC) $(CXXFLAGS) $(OBJ) -o $(OUTPUTEXE) 
	$(CXX) $(CHEQUEO) $(OBJ) -o $(OUTPUTEXE) $(LDFLAGS)


	
#compila archivos .cc en .o //clase DTFECHA	
DTFecha.o: DTFecha.cpp DTFecha.h
	$(CXX) $(CHEQUEO) -c DTFecha.cpp -o DTFecha.o
	
#compila archivos .cc en .o //clase DTInfoEstudiante	
DTInfoEstudiante.o: DTInfoEstudiante.cpp DTInfoEstudiante.h
	$(CXX) $(CHEQUEO) -c DTInfoEstudiante.cpp -o DTInfoEstudiante.o

#compila archivos .cc en .o //clase estudiante
Estudiante.o: Estudiante.cpp Estudiante.h
	$(CXX) $(CHEQUEO) -c Estudiante.cpp -o Estudiante.o

#compila archivos .cc en .o //clase informacion
Informacion.o: Informacion.cpp Informacion.h DTFecha.h
	$(CXX) $(CHEQUEO) -c Informacion.cpp -o Informacion.o
	
#compila archivos .cc en .o //clase paginaWeb
PaginaWeb.o: PaginaWeb.cpp PaginaWeb.h Informacion.h DTFecha.h
	$(CXX) $(CHEQUEO) -c PaginaWeb.cpp -o PaginaWeb.o

#compila archivos .cc en .o //clase chatGPT	
ChatGPT.o: ChatGPT.cpp ChatGPT.h Informacion.h DTFecha.h
	$(CXX) $(CHEQUEO) -c ChatGPT.cpp -o ChatGPT.o

#compila archivos .cc en .o //clase libro	
Libro.o: Libro.cpp Libro.h Informacion.h
	$(CXX) $(CHEQUEO) -c Libro.cpp -o Libro.o
	
#elimina los objetos y ejecutables.	
clean:
	rm -f $(OUTPUTEXE) $(OBJ) #cambiar 'del' por 'rm -f' para linux.
	
#comprime archivos fuentes, cabezales, sin ejecutables ni objetos y queda listo para entregar.
zip: $(FUENTE) $(CABEZAL)
	rm -f $(NOMBREZIP) #cambiar 'del' por 'rm -f' para linux.
	zip $(NOMBREZIP) $(FUENTE) $(CABEZAL)

	