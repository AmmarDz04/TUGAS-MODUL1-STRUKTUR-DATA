#include <iostream>

using namespace std;

int main() {
    float bil1, bil2;

    // Input dua buah bilangan dari user
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;

    // Tampilkan hasil penjumlahan
    cout << "Hasil penjumlahan: " << bil1 + bil2 << endl;

    // Tampilkan hasil pengurangan
    cout << "Hasil pengurangan: " << bil1 - bil2 << endl;

    // Tampilkan hasil perkalian
    cout << "Hasil perkalian: " << bil1 * bil2 << endl;

    // Tampilkan hasil pembagian
    // Pengecekan untuk menghindari pembagian dengan nol
    if (bil2 != 0) {
        cout << "Hasil pembagian: " << bil1 / bil2 << endl;
    } else {
        cout << "Pembagian tidak bisa dilakukan karena bilangan kedua adalah nol." << endl;
    }

    return 0;
}


//2311104071_AMMAR DZAKI NANDANA
