from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import numpy as np  
import matplotlib.pyplot as plt 

# Generando datos aleatorios
np.random.seed(42)
# 100 puntos bidimensionales en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# Calcular el coeficiente de silueta para diferentes valores de k
silhouette_scores = []  # Cambiado el nombre de la variable aquí
for k in range(2, 20):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(X)
    score = silhouette_score(X, kmeans.labels_)
    silhouette_scores.append(score)  # Cambiado el nombre de la variable aquí

# Graficar el método de la silueta
plt.plot(range(2, 20), silhouette_scores, marker='o')  # Cambiado el nombre de la variable aquí
plt.title('Metodo de la Silueta')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Coeficiente de la Silueta')
plt.show()
