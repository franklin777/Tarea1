#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b; //Se devuelve la suma de valores ya dados.
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;//Se devuelve la resta de valores ya dados.
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; //Se devuelve la multiplicacion de valores ya dados.
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b; //Se devuelve la división de valores ya dados.
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if (a>b) // Hace una comparación entre a y b, si a es mayor devuelve a, sino b.
    return a;
    return b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b)// Hace una comparación entre a y b, si a es menor devuelve a, sino b.
    return a;
    return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if (a>b && a>c) //Compara "a" en relacion con "b" y "c", si es mayor "a" se devuelve.
    {
    return a;
     } else if (b>a && b>c)//Compara "b" en relacion con "c" y "a", si es mayor "b" se devuelve.
    {
    return b;
    }    else
    return c; // Al no cumplirse ninguna condición de las anteriores, c es devuelta con el valor mayor.

}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
   arreglo[posicion]=valor; //El valor es asignado en la posicion dada, debido a que la funcion es VOID no usa return.
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    int valor; //Variable creada para obtener el valor.
    valor= arreglo [posicion]; //Se le asigna a la variable el valor de la posicion del arreglo.
    return valor; //Se devuelve el valor
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
     int cont; //Variable "cont" usada como contador en el ciclo for.
     int mayor; // Variable para guardar el numero mayor del arreglo.
     mayor=arreglo[0];//Se inicializa la variable en el primer elemento del arreglo.
     for (cont=0; cont<tamano; cont++)
     {
       if (mayor<arreglo[cont]) //Si el numero es menor que el que está en esa posicion
       mayor=arreglo[cont]; //La variable cambia su valor al numero mayor que se esta comparando.
     }

    return mayor; //devuelve el valor mayor
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int cont; //Variable "cont" usada como contador en el ciclo for.
    int menor; // Variable para guardar el numero menor del arreglo.
    menor=arreglo[0]; //Se inicializa la variable en el primer elemento del arreglo.
     for (cont=0; cont<tamano; cont++)
     {
       if (menor>arreglo[cont]) //Si el  numero es menor que el que está en esa posicion
       menor=arreglo[cont]; //La variable cambia su valor al numero mayor que se esta comparando.
     }

    return menor; //Devuelve el valor menor.
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int cont;      //Variable utilizada como contador en el for.
    double suma=0; //Variable para la suma de elementos en el arreglo.
    double prom=0; // Variable para obtener el promedio.
    for (cont=0; cont<tamano; cont++)
    {
        suma+= arreglo[cont]; //Se suman los elementos contenidos en el arreglo a medida avanza el ciclo For.
    }

    prom=suma/tamano; //Calculo del promedio.
    return prom;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
