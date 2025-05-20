// // Online C++ compiler to run C++ program online
// #include <iostream>
// class Mahasiswa
// {
// private:
//     std::string nama; // jika hanya menggunakan private akan terjadi error

// public:
//     void tampilkanData()
//     {
//         nama = "john";
//         std::cout << nama << std::endl;
//     }
// };

// int main()
// {
//     Mahasiswa mhs;
//     // mhs.nama = "John";
//     mhs.tampilkanData();
//     return 0;
// }

// // john

// // Online C++ compiler to run C++ program online
// #include <iostream>
// class Mahasiswa
// {
// private:
//     // std::string nama; // jika hanya menggunakan private akan terjadi error

// public:
//     std::string nama;
//     void tampilkanData()
//     {
//         // nama = "john";
//         std::cout << nama << std::endl;
//     }
// };

// int main()
// {
//     Mahasiswa mhs;
//     mhs.nama = "John";
//     mhs.tampilkanData();
//     return 0;
// }

// // john

// #include <iostream>
// class Mahasiswa
// {
// private:
//     // std::string nama; // jika hanya menggunakan private akan terjadi error

// public:
//     // std::string nama;
//     void tampilkanData(std::string nama)
//     {
//         // nama = "john";
//         std::cout << nama << std::endl;
//     }
// };

// int main()
// {
//     Mahasiswa mhs;
//     mhs.tampilkanData("jhon");
//     return 0;
// }

// // john

// #include <iostream>
//     class Mahasiswa {
//     public:
//         // Constructor dengan parameter
//         Mahasiswa(std::string n)
//         {
//             nama = n;
//         }

//     protected: // Atribut bisa diakses oleh subclass
//         std::string nama;
//     };

//     class MahasiswaTeknik : public Mahasiswa {
//     private:
//         std::string jurusan;

//     public:
//         // Constructor dengan parameter (harus memanggil constructor dari base class)
//         MahasiswaTeknik(std::string n, std::string j) : Mahasiswa(n)
//         {
//             jurusan = j;
//         }

//         void tampilkanInfo()
//         {
//             std::cout << "Nama: " << nama << ", Jurusan: " << jurusan << std::endl;
//         }
//     };

//     int main() {
//         // Membuat class dengan langsung mengisi data melalui constructor
//         MahasiswaTeknik mhs1("Aqila", "Teknik Informatika");
//         // Menampilkan informasi
//         mhs1.tampilkanInfo();

//         return 0;
//     }

// // HASILNYA " Nama: Aqila, Jurusan: Teknik Informatika "
