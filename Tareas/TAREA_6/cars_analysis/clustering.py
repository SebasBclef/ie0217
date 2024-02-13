
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans
from sklearn.preprocessing import StandardScaler
from sklearn.metrics import silhouette_score
from yellowbrick.cluster import KElbowVisualizer

def realizar_clustering(df, num_clusters=5):
    # Selecciona las características para el clustering
    características_clustering = df[['year', 'selling_price', 'km_driven']]  # Reemplaza con las características que desees usar

    # Escala las características para que tengan media cero y desviación estándar unitaria
    scaler = StandardScaler()
    características_escala = scaler.fit_transform(características_clustering)

    # Aplica el algoritmo de K-Means
    kmeans = KMeans(n_clusters=num_clusters, random_state=42)
    df['cluster'] = kmeans.fit_predict(características_escala)

    # Visualización de los clusters
    visualizar_clusters(df, características_clustering)

    # Evaluación del rendimiento
    evaluar_clusters(df, características_escala)


    return df

def visualizar_clusters(df, características):
    # Visualización de los clusters (solo si tienes características 2D o 3D)
    if características.shape[1] in [2, 3]:
        plt.scatter(características.iloc[:, 0], características.iloc[:, 1], c=df['cluster'], cmap='viridis', label=df['cluster'].astype(str))

        # Ajusta el rango de colores
        plt.colorbar()

        # Agregando una leyenda
        plt.legend(title='Cluster')
        
        # Titulo
        plt.title('Clustering de Datos basado en el precio de venta y la edad del vehiculo')
        # Eje x
        plt.xlabel('Year')
        # Eje y
        plt.ylabel('selling_price')
        plt.show()

def evaluar_clusters(df, características):
    # Método del codo para encontrar el número óptimo de clusters
    encontrar_numero_optimo_clusters(características)

    # Índice de Silhouette para evaluar la calidad de los clusters
    silhouette_score_promedio = silhouette_score(características, df['cluster'])
    print(f'Índice de Silhouette Promedio: {silhouette_score_promedio}')

def realizar_clustering_otras_caracteristicas(df, num_clusters=5):
    # Selecciona las características para el clustering
    características_clustering = df[['km_driven', 'selling_price', 'transmission']]

    # Codificación One-Hot para la columna 'transmission'
    características_clustering = pd.get_dummies(características_clustering, columns=['transmission'], drop_first=True)

    # Escala las características para que tengan media cero y desviación estándar unitaria
    scaler = StandardScaler()
    características_escala = scaler.fit_transform(características_clustering)

    # Aplica el algoritmo de K-Means
    kmeans = KMeans(n_clusters=num_clusters, random_state=42)
    df['cluster_otras_caracteristicas'] = kmeans.fit_predict(características_escala)

    # Visualización de los clusters
    visualizar_clusters_otras_caracteristicas(df, características_clustering)

    # Evaluación del rendimiento
    evaluar_clusters_otras_caracteristicas(df, características_escala)

    return df

def visualizar_clusters_otras_caracteristicas(df, características):
    # Visualización de los clusters (solo si tienes características 2D o 3D)
    if características.shape[1] in [2, 3]:
        plt.scatter(características.iloc[:, 0], características.iloc[:, 1], c=df['cluster_otras_caracteristicas'], cmap='viridis', label=df['cluster_otras_caracteristicas'].astype(str))

        # Ajusta el rango de colores
        plt.colorbar()

        # Agregando una leyenda
        plt.legend(title='Cluster')
        
        # Titulo
        plt.title('Clustering de Datos basado en Kilómetros recorridos, Precio de venta y Tipo de transmisión')
        # Eje x
        plt.xlabel('Kilómetros recorridos')
        # Eje y
        plt.ylabel('Precio de venta')
        plt.show()

def evaluar_clusters_otras_caracteristicas(df, características):
    # Método del codo para encontrar el número óptimo de clusters
    encontrar_numero_optimo_clusters_otras_caracteristicas(características)

    # Índice de Silhouette para evaluar la calidad de los clusters
    silhouette_score_promedio = silhouette_score(características, df['cluster_otras_caracteristicas'])
    print(f'Índice de Silhouette Promedio: {silhouette_score_promedio}')

def encontrar_numero_optimo_clusters_otras_caracteristicas(características):
    # Utilizando el método del codo para encontrar el número óptimo de clusters
    model = KMeans(random_state=42)
    visualizer = KElbowVisualizer(model, k=(2, 10))
    visualizer.fit(características)
    visualizer.show()

def encontrar_numero_optimo_clusters(características):
    # Utilizando el método del codo para encontrar el número óptimo de clusters
    model = KMeans(random_state=42)
    visualizer = KElbowVisualizer(model, k=(2, 10))
    visualizer.fit(características)
    visualizer.show()
