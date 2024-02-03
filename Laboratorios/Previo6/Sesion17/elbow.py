from sklearn.cluster import KMeans
import numpy as np  
import matplotlib.pyplot as plt 

#Generando datos aleatorios

np.random.seed(42)
#100 puntos bidimensionales en un rango de 0 a 10

X= np.random.rand(100,2) *10

#Calcular la inercia

inertias=[]
for k in range (1,11):
    kmeans= KMeans(n_clusters=k,random_state=42)
    kmeans.fit(X)
    inertias.append(kmeans.inertia_)

#graficar el metodo del codo
    
plt.plot(range(1,11), inertias, marker='o')
plt.title('Metodo del Codo')
plt.xlabel('Numero de Clusters K')
plt.ylabel('Inercia')
plt.show()