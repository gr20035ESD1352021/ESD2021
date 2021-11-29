#include "pila.h"

Pila *crear_pila()
{
    Pila *pila = (Pila *)malloc(sizeof(Pila));
    pila->inicio = NULL;
    pila->elementos = 0;
}

void destruir_pila(Pila *pila)
{
    while (pila->inicio != NULL)
    {
        desapilar(pila);
    }
    free(pila);
}

Nodo *crear_nodo(int dato)
{
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->dato = dato;
    nodo->link = NULL;
    return nodo;
}

void destruir_nodo(Nodo *nodo)
{
    nodo->dato = 0;
    nodo->link = NULL;
    free(nodo);
}

void apilar(Pila *pila, int dato)
{
    Nodo *nodo = crear_nodo(dato);
    nodo->link = pila->inicio;
    pila->inicio = nodo;
    pila->elementos++;
}

void desapilar(Pila *pila)
{
    if (pila->inicio != NULL)
    {
        Nodo *temp = pila->inicio;
        pila->inicio = pila->inicio->link;
        destruir_nodo(temp);
        pila->elementos--;
    }
    else
    {
        printf("No hay elementos en la pila");
    }
}

int obtenerP(Pila *pila)
{
    return pila->inicio->dato;
}

int es_vacia(Pila *pila)
{
    return pila->elementos == 0;
}