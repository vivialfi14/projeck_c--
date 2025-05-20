// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) // loop terluar
   {
       for (int j = 1; j <= 5; j++) // loop didalam
       {
           if ((i == 1 && j == 1) || (i == 5 && j == 1) || (i == 3 && j == 5)){
               std::cout << "*";
           }else {
           std::cout <<"|";
           }
       }
       std::cout << std::endl;
   }
return 0;
}

// HASILNYA

// *||||
// |||||
// ||||*
// |||||
// *||||