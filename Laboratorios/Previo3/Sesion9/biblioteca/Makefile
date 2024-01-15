##Nombre programa
TARGET= gestion_biblioteca.exe

#objetivo
all:$(TARGET)

#Compilador

CXX= g++

##opciones de compilacion

CXXFLAGS= -Wall -std=c++11

##Lista de Archivos

SOURCES= libro.cpp biblioteca.cpp main.cpp

##Lista de archivos objegto

OBJECTS= $(SOURCES:.cpp=.o)

#Regla para compilar
%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

##Regla para compilar

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

##Regla para limpiar

.PHONY: clean

clean:
	$(RM) $(TARGET) $(OBJECTS)

##./gestion_biblioteca.exe para ejecutar el programa
##mingw32-make para compilar
##make clean para borrar el ejecutable