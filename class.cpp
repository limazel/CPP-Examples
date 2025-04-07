#include <iostream>
using namespace std;

class Musteri {

    private:
        string isim;
        int yas;
        double toplamHarcama;
    
    public: 
        Musteri(string isim, int yas, double toplamHarcama) {
            this->isim = isim;
            this->yas = yas;
            this->toplamHarcama = toplamHarcama;
        }

        void bilgileriGoster() {
            cout << "Müşteri: " << isim << endl;
            cout << "Yaş: " << yas << endl;
            cout << "Toplam Harcama: " << toplamHarcama << " TL" << endl;
            cout << "Seviye: " << getSeviye() << endl;
        }

        void harcamaEkle(double tutar) {
            if (tutar > 0)
                toplamHarcama += tutar;
        }

        string getSeviye() {
            if (toplamHarcama >= 5000)
                return "Altın";
            else if (toplamHarcama >= 1000)
                return "Gümüş";
            else
                return "Standart";
        }

        double getToplamHarcama() {
            return toplamHarcama;
        }

        void setYas(int yeniYas) {
            if(yeniYas >= 0) {
                yas = yeniYas;
            }
        }

};

int main() {
    Musteri m1("Ahmet", 30, 800);
    m1.bilgileriGoster();

    cout << "\nHarcama ekleniyor...\n";
    m1.harcamaEkle(1500);
    m1.bilgileriGoster();

    cout << "\nYaş güncelleniyor...\n";
    m1.setYas(31);
    m1.bilgileriGoster();

    return 0;
}