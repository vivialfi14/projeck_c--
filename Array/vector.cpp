#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> angka = {10, 20, 30, 40, 50};
    angka.push_back(60); // Menambahkan elemen

    for (int i : angka)
    {
        cout << i << " ";
    }

    //---------------------------------------------------------------
    // vector<string> kata;

    // kata.push_back("satu"); // Menambahkan elemen
    // kata.push_back("dua");
    // kata.push_back("tiga");

    // cout << "jumlah element : " << kata.size() << endl;

    // for (int i = 0; i < kata.size(); i++)
    // {
    //     cout << kata[i] << endl;
    // }
    //-----------------------------------------------------------------

    return 0;
}
