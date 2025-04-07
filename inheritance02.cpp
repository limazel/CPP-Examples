#include <iostream>
using namespace std;

// Base class
class TasimaAraci {
protected:
    string marka;
    int kapasite;
public:
    TasimaAraci(string m, int k) {
        marka = m;
        kapasite = k;
    }

    virtual void bilgiYazdir() {
        cout << "Marka: " << marka << endl;
        cout << "Kapasite: " << kapasite << endl;
    }
};

// Derived class: Otobüs
class Otobus : public TasimaAraci {
private:
    int yolcuSayisi;
public:
    Otobus(string m, int k, int y) : TasimaAraci(m, k) {
        yolcuSayisi = y;
    }

    void bilgiYazdir() override {
        TasimaAraci::bilgiYazdir();
        cout << "Yolcu Sayısı: " << yolcuSayisi << endl;
        cout << "Otobüs " << (doluMu() ? "dolu." : "dolu değil.") << endl;
    }

    bool doluMu() {
        return yolcuSayisi >= kapasite;
    }
};

// Derived class: Kamyon
class Kamyon : public TasimaAraci {
private:
    double yukTonaj;
public:
    Kamyon(string m, int k, double t) : TasimaAraci(m, k) {
        yukTonaj = t;
    }

    void bilgiYazdir() override {
        TasimaAraci::bilgiYazdir();
        cout << "Yük Tonajı: " << yukTonaj << " ton" << endl;
        cout << "Kamyon " << (asiriYukMu() ? "aşırı yüklü!" : "güvenli.") << endl;
    }

    bool asiriYukMu() {
        return kapasite < 10 && yukTonaj > 5.0;
    }
};

int main() {
    Otobus o1("Mercedes", 40, 40);
    Kamyon k1("Volvo", 8, 6.2);

    cout << "--- Otobüs Bilgileri ---" << endl;
    o1.bilgiYazdir();

    cout << "\n--- Kamyon Bilgileri ---" << endl;
    k1.bilgiYazdir();

    return 0;
}
