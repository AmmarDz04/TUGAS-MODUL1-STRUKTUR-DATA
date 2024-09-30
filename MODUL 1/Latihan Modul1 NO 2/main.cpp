#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk mengubah angka menjadi teks
string angkaKeTeks(int angka)
{
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    // Jika angka adalah 0
    if (angka == 0)
    {
        return "nol";
    }

    // Jika angka adalah 100
    if (angka == 100)
    {
        return "seratus";
    }

    // Jika angka di bawah 10
    if (angka < 10)
    {
        return satuan[angka];
    }

    // Jika angka di antara 10 dan 19 (belasan)
    if (angka >= 10 && angka < 20)
    {
        return belasan[angka - 10];
    }

    // Jika angka di antara 20 dan 99 (puluhan)
    if (angka >= 20 && angka < 100)
    {
        return puluhan[angka / 10] + (angka % 10 != 0 ? " " + satuan[angka % 10] : "");
    }

    return "";
}

int main()
{
    int angka;

    // Input dari pengguna
    cout << "Masukkan angka antara 0 sampai 100: ";
    cin >> angka;

    // Memastikan input valid
    if (angka < 0 || angka > 100)
    {
        cout << "Masukkan angka yang valid (0 sampai 100)." << endl;
    }
    else
    {
        // Output hasil dalam bentuk teks
        cout << angka << ": " << angkaKeTeks(angka) << endl;
    }

    return 0;
}
