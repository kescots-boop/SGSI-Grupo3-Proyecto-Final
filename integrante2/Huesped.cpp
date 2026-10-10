#include "Huesped.h"
#include <cctype>

// ---------------- Fase 3 ----------------
// Recorre el arreglo completo con un ciclo for y devuelve cuantos huespedes
// hay registrados (segun la guia, por ahora es simplemente la cantidad).
// Sirve como base para filtrar mas adelante, por ejemplo agregando un if
// dentro del ciclo para contar solo los que tienen reservas activas.
int contarHuespedesRegistrados(Huesped huespedes[], int cantidad) {
    int contador = 0;
    for (int i = 0; i < cantidad; i++) {
        (void)huespedes[i]; // aqui se aplicaria un filtro en el futuro
        contador++;
    }
    return contador;
}

// ---------------- Fase 4 ----------------
// Funcion auxiliar: verifica si `fragmento` aparece dentro de `texto`
// a partir de la posicion `inicio`, comparando caracter por caracter
// con tolower() (sin importar mayusculas/minusculas).
static bool coincideDesde(const std::string& texto, const std::string& fragmento, int inicio) {
    for (int j = 0; j < (int)fragmento.length(); j++) {
        char a = (char)tolower((unsigned char)texto[inicio + j]);
        char b = (char)tolower((unsigned char)fragmento[j]);
        if (a != b) {
            return false;
        }
    }
    return true;
}

// Recibe un fragmento de nombre (ej. "jua") y recorre el arreglo buscando si
// aparece dentro de algun nombre registrado. Devuelve la posicion del primer
// huesped que coincide, o -1 si ninguno coincide.
int buscarHuespedPorNombre(Huesped huespedes[], int cantidad, std::string nombreParcial) {
    int largoFragmento = (int)nombreParcial.length();
    if (largoFragmento == 0) {
        return -1; // un fragmento vacio no se considera busqueda valida
    }
    for (int i = 0; i < cantidad; i++) {
        std::string nombre = huespedes[i].nombre;
        int largoNombre = (int)nombre.length();
        // probar cada posicion inicial donde el fragmento cabe en el nombre
        for (int inicio = 0; inicio + largoFragmento <= largoNombre; inicio++) {
            if (coincideDesde(nombre, nombreParcial, inicio)) {
                return i;
            }
        }
    }
    return -1;
}
