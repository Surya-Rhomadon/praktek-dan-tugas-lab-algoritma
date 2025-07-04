#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    string jurusan;

public:
    // Setter
    void setNama(string n) {
        nama = n;
    }

    void setNIM(string n) {
        nim = n;
    }

    void setJurusan(string j) {
        jurusan = j;
    }

    // Getter
    string getNama() {
        return nama;
    }

    string getNIM() {
        return nim;
    }

    string getJurusan() {
        return jurusan;
    }

    // Menampilkan data
    void tampilkanData() {
        cout << "Nama    : " << getNama() << endl;
        cout << "NIM     : " << getNIM() << endl;
        cout << "Jurusan : " << getJurusan() << endl;
    }
};

int main() {
    Mahasiswa mhs;

    string nama, nim, jurusan;

    cout << "Masukkan Nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan Jurusan: ";
    getline(cin, jurusan);

    mhs.setNama(nama);
    mhs.setNIM(nim);
    mhs.setJurusan(jurusan);

    cout << "\nData Mahasiswa:\n";
    mhs.tampilkanData();

    return 0;
}