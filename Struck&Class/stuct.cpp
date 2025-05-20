// Online C++ compiler to run C++ program online
#include <iostream>
struct Mahasiswa {
    std::string nama;
    int usia;
   
    void tampilkanData() {
      std::cout << "Nama: " << nama << std::endl
                << "Usia: " << usia
                << " tahun" << std::endl;
    }
   };
   
   int main() {
    Mahasiswa mhs;
    mhs.nama = "John";
    mhs.usia = 20;
    mhs.tampilkanData();
    return 0;
   }
   
// Nama: John
// Usia: 20 tahun