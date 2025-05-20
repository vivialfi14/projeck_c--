
#include <iostream>
using namespace std;
void selectionSort(int array[], int jumlahAngka)
{
    for (int i = 0; i < jumlahAngka - 1; i++)
    {
        // Anggap elemen minimum adalah indeks ke-i
        int minimal = i;

        // Cari elemen terkecil di sisa array
        for (int j = i + 1; j < jumlahAngka; j++)
            if (array[j] < array[minimal])
                minimal = j;

        // Tukar elemen minimum dengan elemen ke-i jika perlu
        if (minimal != i)
        {
            int temporary = array[i];
            array[i] = array[minimal];
            array[minimal] = temporary;
        }
    }
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
    int angka[] = {1, 4, 5, 7, 2, 3, 6};
    int n = sizeof(angka) / sizeof(angka[0]);

    cout << "Sebelum diurutkan: ";
    cetakAngka(angka, n);
    // Buat fungsi cetak angka sebelum diurut
    selectionSort(angka, n);
    // Buat fungsi cetak angka setelah diurut
    cout << "Setelah diurutkan: ";
    cetakAngka(angka, n);

    return 0;
}

// Sebelum diurutkan: 1 4 5 7 2 3 6 
// Setelah diurutkan: 1 2 3 4 5 6 7 