# Primer programa
TARGET1 = mainCorreo.exe
SOURCES1 = Correo.cpp mainCorreo.cpp
OBJECTS1 = $(SOURCES1:.cpp=.o)

# Segundo programa
TARGET2 = mainMatrices.exe
SOURCES2 = Final.cpp
OBJECTS2 = $(SOURCES2:.cpp=.o)

# Configuración común
CC = g++
CXXFLAGS = -Wall -std=c++11

# Reglas para el primer programa
all: $(TARGET1)

$(TARGET1): $(OBJECTS1)
	$(CC) $(CXXFLAGS) $(OBJECTS1) -o $(TARGET1)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

# Reglas para el segundo programa
all: $(TARGET2)

$(TARGET2): $(OBJECTS2)
	$(CC) $(CXXFLAGS) $(OBJECTS2) -o $(TARGET2)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET1) $(OBJECTS1) $(TARGET2) $(OBJECTS2)