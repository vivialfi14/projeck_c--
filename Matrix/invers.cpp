#include <iostream>
using namespace std;

int main()
{
    // Determinant
    int A[2][2] = {{4, 7}, {2, 6}};
    float det_A = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    // cout << "hasilnya: " << det_A;// hasil determinant

    // invers
    double inv_A[2][2];
    inv_A[0][0] = A[1][1] / det_A;
    inv_A[0][1] = -A[0][1] / det_A;
    inv_A[1][0] = -A[1][0] / det_A;
    inv_A[1][1] = A[0][0] / det_A;

    cout << inv_A[0][0] << "  " << inv_A[0][1] << endl;
    cout << inv_A[1][0] << "  " << inv_A[1][1]; // hasil invers

    return 0;
}

// 0.6  -0.7
// -0.2  0.4
