#include <iostream>

using namespace std;

int main() {
    int n;

    // Input dari pengguna
    cout << "Masukkan angka: ";
    cin >> n;

    // Loop untuk mencetak pola
    for (int i = n; i >= 1; i--) {
        // Bagian kiri: menurun dari i hingga 1
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Cetak tanda bintang *
        cout << "*";

        // Bagian kanan: menaik dari 1 hingga i
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }

        // Baris baru untuk pola berikutnya
        cout << endl;
    }

    // Output terakhir hanya tanda *
    cout << "*" << endl;

    return 0;
}
