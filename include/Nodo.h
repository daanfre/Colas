/**********UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE************************************************
 
 Proposito:                      Colas      
 Autor:                          Allauca Steven, Freire Daniela, Paredes Ximena, Quiñonez Gandhi                        
 Fecha de creacion:              23/10/2026                          
 Fecha de modificacion:          23/10/2026                          
 Materia:                        Estructura de datos                 
 NRC :                           36865                          
 ************************************************************************************************/

#ifndef NODO_H
#define NODO_H

class Nodo {
private:
    int dato;
    Nodo* siguiente;
public:
    Nodo();
    Nodo(int valor);
    int getDato() const;
    void setDato(int nuevoDato);
    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* nuevoSiguiente);
};

#endif
