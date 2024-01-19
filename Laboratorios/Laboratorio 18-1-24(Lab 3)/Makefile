CC=g++
CFLAGS= -std=c++11

all:programa

programa: main.cpp Contacto.hpp Agenda.hpp
	$(CC) $(CCFLAGS) main.cpp -o agenda.exe

run: programa
	./agenda.exe

clean:
	rm -f agenda.exe