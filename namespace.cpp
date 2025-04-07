#include <iostream>

namespace Kafe {
    void siparisAl() {
        std::cout << "Sipariş alindi." << std::endl;
    }

    void hazirla() {
        std::cout << "Kahve hazirlaniyor..." << std::endl;
    }

    void servisEt() {
        std::cout << "Siparis musteriye ulasti." << std::endl;
    }
}

int main() {
    Kafe::siparisAl();
    Kafe::hazirla();
    Kafe::servisEt();

    return 0;
}