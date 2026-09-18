#include <iostream>
#include <string>

using namespace std;

int main() {
    string pesan;
    cout << "Masukkan pesan asli (HURUF KAPITAL): ";
    cin >> pesan;
    
    string hasil = "";
    if (!pesan.empty()) {
        hasil += pesan[0];
    }

    for (size_t i = 1; i < pesan.length(); i++) {
        int nilai_sekarang = pesan[i] - 'A' + 1;
        int nilai_sebelumnya = pesan[i - 1] - 'A' + 1;

        int nilai_baru = nilai_sekarang + nilai_sebelumnya;

        if (nilai_baru > 26) {
            nilai_baru -= 26;
        }

        hasil += (char)(nilai_baru + 'A' - 1);
    }

    cout << "Pesan sandi: " << hasil << endl;

    return 0;
}
