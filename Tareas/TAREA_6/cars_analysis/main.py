# main.py

import kaggle
import os
from zipfile import ZipFile
import regression
import clustering
import pandas as pd

# Token de Kaggle
token = "396d33598c33062c29d9825b1fead414"

# ID del conjunto de datos en Kaggle
dataset_id = "akshaydattatraykhare/car-details-dataset"

# Ruta de descarga y descompresión
download_path = "car_details_dataset.zip"
extracted_folder = "car_details_dataset.zip"

# Descargando el conjunto de datos
kaggle.api.dataset_download_files(dataset_id, path=download_path, unzip=True)

# Accediendo al archivo CSV, después de sacarlo del zip
csv_file_path = os.path.join(extracted_folder, "CAR DETAILS FROM CAR DEKHO.csv")

if os.path.exists(csv_file_path):
    print(f"Archivo CSV encontrado en: {csv_file_path}")
else:
    print("Archivo desempaquetado correctamente.")

# Carga el conjunto de datos
df = pd.read_csv(csv_file_path)

# Análisis de regresión
regression.analisis_regresion(df)

# Clustering
df = clustering.realizar_clustering(df)
df = clustering.realizar_clustering_otras_caracteristicas(df)
