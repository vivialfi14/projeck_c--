#include <iostream>
#include <vector>  // Tambahkan library untuk handle array
#include <iomanip> // Tambahkan library untuk input/ouput(io) manupulation
using namespace std;

struct Transaksi
{
    string nama;
    int kuantiti;
    int harga;
};

int main()
{
    std::vector<Transaksi> transaksi_array; // Array untuk menampung transaksi yang di input oleh User

    int n = 0; // n = banyak transaksi yang akan di inputkan oleh User
    cout << "Masukkan jumlah transaksi yang akan di input: ";
    cin >> n;
    cout << std::endl;

    // Proses Input transaksi oleh User sebanyak n-kali
    for (int i = 0; i < n; i++)
    {
        Transaksi item_transaksi; // item_transaksi adalah variabel tipe Transaksi yang akan di input nama, kuantiti dan harga oleh User

        string nama_item;                // 1. Buat variabel string untuk menampung input dari User
        cout << "\nNama: ";              // 2. Berikan output ke tampilan terminal, agar user mengetahui apa yang harus dia inputkan
        cin >> nama_item;                // 3. Tampung input user ke dalam variabel yang sudah dibuat sebelumnya [nama_item]
        item_transaksi.nama = nama_item; // 4. Masukkan nilai yang sudah ditampung [nama_item] ke variabel [nama] pada struct [item_transaksi.nama]

        int kuantiti_item;                       // 1. Buat variabel string untuk menampung input dari User
        cout << "Kuantiti: ";                    // 2. Berikan output ke tampilan terminal, agar user mengetahui apa yang harus dia inputkan
        cin >> kuantiti_item;                    // 3. Tampung input user ke dalam variabel yang sudah dibuat sebelumnya [kuantiti_item]
        item_transaksi.kuantiti = kuantiti_item; // 4. Masukkan nilai yang sudah ditampung [kuantiti_item] ke variabel [kuantiti] pada struct [item_transaksi.kuantiti]

        int harga_item;
        cout << "Harga: ";
        cin >> harga_item;
        item_transaksi.harga = harga_item;

        transaksi_array.push_back(item_transaksi); // Setelah semua variabel struct di inputkan oleh User, tambahkan struct yang sudah berisi nilai [item_transaksi] ke dalam array [transaksi_array]
    }

    // Proses Output tampilan sebanyak data yang berada pada array transaksi [transaksi_array.size()]
    int grand_total = 0; // Buat variabel grand_total untuk menampung nilai dari total tiap harga dari item_transaksi
    cout << "\n========================================================\n";
    cout << setw(10) << "Nama" << " | " << setw(10) << "Kuantiti" << " | " << setw(10) << "Harga" << " | " << setw(15) << "Total" << "\n"; // fungsi setw() adalah untuk menentukan width(lebar) atau set width pada terminal
    cout << "--------------------------------------------------------\n";

    for (int i = 0; i < transaksi_array.size(); i++)
    {
        int total = 0;                                                                                                                                                                                                   // Buat variabel total untuk tiap-tiap item transaksi [item_transaksi]
        total = transaksi_array[i].harga * transaksi_array[i].kuantiti;                                                                                                                                                  // total adalah perkalian variabel harga * kuantiti di dalam struct Transaksi
        std::cout << std::setw(10) << transaksi_array[i].nama << " | " << std::setw(10) << transaksi_array[i].kuantiti << " | " << std::setw(10) << transaksi_array[i].harga << " | " << std::setw(15) << total << "\n"; // karena vector [transaksi_array] adalah array kita akses array dengan cara transaksi_array[i] kemudian tambahkan nama variabel dalam struct, misal transaksi_array[i].nama
        grand_total += total;                                                                                                                                                                                            // Tambahkan nilai total ke dalam nilai grand_total
    }
    std::cout << "--------------------------------------------------------\n";
    std::cout << "Grand Total: " << grand_total << "\n";
    std::cout << "========================================================\n\n"; // \n adalah newline atau membuat baris baru di dalam output

    return 0;
}
