#include <iostream>
using namespace std;

int main() {
    char ulangi = 'y';
    int kursi[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int baris, kolom;

    cout << "Layout Kursi Awal:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << kursi[i][j] << " ";
        }
        cout << endl;
    }

    while (ulangi == 'y' || ulangi == 'Y') {
        cout << "\nMasukkan baris (1-5) : ";
        cin >> baris;
        cout << "Masukkan kolom (1-5) yang ingin dipesan: ";
        cin >> kolom;

        if (baris == 0 && kolom == 0) {
            break;
        }

        if (baris < 1 || baris > 5 || kolom < 1 || kolom > 5) {
            cout << "Pilihan kursi tidak valid.\n";
        } else if (kursi[baris - 1][kolom - 1] == 1) {
            cout << "\nKursi sudah terisi.\n";
        } else {
            kursi[baris - 1][kolom - 1] = 1;
            cout << "\nKursi berhasil dipesan.\n";
        }

        cout << "\nLayout Kursi Terbaru:\n";
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cout << kursi[i][j] << " ";
            }
            cout << endl;
        }

        cout << "\nApakah kamu mau memesan lagi?" << endl;
        cout << "Jawab (y/t): ";
        cin >> ulangi;
    }
    cout << "\nPesanan Selesai!" << endl;

    return 0;
}