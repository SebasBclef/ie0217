# Makefile para Python (compatible con Windows y Linux)

# Nombres de los archivos principales
TARGET1 = analisis.py
TARGET2 = notas.py

# Objetivo predeterminado
all: run

# Regla para ejecutar el primer script
run1:
	python $(TARGET1)

# Regla para ejecutar el segundo script
run2:
	python $(TARGET2)

# Regla para limpiar archivos temporales
clean:
	rm -rf __pycache__

.PHONY: all run1 run2 clean
