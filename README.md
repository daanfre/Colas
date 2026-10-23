# Cola en C++ con nodos y punteros

**Universidad de las Fuerzas Armadas ESPE** · Estructura de datos · NRC 36865

Implementación de una **cola (FIFO)** con nodos enlazados y punteros en C++:
se inserta al final y se elimina del frente.

## Integrantes

| Nombre | Usuario de GitHub |
|--------|-------------------|
| Allauca Steven | @usuario |
| Freire Daniela | @usuario |
| Paredes Ximena | @usuario |
| Quiñonez Gandhi | @usuario |

## Division del trabajo

| Integrante | Tarea en `src/Operaciones.cpp` |
|------------|--------------------------------|
| Freire Daniela | Estructura base (Nodo, main, headers) e `insertar()` |
| Persona 2 | `eliminar()` |
| Persona 3 | `buscar()` |
| Persona 4 | `imprimir()` |

Cada integrante busca su `TODO`, programa su funcion y hace **su propio commit**.

## Estructura del proyecto

```
Colas/
├── include/            Archivos de cabecera (.h): declaraciones
│   ├── Nodo.h          Clase Nodo: atributos privados, constructores, getters/setters
│   └── Operaciones.h   Declaraciones de insertar, eliminar, buscar e imprimir
├── src/                Implementación (.cpp)
│   ├── Nodo.cpp        Implementación de Nodo
│   ├── Operaciones.cpp Lógica de las cuatro operaciones
│   └── main.cpp        Pruebas con los valores 10, 20 y 30
├── docs/
│   └── python-tutor.md Cómo visualizar el programa paso a paso
├── .gitignore          Archivos que git no debe subir (.exe, build/, etc.)
├── CONTRIBUTING.md     Cómo trabajamos en equipo con git
└── README.md
```

## Requisitos

- `g++` con soporte de C++17. Compruébalo con `g++ --version`.
- VS Code (opcional).

## Compilar y ejecutar

Desde la carpeta `Colas`, en la terminal:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic -Iinclude src/Nodo.cpp src/Operaciones.cpp src/main.cpp -o program.exe
.\program.exe        # PowerShell
./program.exe        # Git Bash / Mac / Linux
```

> El botón ▶ "Run C/C++ File" compila solo `main.cpp` y da errores de enlace
> (`undefined reference`). Usa el comando completo.

`-Iinclude` le dice al compilador que busque los `.h` en la carpeta `include/`.

### Salida esperada

```
Insertar 10, 20 y 30:
Cola (frente a fin): 10 20 30
Buscar 20: encontrado
Eliminar el primero (10):
Cola (frente a fin): 20 30
Buscar 10: no encontrado
Cola (frente a fin): vacia
```

## Conceptos clave

- **FIFO:** insertar al final y eliminar del frente.
- `buscar` e `imprimir` no modifican la cola (reciben `const Nodo*`).
- `Nodo*&` permite modificar los punteros originales de `main`.
- `->` accede a un método mediante un puntero.
- `new` crea un nodo; `delete` lo destruye y libera su memoria.
- Al eliminar el último nodo, `frente` y `fin` quedan en `nullptr`.
- No hay plantillas: los `.cpp` se compilan por separado y nunca se incluyen con `#include`.
