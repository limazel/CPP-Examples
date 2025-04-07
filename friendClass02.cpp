#include <iostream>
using namespace std;

class Urun {
private:
    string isim;
    double fiyat;

public:
    Urun(string i, double f) {
        isim = i;
        fiyat = f;
    }

    void goster() {
        cout << "Ürün: " << isim << ", Fiyat: " << fiyat << " TL" << endl;
    }

    // Friend sınıf
    friend class Sepet;
};

class Sepet {
public:
    static void karsilastir(Urun u1, Urun u2) {
        if (u1.fiyat < u2.fiyat) {
            cout << u1.isim << " daha ucuz." << endl;
        }
        else if (u1.fiyat > u2.fiyat) {
            cout << u2.isim << " daha ucuz." << endl;
        }
        else {
            cout << "Fiyatlar eşit." << endl;
        }
    }
};

int main() {
    Urun urun1("Laptop", 18500.50);
    Urun urun2("Tablet", 6500.75);

    urun1.goster();
    urun2.goster();

    cout << "\nKarşılaştırma sonucu:\n";
    Sepet::karsilastir(urun1, urun2);

    return 0;
}
