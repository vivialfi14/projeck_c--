#include <iostream>
#include <vector>
using namespace std;

struct Item
{
    string nama_barang;
    int harga_barang, kuantiti;
};

int main()
{
    Item brg1;
    brg1.nama_barang = "Oreo";
    brg1.harga_barang = 9000;
    brg1.kuantiti = 3;

    Item brg2;
    brg2.nama_barang = "Nissin Wafer";
    brg2.harga_barang = 10000;
    brg2.kuantiti = 2;

    vector<Item> items = {brg1, brg2};

    int grand_total = 0;

    for (int i = 0; i < items.size(); ++i)
    {
        int total = items[i].harga_barang * items[i].kuantiti;
        cout << "Nama: " << items[i].nama_barang << endl;
        cout << "Harga: Rp." << items[i].harga_barang << endl;
        cout << "Qty: " << items[i].kuantiti << endl;
        cout << "Total: Rp." << total << endl
             << endl;

        grand_total += total;
    }

    cout << "Grand Total: Rp." << grand_total << endl;

    return 0;
}
