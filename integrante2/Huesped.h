#ifndef HUESPED_H
#define HUESPED_H
#include <string>

// NOTA: este struct es solo de referencia. Usar el struct Huesped que ya
// existe en el proyecto; las funciones nuevas solo necesitan el campo `nombre`.
struct Huesped {
    std::string documento;
    std::string nombre;
    std::string telefono;
};

// ---- Funciones nuevas (Integrante 2) ----
// Fase 3: recorrido y conteo
int contarHuespedesRegistrados(Huesped huespedes[], int cantidad);

// Fase 4: busqueda por nombre (coincidencia parcial, sin importar mayusculas)
int buscarHuespedPorNombre(Huesped huespedes[], int cantidad, std::string nombreParcial);

#endif
