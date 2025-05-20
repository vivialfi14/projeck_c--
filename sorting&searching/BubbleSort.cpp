
#include <iostream>
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
    bubbleSort(angka, n);
    // Buat fungsi cetak angka setelah diurut
    cout << "Setelah diurutkan: ";
    cetakAngka(angka, n);

    return 0;
}

// Sebelum diurutkan: 1 4 5 7 2 3 6 
// Setelah diurutkan: 1 2 3 4 5 6 7 