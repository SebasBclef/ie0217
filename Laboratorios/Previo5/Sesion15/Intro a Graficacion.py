import matplotlib.pyplot as plt
import numpy as np
# -----------------------graficos de linea-----------------------
# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]
# Crear un gráfico de línea 

plt.plot(x, y)
# Personalización 
plt.ylabel('Eje Y')
plt.xlabel('Eje X') 
plt.title('Gráfico de Línea Simple') 
plt.grid(True)

# Mostrar el gráfico
plt.show()
# -----------------------graficos de linea-----------------------


# ----------------------graficos de dispersion------------------------

# Datos de ejemplo
X = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]
# Crear un gráfico de dispersión
plt.scatter(x, y, label='Puntos')

# Personalización 
plt.xlabel('Eje X') 
plt.ylabel('Eje Y')
plt.title('Gráfico de Dispersión') 
plt.legend()
# Mostrar el gráfico
plt.show()
# ----------------------graficos de dispersion------------------------


# ----------------------personalizacion de graficos------------------------
# Datos de ejemplo
X = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]
# Crear un gráfico de línea
plt.plot(x, y, label='Datos de ejemplo')
# Personalización 
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea con Etiquetas y Título') 
plt.legend()
# Mostrar el gráfico
plt.show()
# ----------------------personalizacion de graficos------------------------


# ----------------------guardar graficos------------------------
import matplotlib.pyplot as plt
# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]
# Crear un gráfico de línea 
plt.plot(x, y)
# Personalización
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')
# Guardar el gráfico como imagen (por ejemplo, en formato PNG) 
plt.savefig('grafico.png')
# Mostrar el gráfico
plt.show()
# ----------------------guardar graficos------------------------


# ----------------------graficos de barras------------------------
# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
# Gráfico de barras verticales
plt.bar(categorias, valores, color='royalblue')
# Personalización
plt.xlabel('Categorías')
plt.ylabel('Valores')
plt.title('Gráfico de Barras Verticales')
# Mostrar el gráfico 
plt.show()
# ----------------------graficos de barras------------------------


# ----------------------graficos de pastel------------------------
# Datos de ejemplo
proporciones = [30, 20, 25, 15] 
etiquetas = ['A', 'B', 'C', 'D']
# Gráfico de pastel
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140,colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])
# Personalización
plt.title('Gráfico de Pastel')
# Mostrar el gráfico 
plt.show()
# ----------------------graficos de pastel------------------------


# ----------------------colores y estilos------------------------
# Datos de ejemplo
x=[1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]
# Crear un gráfico de línea personalizado con colores, estilos y marcadores 
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')
# Personalización adicional, como etiquetas de ejes y títulos
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico Personalizado')
plt.legend()
# Mostrar el gráfico
plt.show()
# ----------------------colores y estilos------------------------


# ---------------------------anotaciones---------------------------
# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]
# Crear un gráfico de línea
plt.plot(x, y, label='Datos de ejemplo')
# Añadir una anotación
plt.annotate('Valor Máximo', xy=(5, 14), xytext=(3, 16),
arrowprops=dict (facecolor='black', shrink=0.05),)
# Personalización adicional, como etiquetas de ejes y títulos
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico con Anotación') 
plt.legend()
# Mostrar el gráfico
plt.show()
# ---------------------------anotaciones---------------------------


# ------------------------------subtramas-------------------------------
# Datos de ejemplo 
x = [1, 2, 3, 4, 5] 
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

#Crear subtramas
fig, axs = plt.subplots(1, 2) # 1 fila, 2 columnas
# Gráfico en la primera subtrama 
axs[0].plot(x, y1, label='Serie A') 
axs[0].set_title('Subtrama 1')
                 
# Gráfico en la segunda subtrama
axs[1].plot(x, y2, label='Serie B', color='red') 
axs[1].set_title('Subtrama 2')
# Personalización adicional, como etiquetas de ejes y títulos 
for ax in axs:
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje Y')
    ax.legend()
#Ajustar la disposición
plt.tight_layout()
# Mostrar la figura con las subtramas
plt.show()
# ------------------------------subtramas-------------------------------

# ------------------------------mas ejemplos 1-------------------------------
# Generar datos de ejemplo
x = np.linspace(0, 2 * np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# Crear un gráfico de líneas con dos series de datos 
plt.plot(x, y1, label='Seno') 
plt.plot(x, y2, label='Coseno')

# Personalización
plt.xlabel('Ángulo (rad)')
plt.ylabel('Valor')
plt.title('Funciones Seno y Coseno') 
plt.legend()

# Mostrar el gráfico
plt.show()
# ------------------------------mas ejemplos 1-------------------------------

# ------------------------------mas ejemplos 2-------------------------------
categorias =['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Crear una figura con dos subtramas 
fig, axs = plt.subplots(1, 2, figsize=(10, 4))

# Subtrama 1: Gráfico de barras
axs[0].bar(categorias, valores, color='royalblue') 
axs[0].set_title('Gráfico de Barras')

# Subtrama 2: Gráfico de línea
axs[1].plot(categorias, tendencia, color='green', marker='o') 
axs[1].set_title('Gráfico de Línea')

# Personalización adicional 
for ax in axs:
    ax.set_xlabel('Categorías') 
    ax.set_ylabel('Valores')

# Ajustar la disposición 
plt.tight_layout()

# Mostrar la figura con ambas subtramas
plt.show()
# ------------------------------mas ejemplos 2-------------------------------


# ------------------------------mas ejemplos 3-------------------------------
# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D'] 
valores = [15, 8, 12, 10]

# Crear un gráfico de barras
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Personalización
plt.xlabel('Categorías', fontsize=12)
plt.ylabel('Valores', fontsize=12)
plt.title('Gráfico de Barras', fontsize=14)
plt.xticks(rotation=45) # Rotar las etiquetas del eje X para mayor legibilidad plt.grid(axis='y', linestyle='--', alpha=0.7)

# Añadir etiquetas en las barras
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)

# Mostrar el gráfico
plt.show()
# ------------------------------mas ejemplos 3-------------------------------
