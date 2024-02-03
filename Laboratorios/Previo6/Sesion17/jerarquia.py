import matplotlib.pyplot as plt 
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.datasets import make_blobs
from sklearn.cluster import AgglomerativeClustering 

#generar datos de ejemplos

X,y = make_blobs(n_samples=50, centers=3, random_state=42,cluster_std=1.0)

#configuracion de Clustering Jerarquico con enlace completo
Z= linkage(X, method='complete')
#Visualizar el dendrograma

plt.figure(figsize=(10,5))
dendrogram(Z)
plt.title('Dendrograma Hierarchical Clustering')
plt.xlabel('Indice del Punto de Datos')
plt.ylabel('Distancia')
plt.show()

#Configuracion de Hierarchical Clustering son Scikit learn

agg_clustering= AgglomerativeClustering(n_clusters=3)
agg_labels= agg_clustering.fit_predict(X)

#visualizar resultados
plt.scatter(
    X[:,0], X[:,1], c=agg_labels, cmap='viridis', edgecolors='k',s=50)
plt.title('Resultado del Clustering Jerarquico')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.show()