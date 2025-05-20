#include <iostream>
using namespace std;

int Max(int suhu[], int n, int &indexMax);
int Min(int suhu[], int n, int &indexMin);
int Rata(int suhu[], int n);


int main() {
    int suhu[7];
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Ahad"};

    for (int i = 0; i < 7; i++) {
        cout << "Masukkan suhu hari " << hari[i] << " : ";
        cin >> suhu[i];
    }

    int indexMax, indexMin;
    int max = Max(suhu, 7, indexMax);
    int min = Min(suhu, 7, indexMin);
    int rata = Rata(suhu, 7);

    cout << "\nSuhu tertinggi : " << max << " °C " << endl;
    cout << "Suhu terendah : " << min << " °C " << endl;
    cout << "Suhu Rata-rata : " << rata << " °C " << endl;
    return 0;
}

int Max(int suhu[], int n, int &indexMax) { //Menghitung suhu tertinggi 
    int max = suhu[0];
    indexMax = 0;
    for (int i = 1; i < n; i++) {
        if (suhu[i] > max) {
            max = suhu[i];
            indexMax = i;
        }
    }
    return max;
}

int Min(int suhu[], int n, int &indexMin) { //Menghitung suhu terendah 
    int min = suhu[0];
    indexMin = 0;
    for (int i = 1; i < n; i++) {
        if (suhu[i] < min) {
            min = suhu[i];
            indexMin = i;
        }
    }
    return min;
}

int Rata(int suhu[], int n) { //Menghitung suhu rata-rata
    int rata = suhu[0]; 
    for (int i = 1; i < n; i++) {
    rata = suhu[i] / 7;
    double rataRata = rata;
    } 
    return rata;
}

