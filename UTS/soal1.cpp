#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    float A[n];
    int max = A[0];
    int max2 = A[0];

    cout << "Masukkan 5 nilai:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Nilai ke-" << (i + 1) << ": ";
        cin >> A[i];

        if (A[i] > max)
        {
            max2 = max;
            max = A[i];
        }
        else if (max2 < A[i] && max != A[i])
        {
            max2 = A[i];
        }
    }

    cout << "\n[";
    for (int i = 0; i < n; ++i)
    {
        cout << A[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    cout << "\nNilai Tertinggi pertama: " << max << endl;
    cout << "Nilai Tertinggi kedua: " << max2;
    return 0;
}
