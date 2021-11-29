#ifndef BST_H
#define BST_H

#include <stdlib.h>

typedef struct nodo{
    int dato;
    struct nodo* iz;
    struct nodo* dr;
} Nodo;

typedef Nodo* Arbol;

Nodo* crear_nodoA(int dato);
void destruir_nodoA(Nodo* nodo);

void insertarA(Arbol* arbol, int dato);
int existeA(Nodo* arbol, int dato);

void pre_orden(Nodo* arbol);
void in_orden(Nodo* arbol);
void post_orden(Nodo* arbol);

#endif //BST_H