##Nombre del programa
TARGET= gestion_estudiantes.exe

##Compilador

CXX= g++

##Opciones de compilacion

CXXFLAGS= -Wall -std=c++11

##Lista de archivos

SOURCES= main.cpp estudiante.cpp

##Lista de archivos generados a partir de SOURCES

OBJECTS=$(SOURCES:.cpp=.o)

##Regla para compilar los archivos fuente

%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

##Regla para compilar el programa a partir de los objetos

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

#Regla para limpiar archivos generados

clean:
	rm -f $(TARGET) $(OBJECTS)

##make=borra los ejecutables
## make compila
## ./gestion_estudiantes.exe para ejecutar el programa