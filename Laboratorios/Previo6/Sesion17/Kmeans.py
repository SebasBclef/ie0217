from sklearn.cluster import KMeans
import numpy as np 
import matplotlib.pyplot as plt 

##Generar datos aleatorios

np.random.seed(42)

X= np.random.rand(100,2) * 10

#Configurar subgraficos

plt.figure(figsize=(12,5))
#Subgrafco de visualizacion de puntos de datos aleatorios
plt.subplot(1,2,1)
plt.scatter(X[:,0], X[:,1], c="blue", marker='o')
plt.title('Puntos de Datos Aleatorios')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')

#Configuracion de K Means con un numero de clusters (k) especifico

kmeans = KMeans (n_clusters=3)
##Ajustando el modelo

kmeans.fit(X)

#Etiquetdas de los clusters y coordenadas de los centroides
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

#Subgrafico resultado del clustering con K means

plt.subplot(1,2,2)
for i in range(len(X)):
    plt.scatter(X[i][0], X[i][1],
                c=('r' if labels[i]==0 else 'b' if labels[i]==1 else 'g'),
                marker='o')
plt.scatter(centroids[:,0], centroids[:,1], c='black', marker='X', s=200,
            label='Centroids')
plt.title('Resultado del Clustering con K Means')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.legend()
plt.tight_layout()
plt.show()