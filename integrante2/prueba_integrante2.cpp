// Prueba rapida (no forma parte del proyecto): g++ Huesped.cpp prueba_integrante2.cpp
#include <iostream>
#include "Huesped.h"
int main() {
    Huesped h[3] = {{"1001", "Juan Perez", "5555"}, {"1002", "Maria Lopez", "5556"}, {"1003", "Ana Gomez", "5557"}};
    std::cout << "Registrados: " << contarHuespedesRegistrados(h, 3) << "\n";      // 3
    std::cout << "jua -> " << buscarHuespedPorNombre(h, 3, "jua") << "\n";        // 0
    std::cout << "LOPEZ -> " << buscarHuespedPorNombre(h, 3, "LOPEZ") << "\n";    // 1
    std::cout << "gom -> " << buscarHuespedPorNombre(h, 3, "gom") << "\n";        // 2
    std::cout << "xyz -> " << buscarHuespedPorNombre(h, 3, "xyz") << "\n";        // -1
    return 0;
}
