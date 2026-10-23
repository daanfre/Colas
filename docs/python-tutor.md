# Visualizar en Python Tutor

1. Abre <https://pythontutor.com/cpp.html>.
2. Pega en un solo editor, en este orden:
   1. `include/Nodo.h` (la clase).
   2. `src/Nodo.cpp` **sin** `#include "Nodo.h"`.
   3. `src/Operaciones.cpp` **sin** `#include "Operaciones.h"`.
   4. `src/main.cpp` **sin** `#include "Operaciones.h"`.

   Los `#include <iostream>` pueden mantenerse.
3. Presiona **Visualize Execution** y avanza con **Next**.
4. Observa `frente`, `fin`, `actual` y los nodos creados con `new`.
