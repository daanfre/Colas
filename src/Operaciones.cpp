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
    const Nodo* actual = frente;
    while (actual != nullptr) {
        if (actual->getDato() == valor) {
            return true;
        }
        actual = actual->getSiguiente();
    }
    return false;
}

// ===== Steven: IMPRIMIR =====
// Mostrar: "Cola (frente a fin): 10 20 30" o "vacia" si no hay nodos.
void imprimir(const Nodo* frente) {
    cout << "Cola (frente a fin): ";
    if (frente == nullptr) {
        cout << "vacia\n";
        return;
    }

    const Nodo* actual = frente;
    while (actual != nullptr) {
        cout << actual->getDato() << " ";
        actual = actual->getSiguiente();
    }
    cout << '\n';
}