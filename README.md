# SGSI Grupo 3 — Proyecto Final (Estándares de Seguridad, UMG)

Repositorio del Grupo 3 del curso Estándares de Seguridad (Maestría en Seguridad Informática, UMG). El proyecto es el diseño e implementación de un Sistema de Gestión de Seguridad de la Información (SGSI) para la Universidad Mariano Sanchez (escenario ficticio), coordinado a partir de un documento maestro del proyecto.

## Roles del equipo

| Rol | Quién |
|---|---|
| CEO / decisora | kiva |
| PM y QA | Heylin |
| Programadora | Ardilla |
| Apoyo | madi, Grok Bot, New Bot |

## Contenido

- `integrante2/`: módulo de Huéspedes en C++ (integrante 2).
  - `Huesped.h`: declara `contarHuespedesRegistrados` y `buscarHuespedPorNombre`.
  - `Huesped.cpp`: el conteo incluye a todos los huéspedes, y la búsqueda es por nombre parcial sin distinguir mayúsculas; devuelve la posición del primero que coincide o -1.
  - `prueba_integrante2.cpp`: pruebas con resultados conocidos.

El `struct Huesped` del encabezado es de referencia: al integrar, se usa el struct que ya existe en el proyecto.

## Compilar y probar

```bash
cd integrante2
g++ -Wall -Wextra -o prueba prueba_integrante2.cpp Huesped.cpp
./prueba
```
