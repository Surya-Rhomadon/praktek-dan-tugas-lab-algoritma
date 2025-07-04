#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> antrian;
    int pilihan;
    string nama;

    do {
        cout << "\n=== Sistem Antrian Loket Tiket ===" << endl;
        cout << "1. Tambah Antrian" << endl;
        cout << "2. Layani Antrian" << endl;
        cout << "3. Lihat Antrian Terdepan" << endl;
        cout << "4. Tampilkan Semua Antrian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan Anda: ";
        cin >> pilihan;
        cin.ignore(); // menghindari masalah input getline setelah cin

        switch(pilihan) {
            case 1:
                cout << "Masukkan nama: ";
                getline(cin, nama);
                antrian.push(nama);
                cout << nama << " telah ditambahkan ke antrian." << endl;
                break;
            case 2:
                if (!antrian.empty()) {
                    cout << antrian.front() << " sedang dilayani." << endl;
                    antrian.pop();
                } else {
                    cout << "Antrian kosong." << endl;
                }
                break;
            case 3:
                if (!antrian.empty()) {
                    cout << "Antrian terdepan: " << antrian.front() << endl;
                } else {
                    cout << "Antrian kosong." << endl;
                }
                break;
            case 4:
                if (!antrian.empty()) {
                    cout << "Daftar Antrian: " << endl;
                    queue<string> temp = antrian;
                    int nomor = 1;
                    while (!temp.empty()) {
                        cout << nomor++ << ". " << temp.front() << endl;
                        temp.pop();
                    }
                } else {
                    cout << "Tidak ada antrian." << endl;
                }
                break;
            case 5:
                cout << "thankyou brader" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);

    return 0;
}
