#ifndef PILA_H
#define PILA_H

#include <stdlib.h>
#include <stdio.h>

typedef struct nodo {
    int dato;
    struct nodo* link;
} Nodo;

typedef struct pila{
    struct nodo* inicio;
    int elementos;
}Pila;

Pila* crear_pila();
void destruir_pila(Pila* pila);

Nodo* crear_nodo(int dato);
void destruir_nodo(Nodo* nodo);

void apilar(Pila* pila, int dato);
void desapilar(Pila* pila);

int obtenerP(Pila* pila);
int es_vacia(Pila* pila);
#endif //PILA_H