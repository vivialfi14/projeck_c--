#include <iostream>

int main()
{
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (j % 2 == 0)
                std::cout << "" << "";
            else
                std::cout << matrix[i][j] << std::endl;
        }
    }
}