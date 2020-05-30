# HW09 Headers (c++)

## 150 puntos
Esta tarea se entrega individualmente.

Fecha de entrega: Viernes 29 de Mayo, 23:59 horas.

Es la última entrega. ¡Feliz final de semestre!

* Dentro de su repositorio cree una carpeta de trabajo, puede ser "hw09". 
* Dentro de la carpeta, cree un script "tarea.sh" que:
    1.  compile un archivo "main.cpp" incluyendo el encabezado "funciones.h"
    2.  ejecute el archivo "a.out" y redireccione la salida a un archivo "datos.txt"
    3.  ejecute un script de python "grafica.py" que grafique "datos.txt" y guarde el resultado en un bonito archivo "grafico.pdf" con las debidas etiquetas de los datos.
* Agregue al repositorio los archivos tarea.sh, main.cpp, funciones.h y grafica.py.
* Entregue sólamente el enlace a la carpeta con la tarea.


# Descripción de los ítems:

## main.cpp  20pts

Vamos a simular el movimiento rectilineo uniformemente acelerado de una piedra con 
altura inicial = 8.5 m y velocidad inicial 20 m/s hacia arriba. La evolucion temporal va a estar dada por
una funcion dentro de "funciones.h". Utilice "cout" para imprimir en pantalla tiempo y altura
mientras que la altura de la piedra sea positiva.

## funciones.h 20pts

La evolucion temporal se implementa como una funcion RungeKutta4 que es invocada desde main.cpp

## grafica.py 20pts

Grafica los datos.

## script.sh 20pts

Compila main.cpp, ejecuta y redirije a.out hacia datos.txt, llama el script de python que lee datos.txt y guarda la gráfica como pdf.

## grafico.pdf 20pts

Si todo se genera automaticamente bien, y el grafico es bonito, 20 pts.


## Subir a GIT 50pts

Suba a su repositorio (el mismo de las clases anteriores) la carpeta de trabajo, esta debe contener "tarea.sh", "main.cpp", "funciones.h", "grafica.py".
Entregar el enlace de esta carpeta.
Por cada archivo adcional se restan 20 puntos. EJ. datos.txt, grafico.pdf y otras cosas que se les ocurran.




# Cómo hacer que una función devuelva un array?

Usamos apuntadores, en la Magistral lo explicará en detalle Juan Pablo, pero aquí
hay un pedacito de código que lo hace.

```c++
#include <iostream>
using namespace std;

// Función que retorna un array utilizando el apuntador (*)
double * suma(double a[2], double b[2]){
    double * c = new double[2];
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    return c;
}

int main(){
    // Creamos dos arrays que contengan números de doble precisión
    double X[2] = {3.24, -4.333};
    double Y[2] = {6.76, -5.667};
    
    // Generamos un tercer array con el apuntador (*) y la función
    double * Z = suma(X, Y);
    
    // Imprimirmos los dos elementos de Z.
    for(int i=0; i<2; i++)
        cout << Z[i] << endl;
    return 0;
}
```