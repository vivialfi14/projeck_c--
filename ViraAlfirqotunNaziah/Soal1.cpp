#include <iostream>
using namespace std;

int struk (float harga, int ukuran, int tambahan, int jenis);


int main() {
    int ukuran, tambahan, jenis;
    float harga;

    cout << "======Menu kopi======" << endl;
    cout << "1. Ekspresso" << endl;
    cout << "2. Capuccino" << endl;
    cout << "3. Latte" << endl;
    cout << "Masukkan Jenis Kopi (1-3): ";
    cin >> jenis;
    cout << "\n======Varian Ukuran======" << endl;
    cout << "1. Small" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Large" << endl;
    cout << "Masukkan Ukuran yang anda pilih (1-3): ";
    cin >> ukuran;
    cout << "\n======Varian Tambahan======" << endl;
    cout << "1. Extra Shot (5.000)" << endl;
    cout << "2. Caramel (4.000)" << endl;
    cout << "3. Whipped Cream (3.000)" << endl;
    cout << "4. Tidak" << endl;
    cout << "Masukkan Varian tambahan (1-4): ";
    cin >> tambahan;

    struk (harga,ukuran,tambahan,jenis);
    return 0;
}

int struk (float harga, int ukuran, int tambahan, int jenis) {
    cout << "\n=========Daftar Pesanan=========";
    if (jenis == 1) {
        cout << "\nJenis Kopi : Ekspresso" << endl;
                if (ukuran == 1){
                    cout << "Ukuran : Small" << endl;
                    if(tambahan == 1){
                        cout << "Tambahan : Extra Shot" << endl;
                        harga = 15000 + 5000;
                    }else if (tambahan == 2) {
                        cout << "Tambahan : Caramel" << endl;
                        harga = 15000 + 4000;
                    }else if (tambahan == 3) {
                        cout << "Tambahan : Whipped Cream" << endl;
                        harga = 15000 + 3000;
                    }else{
                        cout << "Tambahan : -" << endl;
                        harga = 15000;
                    }
                }else if (ukuran == 2) {
                    cout << "Ukuran : Medium" << endl;
                    if(tambahan == 1){
                        cout << "Tambahan : Extra Shot" << endl;
                        harga = 20000 + 5000;
                    }else if (tambahan == 2) {
                        cout << "Tambahan : Caramel" << endl;
                        harga = 20000 + 4000;
                    }else if (tambahan == 3) {
                        cout << "Tambahan : Whipped Cream" << endl;
                        harga = 20000 + 3000;
                    }else{
                        cout << "Tambahan : -" << endl;
                        harga = 20000;
                    }
                }else if (ukuran == 3) {
                    cout << "Ukuran : Large" << endl;
                    if(tambahan == 1){
                        cout << "Tambahan : Extra Shot" << endl;
                        harga = 25000 + 5000;
                    }else if (tambahan == 2) {
                        cout << "Tambahan : Caramel" << endl;
                        harga = 25000 + 4000;
                    }else if (tambahan == 3) {
                        cout << "Tambahan : Whipped Cream" << endl;
                        harga = 25000 + 3000;
                    }else{
                        cout << "Tambahan : -" << endl;
                        harga = 25000;
                    }
                }else{
                    cout << "Data tidak valid";
                }
        }else if (jenis == 2) {
            cout << "\nJenis Kopi : Capuccino" << endl;
            if (ukuran == 1){
                cout << "Ukuran : Small" << endl;
                if(tambahan == 1){
                    cout << "Tambahan : Extra Shot" << endl;
                    harga = 18000 + 5000;
                }else if (tambahan == 2) {
                    cout << "Tambahan : Caramel" << endl;
                    harga = 18000 + 4000;
                }else if (tambahan == 3) {
                    cout << "Tambahan : Whipped Cream" << endl;
                    harga = 18000 + 3000;
                }else{
                    cout << "Tambahan : -" << endl;
                    harga = 18000;
                }
            }else if (ukuran == 2) {
                cout << "Ukuran : Medium" << endl;
                if(tambahan == 1){
                    cout << "Tambahan : Extra Shot" << endl;
                    harga = 25000 + 5000;
                }else if (tambahan == 2) {
                    cout << "Tambahan : Caramel" << endl;
                    harga = 25000 + 4000;
                }else if (tambahan == 3) {
                    cout << "Tambahan : Whipped Cream" << endl;
                    harga = 25000 + 3000;
                }else{
                    cout << "Tambahan : -" << endl;
                    harga = 25000;
                }
            }else if (ukuran == 3) {
                cout << "Ukuran : Large" << endl;
                if(tambahan == 1){
                    cout << "Tambahan : Extra Shot" << endl;
                    harga = 30000 + 5000;
                }else if (tambahan == 2) {
                    cout << "Tambahan : Caramel" << endl;
                    harga = 30000 + 4000;
                }else if (tambahan == 3) {
                    cout << "Tambahan : Whipped Cream" << endl;
                    harga = 30000 + 3000;
                }else{
                    cout << "Tambahan : -" << endl;
                    harga = 30000;
                }
            }else{
                cout << "Data tidak valid";
            }
    
        }else if (jenis == 3) {
            cout << "\nJenis Kopi : Latte" << endl;
            if (ukuran == 1){
                cout << "Ukuran : Small" << endl;
                if(tambahan == 1){
                    cout << "Tambahan : Extra Shot" << endl;
                    harga = 20000 + 5000;
                }else if (tambahan == 2) {
                    cout << "Tambahan : Caramel" << endl;
                    harga = 20000 + 4000;
                }else if (tambahan == 3) {
                    cout << "Tambahan : Whipped Cream" << endl;
                    harga = 20000 + 3000;
                }else{
                    cout << "Tambahan : -" << endl;
                    harga = 20000;
                }
            }else if (ukuran == 2) {
                cout << "Ukuran : Medium" << endl;
                if(tambahan == 1){
                    cout << "Tambahan : Extra Shot" << endl;
                    harga = 27000 + 5000;
                }else if (tambahan == 2) {
                    cout << "Tambahan : Caramel" << endl;
                    harga = 27000 + 4000;
                }else if (tambahan == 3) {
                    cout << "Tambahan : Whipped Cream" << endl;
                    harga = 27000 + 3000;
                }else{
                    cout << "Tambahan : -" << endl;
                    harga = 27000;
                }
            }else if (ukuran == 3) {
                cout << "Ukuran : Large";
                if(tambahan == 1){
                    cout << "Tambahan : Extra Shot" << endl;
                    harga = 32000 + 5000;
                }else if (tambahan == 2) {
                    cout << "Tambahan : Caramel" << endl;
                    harga = 32000 + 4000;
                }else if (tambahan == 3) {
                    cout << "Tambahan : Whipped Cream" << endl;
                    harga = 32000 + 3000;
                }else{
                    cout << "Tambahan : -" << endl;
                    harga = 32000;
                }
            }else{
                cout << "Data tidak valid";
            }
        }else{
            cout << "Data tidak valid";
        }
        cout << "\nTotal Harga = Rp." << harga;
        return jenis;
}
