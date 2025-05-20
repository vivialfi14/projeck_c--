#include <iostream>
    struct Alamat {
        std::string jalan;
        std::string kota;
    };

    class Pegawai {
        private:
        std::string nama; 
        int usia;
        Alamat alamat;

        public:
            // Constructor dengan parameter
            Pegawai(std::string n, int u, std::string j, std::string k)
            {
                nama = n;
                usia = u;
                alamat.jalan = j;
                alamat.kota = k;
            }
        
        void tampilkanInfo() {
            std::cout << "Pegawai warung 24 jam Non stop"<< std::endl;
            std::cout << "Nama: " << nama << std::endl;
            std::cout << "Usia: " << usia << std::endl;
            std::cout << "Alamat: " << alamat.jalan << ", " << alamat.kota ;
        }
    };

    int main() {
        // Membuat class dengan langsung mengisi data melalui constructor
        Pegawai mhs1("Aqila", 14, "jl.beber", "cirebon");
        // Menampilkan informasi
        mhs1.tampilkanInfo();

        return 0;
    }

    // Pegawai warung 24 jam Non stop
    // Nama: Aqila
    // Usia: 14
    // Alamat: jl.beber, cirebon