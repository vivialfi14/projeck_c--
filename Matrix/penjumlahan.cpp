#include <iostream>

using namespace std;
int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            // cout << "Hasil " << A[i][j] << " + " << B[i][j] << " = " << C[i][j] << endl;
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Hasil 1 + 5 = 6
// Hasil 2 + 6 = 8
// Hasil 3 + 7 = 10
// Hasil 4 + 8 = 12