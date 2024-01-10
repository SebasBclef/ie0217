##Este es el Makefile para compilar la tarea en C++.
##Nombre del programa de salida

TARGET= adivina.x

#Objetivo Predeterminado

all: build run

#Compilador de C++

CXX = g++

##Opciones de compilacion
CCFLAGS = -Wall -std=c++11

##Lista de Archivos fuente

SOURCES = funciones.cpp main.cpp

##Lista de Archivos objeto generados a partir de los archivos fuente

OBJECTS = $(SOURCES: .cpp = .exe)

#Regla para compilar los archivos fuentes en archivos objeto

%.o: %.cpp
	@echo "Compilando $< con opciones $(CXXFLAGS)"
	$(CXX) $(CXXFLAGS) -c $< -o $@
#Regla para compilar el programa a partir de los archivos objeto
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

##Regla para correr el juego

run: $(TARGET)
	./$(TARGET)

##Regla para limpiar los archivos generados

.PHONY: clean
clean:
	rm -f $(TARGET) 

##Regla para compilar el codigo fuente y el ejecutable

build: $(TARGET)

