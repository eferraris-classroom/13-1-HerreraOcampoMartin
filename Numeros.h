#ifndef INC_13_1_HERRERAOCAMPOMARTIN_NUMEROS_H
#define INC_13_1_HERRERAOCAMPOMARTIN_NUMEROS_H

typedef struct numero {
    int valor;
    struct numero *siguiente;
} Numero;

typedef struct listaNumeros{
    int tam;
    Numero *primero;
} ListaNumeros;

ListaNumeros *crearListaNumeros();
Numero *crearNumero(int valor);
void agregarNumero(ListaNumeros *lista, Numero *nuevo);
int buscarMaximo(ListaNumeros *lista);
int buscarMinimo(ListaNumeros *lista);
void eliminarNumero(ListaNumeros *lista, int valor);
void imprimirNumeros(ListaNumeros *lista);
void liberarNumeros(ListaNumeros *lista);

#endif
