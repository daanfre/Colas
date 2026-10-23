/**********UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE************************************************
 
 Proposito:                      Colas      
 Autor:                          Allauca Steven, Freire Daniela, Paredes Ximena, Quiñonez Gandhi                        
 Fecha de creacion:              23/10/2026                          
 Fecha de modificacion:          23/10/2026                          
 Materia:                        Estructura de datos                 
 NRC :                           36865                          
 ************************************************************************************************/

#ifndef OPERACIONES_H
#define OPERACIONES_H

#include "Nodo.h"

void insertar(Nodo*& frente, Nodo*& fin, int valor);
void eliminar(Nodo*& frente, Nodo*& fin);
bool buscar(const Nodo* frente, int valor);
void imprimir(const Nodo* frente);

#endif
