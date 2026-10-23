# Cómo trabajamos en equipo

## Reglas básicas

1. **Nadie trabaja directo en `main`.** `main` siempre debe compilar y funcionar.
2. Cada tarea se hace en **su propia rama** y se une a `main` con un **Pull Request**.
3. Antes de abrir un Pull Request, el código **debe compilar sin advertencias**.
4. Otro integrante revisa y aprueba el Pull Request antes de unirlo.

## Primera vez (cada integrante)

```bash
git config --global user.name "Tu Nombre"
git config --global user.email "tu_correo@espe.edu.ec"
git clone https://github.com/daanfre/Colas.git
cd Colas
```

## Flujo para cada tarea

```bash
# 1. Actualiza tu main
git switch main
git pull

# 2. Crea una rama para tu tarea
git switch -c feature/contar-elementos

# 3. Trabaja, compila, prueba... y guarda los cambios
git add .
git commit -m "Agrega función contar() a Operaciones"

# 4. Sube tu rama
git push -u origin feature/contar-elementos
```

5. En GitHub, abre un **Pull Request** de tu rama hacia `main`.
6. Cuando esté aprobado y unido, borra la rama y vuelve al paso 1.

## Nombres de ramas

| Prefijo     | Para qué                     | Ejemplo                    |
|-------------|------------------------------|----------------------------|
| `feature/`  | Nueva funcionalidad          | `feature/menu-interactivo` |
| `fix/`      | Corregir un error            | `fix/eliminar-cola-vacia`  |
| `docs/`     | Cambios en documentación     | `docs/readme-integrantes`  |

## Mensajes de commit

- En presente y describiendo **qué** cambia: `Agrega buscar()`, `Corrige fin al vaciar la cola`.
- Evita mensajes como `cambios`, `asdf` o `final2`.
- Un commit = un cambio lógico. Mejor varios commits pequeños que uno gigante.

## Qué NO se sube

- Ejecutables (`.exe`), carpetas `build/` ni archivos `.o`: ya están en `.gitignore`.
- Si alguien sube uno por error: `git rm --cached program.exe` y commit.

## Si hay un conflicto

Ocurre cuando dos personas cambian las mismas líneas. Git marca el archivo así:

```
<<<<<<< HEAD
tu versión
=======
la versión del otro
>>>>>>> main
```

Deja el código correcto, borra las marcas `<<<<<<<`, `=======`, `>>>>>>>`,
compila de nuevo y luego `git add .` y `git commit`.
Para evitarlos: haz `git pull` seguido y repartan el trabajo por archivos.
