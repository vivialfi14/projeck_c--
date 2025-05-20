#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3;
    float A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];
    int choice;

    cout << "Menu Operasi Matriks 3x3:\n";
    cout << "1. Penjumlahan Matriks\n";
    cout << "2. Perkalian Matriks\n";
    cout << "3. Determinan Matriks\n";
    cout << "4. Invers Matriks\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> choice;

    if (choice == 1)
    {
        // Penjumlahan
        cout << "Masukkan elemen Matriks A:\n";
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                cin >> A[i][j];

        cout << "Masukkan elemen Matriks B:\n";
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                cin >> B[i][j];

        // Hitung Penjumlahan
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                result[i][j] = A[i][j] + B[i][j];

        cout << "Hasil Penjumlahan Matriks:\n";
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
                cout << result[i][j] << "\t";
            cout << endl;
        }
    }
    else if (choice == 2)
    {
        // Perkalian
        cout << "Masukkan elemen Matriks A:\n";
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                cin >> A[i][j];

        cout << "Masukkan elemen Matriks B:\n";
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                cin >> B[i][j];

        // Hitung Perkalian
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
            {
                result[i][j] = 0;
                for (int k = 0; k < SIZE; ++k)
                    result[i][j] += A[i][k] * B[k][j];
            }
        }

        cout << "Hasil Perkalian Matriks:\n";
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < SIZE; ++j)
                cout << result[i][j] << "\t";
            cout << endl;
        }
    }
    else if (choice == 3)
    {
        // Determinan
        cout << "Masukkan elemen Matriks A:\n";
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                cin >> A[i][j];

        float det;
        det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

        cout << "Determinan Matriks A = " << det << endl;
    }
    else if (choice == 4)
    {
        // Invers
        cout << "Masukkan elemen Matriks A:\n";
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                cin >> A[i][j];

        float det;
        det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1]) - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0]) + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);

        if (det == 0)
        {
            cout << "Matriks tidak memiliki invers (determinan = 0).\n";
        }
        else
        {
            // Hitung invers (adjoint dibagi determinan)
            result[0][0] = (A[1][1] * A[2][2] - A[1][2] * A[2][1]) / det;
            result[0][1] = -(A[0][1] * A[2][2] - A[0][2] * A[2][1]) / det;
            result[0][2] = (A[0][1] * A[1][2] - A[0][2] * A[1][1]) / det;

            result[1][0] = -(A[1][0] * A[2][2] - A[1][2] * A[2][0]) / det;
            result[1][1] = (A[0][0] * A[2][2] - A[0][2] * A[2][0]) / det;
            result[1][2] = -(A[0][0] * A[1][2] - A[0][2] * A[1][0]) / det;

            result[2][0] = (A[1][0] * A[2][1] - A[1][1] * A[2][0]) / det;
            result[2][1] = -(A[0][0] * A[2][1] - A[0][1] * A[2][0]) / det;
            result[2][2] = (A[0][0] * A[1][1] - A[0][1] * A[1][0]) / det;

            cout << "Invers Matriks A:\n";
            for (int i = 0; i < SIZE; ++i)
            {
                for (int j = 0; j < SIZE; ++j)
                    cout << result[i][j] << "\t";
                cout << endl;
            }
        }
    }
    else
    {
        cout << "Pilihan tidak valid.\n";
    }

    return 0;
}
