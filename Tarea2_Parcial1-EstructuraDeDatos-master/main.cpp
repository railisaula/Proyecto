#include "Evaluador.h"
#include <iostream>
#include <queue>
#include <list>
using namespace std;

//Marcial Ordones.
//Richart Murcia.

//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false.
bool sonPares(queue<int> mi_cola)
{
    while(!mi_cola.empty()) // Si va al ejecutar hasta que la cola este vacia.
    {
        if(mi_cola.front() %2 !=0) // Comparamos si el elemento de la cola es impar.
        {
            return false; //Si es impar retorna false.
        }
        mi_cola.pop(); // Eliminamos un elemento de la cola.
    }
    return true; // Retorna true si no encuentra impares.
}

//Devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false.
bool sonPares(list<int> mi_lista)
{
    do // Para evaluar desde el inicio de la lista.
    {
        if(mi_lista.front() %2 !=0) // Comparamos si el elemento de la lista es impar.
        {
            return false; // Si es impar retorna false.
        }
        mi_lista.pop_front(); // Eliminamos el primer elemento de la lista.
    }
    while(!mi_lista.empty()); // Se va a ejecutar hasta que la lista este vacia.
    return true; // Si no encontra impares retorna true.
}

//Devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false.
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty()) // Se va a ejecutar hasta que la lista este vacia.
    {
        if(mi_cola.front()==str) // Comparamos si el elemnto str existe en la cola.
        {
            return true; // Retorna true si lo encuentra.
        }
        mi_cola.pop(); // Eliminamos un elemento de la cola.
    }
    return false; // Sino esta retorna false.
}

//Devuelve true si str es un elemento de mi_lista, de lo contrario devuelve false.
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty()) //Se va a ejecutar hasta que la lista este vacia.
    {
        if(mi_lista.front()== str) // Comparamos si el elemnto str existe en la lista.
        {
            return true; // Retorna true si lo encuentra.
        }
        mi_lista.pop_front(); // Eliminamos un elemento de la lista.
    }
    return false; // Sino esta retorna false.
}

//Devuelve la suma de los elementos de la cola.
int getSuma(queue<int> mi_cola)
{
    int Suma =0; // Variable para guardar la suma.
    while(!mi_cola.empty()) // Se va a ejecutar hasta que la cola este vacia.
    {
        Suma += mi_cola.front(); //La variable Suma se le va sumando lo que contiene en ese momento la cola.
        mi_cola.pop(); // Eliminamos un elemento en la cola.
    }
    return Suma; //Rretorna sa suma de todos los datos de la cola.
}

//Devuelve la suma de la cantidad letras de cada cadena de la lista.
int sumarLetras(list<string> mi_lista)
{
    int suma = 0;//Creamos la variable que suma.
    string valor;//Creamos la variable que tomara la cadena de datos.
    list<string>::iterator temp; //Inicializamos una lista string y una variable temporal de tipo iterator.

    for(temp=mi_lista.begin();temp!=mi_lista.end();temp++) //Se recorre la lista desde el inicio hasta el final.
    {
        valor=*temp;//Valor captura lo que esta en la posicion temp.
        suma+= valor.length();//Suma va sumando la cadena de datos que toma valor.
    }
    return suma;//Retornamos la suma de todas las cadenas de datos.
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false.
bool estaOrdenada(list<char>mi_lista)
{
    list<char> Lista_aux = mi_lista; // Creamos una lista auxiliar para guardar los caracteres de la lista que tenemos.
    Lista_aux.sort(); // Ordenamos alfabeticamente nuestra lista auxiliar.

    do // Para evaluar desde el inicio de la lista.
    {
        if(mi_lista.front() != Lista_aux.front()) // Evaluamos si los elementos de las listas son iguales.
        {
            return false; // Retorna que esta desordenada.
        }
        mi_lista.pop_front(); // Eliminamos un elemento de la lista.
        Lista_aux.pop_front(); // Eliminamos un elemento de la lista auxiliar.
    } while(!mi_lista.empty()); // Se evaluara hasta que las lista este vacia.
    return true; // Si esta ordenada retorna true.
}

int main ()
{
    evaluar();
    return 0;
}
