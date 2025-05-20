
#include <iostream>
using namespace std;
int binarySearch(int array[], int jumlahAngka, int angkaDicari)
{
    int left = 0;
    int right = jumlahAngka - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2; // cari indeks tengah

        if (array[middle] == angkaDicari)
            return middle; // elemen ditemukan

        else if (array[middle] < angkaDicari)
            left = middle + 1; // cari di sebelah kanan

        else
            right = middle - 1; // cari di sebelah kiri
    }

    return -1; // elemen tidak ditemukan
}

void cetakAngka(int array[], int jumlahAngka)
{
    for (int i = 0; i < jumlahAngka; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int data[] = {5, 10, 15, 20, 25, 30, 35};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data Angka : ";
    cetakAngka(data, n);
    // Buat fungsi cetak array

    int target;
    cout << "Masukkan angka yang ingin anda cari : ";
    cin >> target;
    // Buat input dari user dengan variabel target

    int result = binarySearch(data, n, target);

    // Buat output jika ditemukan dan tidak ditemukan
    if (result != -1)
        cout << "Angka " << target << " ditemukan pada indeks ke " << result << endl;
    else
        cout << "Angka " << target << " tidak ditemukan dalam Data Angka." << endl;

    return 0;
}

// Data angka : 5 10 15 20 25 30 35 
// Masukkan angka yang ingin di cari : 5
// Angka 5 ditemukan pada indeks ke-0