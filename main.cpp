#include <iostream>

using namespace std;

int harga, tempo, pokokperbulan, bungaperbulan, angsuranke;
double angsuran;
char bayar;

int main()
{
    cout << "Harga : ";
    cin >> harga;

    cout << "Jumlah Angsuran (Bulan) : ";
    cin >> tempo;

    pokokperbulan = harga / tempo;

    bungaperbulan = (harga * 0.02) / 12;

    angsuran = pokokperbulan + bungaperbulan;

    cout << "Besaran angsuran : " << angsuran <<endl;

    angsuranke = 1;

    while (angsuranke <= tempo){
        cout << "\nAngsuran Ke-" << angsuranke <<endl;
        cout << "Sisa Tanggungan : " << (tempo - angsuranke) * angsuran << endl;
        cout << "Bayar? [y]/[t]: ";
        cin >> bayar;
        if(bayar=='y')
            angsuranke++;
    }

    if (angsuranke>=tempo){
        cout << "\nLUNAS";
    }
    return 0;
}
