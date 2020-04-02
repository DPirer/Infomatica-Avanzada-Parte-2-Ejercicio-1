// EJERCICIO 1

// AUTOR: PEDRO ESTÉVEZ 

/* Escribir un programa que cree un vector de caracteres de la ‘a’ a la ‘k’ y que
posteriormente sustituya todas las vocales que se encuentran en el vector por el
carácter ‘*’ */

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    // Definimos la semilla para que la función rand de verdad genere números aleatorios
    srand(time(0));

    // Definimos un vector de tipo caracter de 11 elementos (de la 'a' a la 'k')
    vector<char> v(11);

    //  Definimos el interador
    vector<char>::iterator it;

    // Recorremos el vector generando números aleatorios
    cout<<"El vector creado es: [ ";
    for (it = v.begin(); it != v.end(); it++){
        *it = int('a') + rand() % 11; // Números aleatorios entre 'a' y k'
         cout<<*it<<" ";
    }
    cout<<"]"<<endl<<endl;

    // Aunque se podía haber hecho dentro del bucle anterior, por claridad, creamos otro bucle
    // que recorra el vector y busque las vocales para sustiruirlas por asteriscos
    cout<<"El vector modificado es: [ ";
    for (it = v.begin(); it != v.end(); it++){
        if ((*it == 'a') || (*it == 'e') || (*it == 'i')){
            *it = '*';
        }
        cout<<*it<<" ";
    }
    cout<<"]"<<endl<<endl;

    system("pause");
    return 0;
}
