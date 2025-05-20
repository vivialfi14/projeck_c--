#include <iostream>

using namespace std;
int main()
{
    int n = 0;
    int m = 0;
    cout << "Masukkan jumlah baris: ";
    cin >> n;
    cout << "Masukkan jumlah kolom: ";
    cin >> m;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cout << j * i << "  ";
        }
        cout << endl;
    }
}