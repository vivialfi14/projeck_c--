#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> angka;

    int n;
    float jumlah = 0, r;
    cout << "Masukkan Jumlah Angka: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        angka.push_back(input);

        jumlah += input;
    }

    r = jumlah / n;
    cout << "\njumlah: " << jumlah << endl;
    cout << "Rata-rata: " << r << endl;
    cout << "index awal: " << angka[0] << endl;
    cout << "index tengah: " << angka[n / 2] << endl;
    cout << "index akhir: " << angka[n - 1] << endl;
    return 0;
}
