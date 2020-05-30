# Gráfica para el movimiento parabólico

import matplotlib.pyplot as plt
import numpy as np


info = np.loadtxt("datos.txt")
Y = info

k = 0.01
l = np.where(Y>0)
y_0 = Y[l]
j = len(y_0)
t = np.linspace(0,j*k,j+1)
t = t[:-1]

plt.figure(figsize=(8,8))
plt.title("Movimiento parabólico de la piedra")
plt.xlabel("Tiempo (s)") 
plt.ylabel("Altura (m)")
plt.scatter(t,y_0,c="b")

plt.savefig("grafico.pdf")