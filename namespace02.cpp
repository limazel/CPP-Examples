#include <iostream>
using namespace std;

namespace Kafe {
    class Siparis {
        private:
            string urunAdi;
            int miktar;
        public:
            Siparis(string urun, int adet) {
                urunAdi = urun;
                miktar = adet;
            }

            void hazirla() {
                cout << miktar << " adet " << urunAdi << " hazırlanıyor..." << endl;
            }

            void servisEt() {
                cout << urunAdi << " adlı ürün müşteriye servis edildi." << endl;
            }

            void bilgiGoster() {
                cout << "Sipariş: " << urunAdi << " - Adet: " << miktar << endl;
            }
    };
}

int main() {
    Kafe::Siparis s1("Latte", 2);
    Kafe::Siparis s2("Espresso", 1);

    s1.bilgiGoster();
    s1.hazirla();
    s1.servisEt();

    cout << endl;

    // 2. Sipariş
    s2.bilgiGoster();
    s2.hazirla();
    s2.servisEt();

    return 0;
}