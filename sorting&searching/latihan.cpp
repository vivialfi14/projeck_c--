
#include <iostream>
#include <vector>

using namespace std;
void bubbleSort(int array[], int jumlahAngka)
{
    for (int i = 0; i < jumlahAngka - 1; i++)
    {
        bool tukar = false;

        for (int j = 0; j < jumlahAngka - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // Tukar posisi elemen
                int temporary = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporary;

                tukar = true;
            }
        }

        // Jika tidak ada pertukaran, array sudah urut
        if (!tukar)
            break;
    }
}
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
    int jumlah;
    cout << "Masukkan jumlah Angka: ";
    cin >> jumlah;

    vector<int> arr;

    for (int i = 0; i < jumlah; i++)
    {
        int angka;
        cin >> angka;
        arr.push_back(angka);
    }
    int n = sizeof(angka) / sizeof(angka[0]);

    cout << "Sebelum diurutkan: ";
    cetakAngka(angka, n);
    // Buat fungsi cetak angka sebelum diurut
    bubbleSort(angka, n);
    // Buat fungsi cetak angka setelah diurut
    cout << "Setelah diurutkan: ";
    cetakAngka(angka, n);

    cout << "Data Angka : ";
    cetakAngka(angka, n);
    // Buat fungsi cetak array

    int target;
    cout << "Masukkan angka yang ingin anda cari : ";
    cin >> target;
    // Buat input dari user dengan variabel target

    int result = binarySearch(angka, n, target);

    // Buat output jika ditemukan dan tidak ditemukan
    if (result != -1)
        cout << "Angka " << target << " ditemukan pada indeks ke " << result << endl;
    else
        cout << "Angka " << target << " tidak ditemukan dalam Data Angka." << endl;

    return 0;
}

// Sebelum diurutkan: 1 4 5 7 2 3 6 
// Setelah diurutkan: 1 2 3 4 5 6 7 