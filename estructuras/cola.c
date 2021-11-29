#include "cola.h"

COLA *crear_cola()
{
    COLA *cola = (COLA *)malloc(sizeof(COLA));
    cola->inicio = NULL;
    cola->final = cola->inicio;
    cola->elementos = 0;
}

void destruir_cola(COLA *cola)
{
    while (cola->inicio != NULL)
    {
        eliminar_nodo(cola);
    }
    free(cola);
}

Nodo *crear_nodoC(int dato)
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

void encolar(COLA *cola, int dato)
{
    Nodo *nodo = crear_nodoC(dato);
    if (cola->inicio == NULL)
    {
        cola->inicio = nodo;
        cola->final = nodo;
    }
    else
    {
        cola->final->link = nodo;
        cola->final = nodo;
    }
}

void eliminar_nodo(COLA *cola)
{
    if (cola->inicio != NULL)
    {
        Nodo *temp = cola->inicio;
        cola->inicio = cola->inicio->link;
        destruir_nodo(temp);
        if (cola->inicio == NULL)
        {
            cola->final = NULL;
        }
    }
}