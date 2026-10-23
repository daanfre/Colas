/**********UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE************************************************
 
 Proposito:                      Colas      
 Autor:                          Allauca Steven, Freire Daniela, Paredes Ximena, Quiñonez Gandhi                        
 Fecha de creacion:              23/10/2026                          
 Fecha de modificacion:          23/10/2026                          
 Materia:                        Estructura de datos                 
 NRC :                           36865                          
 ************************************************************************************************/

#include "Nodo.h"

Nodo::Nodo() : dato(0), siguiente(nullptr) {}

Nodo::Nodo(int valor) : dato(valor), siguiente(nullptr) {}

int Nodo::getDato() const {
    return dato;
}

void Nodo::setDato(int nuevoDato) {
    dato = nuevoDato;
}

Nodo* Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* nuevoSiguiente) {
    siguiente = nuevoSiguiente;
}
