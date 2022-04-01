import serial
import time
import matplotlib.pyplot as plt

puerto = serial.Serial('COM4', 9600, timeout=1)
time.sleep(2)

dato = []
for i in range(100):
    linea = puerto.readline()
    if linea:
        palabra = linea.decode()
        numero = int(palabra) 
        print(numero)
        dato.append(numero) 
puerto.close()

plt.plot(dato)
plt.xlabel('Tiempo')
plt.ylabel('Lectura Potenciometro')
plt.title('Lectura Potenciometro vs Tiempo')
plt.show()