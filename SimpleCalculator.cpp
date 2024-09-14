#include <iostream>
#include <limits> // Untuk std::numeric_limits

using namespace std;

int main() {
    char oper;
    double num1, num2;

    while (true) {
        cout << "Kalkulator Sederhana" << endl;
        cout << "Pilih operasi:" << endl;
        cout << "1. Penjumlahan (+)" << endl;
        cout << "2. Pengurangan (-)" << endl;
        cout << "3. Perkalian (*)" << endl;
        cout << "4. Pembagian (/)" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan (1/2/3/4/5): ";
        cin >> oper;

        // Cek jika pengguna ingin keluar
        if (oper == '5') {
            cout << "Terima kasih telah menggunakan kalkulator." << endl;
            break;
        }

        // Minta pengguna memasukkan dua angka
        cout << "Masukkan angka pertama: ";
        cin >> num1;
        cout << "Masukkan angka kedua: ";
        cin >> num2;

        // Pastikan input valid
        if (cin.fail()) {
            cin.clear(); // Bersihkan status kesalahan
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Abaikan input yang salah
            cout << "Input tidak valid. Harap masukkan angka." << endl;
            continue;
        }

        // Proses berdasarkan operasi yang dipilih
        switch (oper) {
            case '+':
                cout << "Hasil Penjumlahan: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Hasil Pengurangan: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Hasil Perkalian: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Hasil Pembagian: " << num1 / num2 << endl;
                } else {
                    cout << "Kesalahan: Pembagi tidak boleh nol." << endl;
                }
                break;
            default:
                cout << "Pilihan tidak valid. Harap pilih dari menu yang tersedia." << endl;
                break;
        }
    }

    return 0;
}
