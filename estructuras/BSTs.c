#include "BSTs.h"

Nodo* crear_nodoA(int dato){
    Nodo* nodo = (Nodo*)malloc(sizeof(Nodo));
    nodo->dato = dato;
    nodo->iz = nodo->dr = NULL;
    return nodo;
}

void destruir_nodoA(Nodo* nodo){
    nodo->iz = nodo->dr = NULL;
    free(nodo);
}

void insertarA(Nodo** arbol, int dato){
    if(*arbol == NULL){
        *arbol = crear_nodoA(dato);
    }else{
        int datoRaiz = (*arbol)->dato;
        if(dato < datoRaiz){
            insertar(&(*arbol)->iz, dato);
        }else{
            insertar(&(*arbol)->dr, dato);
        }
    }
}

int existeA(Nodo* arbol, int dato){
    if(arbol == NULL){
        return 0;
    }else if (arbol->dato == dato){
         return 1;
    }else if (dato < arbol->dato){
        return existeA(arbol->iz, dato);
    }else {
        return existeA(arbol->dr, dato);
    }
}

void pre_orden(Nodo* arbol){
    if(arbol == NULL){
        //printf(" - ");
    }else{
        pre_orden(arbol->iz);
        pre_orden(arbol->dr);
    }
}

void in_orden(Nodo* arbol){
    if(arbol == NULL){
        //printf(" - ");
    }else{
        in_orden(arbol->iz);
        in_orden(arbol->dr);
    }
}

void post_orden(Nodo* arbol){
    if(arbol == NULL){
        //printf(" - ");
    }else{
        post_orden(arbol->iz);
        post_orden(arbol->dr);
    }
}