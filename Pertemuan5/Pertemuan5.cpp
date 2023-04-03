#include <iostream>
using namespace std;

struct mahasiswa
{
    string NIM;
    string nama;
    string alamat;
    int umur;
};

int main() {
    mahasiswa mhs1, mhs2;

    mhs1.NIM = "20220140144";
    mhs1.nama = "Nadhif";
    mhs1.alamat = "Bekasi";
    mhs1.umur = 19;

    cout << "Masukan NIM : ";
    cin >> mhs2.NIM;
    cout << "Masukan Nama : ";
    cin >> mhs2.nama;
    cout << "Masukan alamat : ";
    cin >> mhs2.alamat;
    cout << "Masukan Umur : ";
    cin >> mhs2.umur;

    cout << "\nNIM = " << mhs1.NIM;
    cout << "\nNama = " << mhs1.nama;
    cout << "\nalamat = " << mhs1.alamat;
    cout << "\numur = " << mhs1.umur;

    cout << "\nNIM = " << mhs2.NIM;
    cout << "\nNama = " << mhs2.nama;
    cout << "\nalamat = " << mhs2.alamat;
    cout << "\numur = " << mhs2.umur;

}

