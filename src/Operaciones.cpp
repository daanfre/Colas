void insertar(Nodo*& frente, Nodo*& fin, int valor) {
    // Crear el nodo nuevo con el valor recibido
    Nodo* nuevo = new Nodo(valor);

    if (frente == nullptr) {
        // Si la cola esta vacia, el nuevo es el primero
        frente = nuevo;
    } else {
        // Si no, el ultimo actual apunta al nuevo
        fin->setSiguiente(nuevo);
    }
    // El nuevo pasa a ser el ultimo de la cola
    fin = nuevo;
}
