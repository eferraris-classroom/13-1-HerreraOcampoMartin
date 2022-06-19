#include <stdio.h>
#include "Numeros.h"

int main() {

    ListaNumeros *lista = crearListaNumeros();

    agregarNumero(lista, crearNumero(12000));
    agregarNumero(lista, crearNumero(432));
    agregarNumero(lista, crearNumero(6456));
    agregarNumero(lista, crearNumero(234));
    agregarNumero(lista, crearNumero(-3));
    agregarNumero(lista, crearNumero(34));
    agregarNumero(lista, crearNumero(534));
    agregarNumero(lista, crearNumero(-756));

    imprimirNumeros(lista);

    int maximo = buscarMaximo(lista);
    int minimo = buscarMinimo(lista);

    printf("El número más alto de la lista es el %d\n", maximo);
    printf("El número más bajo de la lista es el %d\n", minimo);

    eliminarNumero(lista, minimo);
    eliminarNumero(lista, maximo);

    imprimirNumeros(lista);

    liberarNumeros(lista);

    return 0;
}
