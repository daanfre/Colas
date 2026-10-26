/**********UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE************************************************
 
 Proposito:                      Colas      
 Autor:                          Allauca Steven, Freire Daniela, Paredes Ximena, Quiñonez Gandhi                        
 Fecha de creacion:              23/10/2026                          
 Fecha de modificacion:          23/10/2026                          
 Materia:                        Estructura de datos                 
 NRC :                           36865                          
 ************************************************************************************************/

#include "Operaciones.h"
#include <iostream>
using namespace std;

// ===== DANIELA: INSERTAR =====
// Crear un nodo nuevo con new Nodo(valor) y ponerlo al FINAL de la cola.
// Si la cola esta vacia, el nuevo nodo es frente y fin a la vez.
void insertar(Nodo*& frente, Nodo*& fin, int valor) {
    // TODO Daniela
}

// ===== XIMENA PAREDES : ELIMINAR =====
// Sacar el nodo del FRENTE y liberarlo con delete.
// Si la cola esta vacia, mostrar un mensaje.
// Si la cola queda vacia, fin tambien debe quedar en nullptr.
void eliminar (Nodo*&frente, Nodo*&fin){
    if(frente == nullptr){
        cout << "la cola esta vacia, no hay nada que eliminar .\n";
        return;
    }
    Nodo*auxiliar=frente;
    frente=frente->getSiguiente();
    if(frente == nullptr){
        fin=nullptr;

    }
    delete auxiliar;
}

// ===== PERSONA 3: BUSCAR =====
// Recorrer desde el frente con getSiguiente().
// Devolver true si encuentra el valor, false si no.
bool buscar(const Nodo* frente, int valor) {
    // TODO Persona 3
    return false;
}

// ===== PERSONA 4: IMPRIMIR =====
// Mostrar: "Cola (frente a fin): 10 20 30" o "vacia" si no hay nodos.
void imprimir(const Nodo* frente) {
    // TODO Persona 4
    cout << "imprimir() aun no implementado\n";
}
