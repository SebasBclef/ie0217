import pandas as pd
import numpy as np 
import matplotlib.pyplot as plt


# Clase que representa un préstamo y calcula su amortización.
class Prestamo:
    def __init__(self, monto_prestamo, tasa_interes_anual,cuotas):
        #Este atributo almacena el prestamo
        self.monto_prestamo = monto_prestamo
        #Este atributo almacena la taza de interes
        self.tasa_interes_anual = tasa_interes_anual
        #Este atributo almacena las cuotas
        self.cuotas = cuotas
        #Este atributo almacena la amortizacion
        self.amortizacion = self.calcular_amortizacion()

#Este metodo calcula la amortizacion del prestamo
    def calcular_amortizacion(self):
        try:
            # Calcular la tasa de interés mensual.
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            # Calcular la cuota mensual utilizando la fórmula de amortización.
            cuota_mensual= (tasa_interes_mensual * self.monto_prestamo)/ (1-(1+tasa_interes_mensual)**-self.cuotas)

            
            saldo_restante= self.monto_prestamo
            amortizacion= []
            # Iterar a través de las cuotas para calcular la amortización.
            for cuota in range (1,self.cuotas+1):
                # Calcular el interés pendiente para cada cuota.
                interes_pendiente= saldo_restante * tasa_interes_mensual
                # Calcular la amortización principal para cada cuota.
                amortizacion_principal= cuota_mensual - interes_pendiente
                # Actualizar el saldo restante después de cada cuota.
                saldo_restante -= amortizacion_principal
                # Almacenar la información en una lista de diccionarios.
                amortizacion.append({'Cuota': cuota, 'Interes': interes_pendiente,'Amortizacion': amortizacion_principal, 'Saldo Restante':saldo_restante})
            return amortizacion
# Manejar la excepción de división por cero.
        except ZeroDivisionError:
            print("Error: La cantidad de cuotas no puede ser 0.")
            return[]

#con esta definicion se genera un reporte .csv donde se almacenan datos 
    def generar_reporte(self,archivo_salida):
        try:
            df=pd.DataFrame(self.amortizacion)
            df.to_csv(archivo_salida, index=False)
            print(f"Reporte generado con exito: {archivo_salida}")
        except Exception as e:
            print(f"Ocurrio un error al generar el reporte: {str(e)}")

#con esta definicion se genera un grafico de barras     
    def graficar_amortizacion(self):
        df=pd.DataFrame(self.amortizacion)

        data = np.array([df["Interes"], df['Amortizacion']])

        plt.bar(df['Cuota'],data[0], label='Interes')
        plt.bar(df['Cuota'],data[1], bottom=data[0], label='Amortizacion')

        plt.xlabel('Numero de Cuota')
        plt.ylabel('Monto')
        plt.title("Amortizacion e interes por Cuota")
        plt.legend()
        plt.show()



def main():
    try:
    #1 Primero, pedirle el monto al usuario
        monto_prestamo = float(input("Ingrese la cantidad de dinero que quiere sacar como prestamo:"))
    #2 Luego, pedirle la taza de interes anual (%)
        tasa_interes_anual = float(input("Ingrese la taza de interes con la que quiere pagar:"))
    #3 Luego, las cuotas
        cuotas = int(input("Ingrese las cuotas que quiere pagar:"))
    #4 instanciar el prestamo
        mi_prestamo = Prestamo(monto_prestamo, tasa_interes_anual, cuotas)
    #5 generar el reporte
        mi_prestamo.generar_reporte('reporte_prestamo.csv')
        ##6 imprimir info (lo que dio el usuario, monto, taza, cuotas y prestamo)
        print("Su dinero es:", mi_prestamo.monto_prestamo)
        print("Su tasa es:", mi_prestamo.tasa_interes_anual,"%")
        print("Sus cuotas son:", mi_prestamo.cuotas)
    #7 graficar la amortizacion
        mi_prestamo.graficar_amortizacion()
    #8 manejo de excepciones (Value error y el error generico)
    except ValueError as ve:
        print(str(ve))
    except RuntimeError as re:
        print(str(re))

if __name__ =='__main__':
        main()