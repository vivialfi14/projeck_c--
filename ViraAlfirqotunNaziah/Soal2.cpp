#include <iostream>
using namespace std;

double getGrade(double absensi, double tugas, double uts, double uas);

int main() {
    double absensi, tugas, uts, uas;
    cout << "Masukkan nilai Absensi (0-100): ";
    cin >> absensi;
    cout << "Masukkan nilai Tugas (0-100): ";
    cin >> tugas;
    cout << "Masukkan nilai UTS (0-100): ";
    cin >> uts;
    cout << "Masukkan nilai UAS (0-100): ";
    cin >> uas;

    getGrade(absensi,tugas,uts,uas);
    return 0;
}

double getGrade(double absensi, double tugas, double uts, double uas){ // fungsi
    double a = absensi * 0.1;
    double b = tugas * 0.2;
    double c = uts * 0.3;
    double d = uas * 0.4;
    double jumlah = a + b + c + d; // Menghitung Nilai Akhir 
    double score = jumlah ; 
    string status, nilai;
    cout << "\nNilai Akhir : " << score << endl;
    if (score >= 80.0 && score <= 100.0){
        nilai = 'A';
        status = "LULUS";
    }else if(score >= 70.0){
        nilai = 'B';
        status = "LULUS";
    }else if(score >= 60.0){
        nilai = 'C';
        status = "LULUS";
    }else if(score >= 50.0){
        nilai = 'D';
        status = "LULUS";
    }else {
        nilai = 'E';
        status = "TIDAK LULUS";
    }
    cout << "Kategori Nilai : " << nilai << endl;
    cout << "Status : " << status;
    return score;
}
