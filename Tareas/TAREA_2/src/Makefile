TARGET = programa.exe
CXX = g++
CXXFLAGS = -std=c++11 -Wall
SOURCES = libro.cpp noticia.cpp pelicula.cpp podcast.cpp material_audiovisual.cpp material_lectura.cpp MaterialOrdenado.cpp MaterialPrecio.cpp prueba1.cpp
OBJECTS = $(SOURCES:.cpp=.o)

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJECTS)
