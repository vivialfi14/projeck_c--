#include <iostream>

int main()
{
    int angka[5] = {10, 20, 30, 40, 50}; // Deklarasi dan inisialisasi

    for (int i = 0; i < 5; i++)
    {
        std::cout << "angka[" << i << "] = " << angka[i] << std::endl;
    }
}