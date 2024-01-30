import pandas as pd ##importando para poder usar pandas


df=pd.DataFrame( ##caracteristicas basadas en el mejor anime del mundo
    {
        "Name": [
            "Braun, Reiner",
            "Hoover, Berthold",
            "Leonhardt, Annie",
            ],
        "Titan" : ["Armored","Colossal","Female"],
        "Status" : ["Captured","Transfered","Stasis"],
    }
)

print(df) ##imprimir mi data frame

print(df["Titan"]) ##Imprimir una serie
print(df["Status"])##Imprimir otra serie
print(df["Name"])##Imprimir otra serie

