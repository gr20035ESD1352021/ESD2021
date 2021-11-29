#ifndef COLA_H
#define COLA_H

#include <stdlib.h>

typedef struct nodo{
    int dato;
    struct nodo* link;
} Nodo;

typedef struct cola{
    struct nodo* inicio;
    struct nodo* final;
    int elementos;
} COLA;

COLA* crear_cola();
void destruir_cola(COLA* cola);

Nodo* crear_nodoC(int dato);
void destruir_nodo(Nodo* nodo);

void encolar(COLA* cola, int dato);
void eliminar_nodo(COLA* cola); //Primer elemento

#endif //COLA_H