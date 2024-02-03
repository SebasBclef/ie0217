from sklearn.preprocessing import StandardScaler
import pandas as pd 
import matplotlib.pyplot as plt 
from sklearn.cluster import KMeans

# Conjunto de datos
data = pd.read_csv('data.csv', delimiter=',')

# Exploracion de datos
print(data.head())

# Preprocesamiento
scaler = StandardScaler()
scaled_data = scaler.fit_transform(data)

# Metodo del Codo
inertia = []
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(scaled_data)
    inertia.append(kmeans.inertia_)

# Graficar el metodo del codo
plt.plot(range(1, 11), inertia, marker='o')
plt.title('Metodo del Codo para la seleccion de k')
plt.xlabel('Numero de Clusters')
plt.ylabel('Inercia')
plt.show()


# Segun el analisis del metodo de codo
data = pd.read_csv('data.csv', delimiter=',')
kmeans = KMeans(n_clusters=4, random_state=42)
cluster_labels = kmeans.fit_predict(scaled_data)

data['Cluster'] = cluster_labels

# Analisis de segmentos
segment_analysis = data.groupby('Cluster').mean()

# Visualizando segmentos
plt.figure(figsize=(12, 6))
for cluster in range(4):
    plt.scatter(data[data['Cluster'] == cluster]['Avg_Spend'],
                data[data['Cluster'] == cluster][' Frequency'],
                label=f'Cluster {cluster}')

plt.title('Segmentacion de Clientes por Frecuencia y Gasto Promedio')
plt.xlabel('Gasto Promedio')
plt.ylabel('Frecuencia de Visita')
plt.legend()
plt.show()
