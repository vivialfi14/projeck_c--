// ## Soal 1
// 1. Buat program cpp yang memiliki `struct Karyawan` yang memiliki variabel `nama`, `jabatan`, dan `gaji` (input oleh User). Buat output dalam bentuk tabel
// 2. Buat output gaji terbesar dan gaji terendah

// Contoh output
// ```
// =======================================
//       Nama |    Jabatan |       Gaji
// ---------------------------------------
//       John |        CEO |    1000000
//        Doe |      Staff |     300000
// ---------------------------------------

// Gaji terbesar
// Nama: John
// Jabatan: CEO
// Gaji: 1000000

// Gaji terendah
// Nama: John
// Jabatan: CEO
// Gaji: 300000
// =======================================
// ```

#include <iostream>
#include <vector>
#include <iomanip> // Tambahkan library untuk input/ouput(io) manupulation
using namespace std;

struct Karyawan
{
    string nama;
    string jabatan;
    int gaji;
};

int main()
{
    std::vector<Karyawan> karyawan_array;

    int n = 0;
    std::cout << "Masukkan jumlah karyawan yang akan di input: ";
    std::cin >> n;
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        Karyawan item_karyawan;

        string nama_item;
        cout << "Nama: ";
        cin >> nama_item;
        item_karyawan.nama = nama_item;

        int jabatan_item;
        cout << "Jabatan: ";
        cin >> jabatan_item;
        item_karyawan.jabatan = jabatan_item;

        int gaji_item;
        cout << "Gaji: ";
        cin >> gaji_item;
        item_karyawan.gaji = gaji_item;

        karyawan_array.push_back(item_karyawan);
    }

    cout << "\n========================================================\n";
    cout << setw(10) << "Nama" << " | " << setw(10) << "Jabatan" << " | " << setw(10) << "Gaji" << " | ";
    cout << "--------------------------------------------------------\n";
    return 0;
}
