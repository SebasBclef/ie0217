import matplotlib.pyplot as plt 
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

#Generar datos de ejemplo

X,_ = make_moons(n_samples=200, noise=0.05, random_state=42)

#configurar y ajustar DBSCAN

dbscan= DBSCAN(eps=0.3, min_samples=5)
dbscan_labels=dbscan.fit_predict(X)

#Visualizar resultados

plt.scatter(
    X[:,0], X[:,1], c=dbscan_labels, cmap='viridis', edgecolors='k',s=50)
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.show()

