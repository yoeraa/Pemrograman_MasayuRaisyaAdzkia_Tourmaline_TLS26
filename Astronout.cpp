#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    
    cout << "Masukkan jumlah astronot (N): ";
    cin >> N;
    cout << "Masukkan nilai awal K: ";
    cin >> K;

    vector<int> astronot;
    for (int i = 1; i <= N; ++i) {
        astronot.push_back(i);
    }

    cout << "\nUrutan astronot yang dieliminasi: ";
    int curr_idx = 0;
    while (astronot.size() > 1) {
        int elim_idx = (curr_idx + K - 1) % astronot.size();
        int nomor_dieliminasi = astronot[elim_idx];

        cout << nomor_dieliminasi << " ";

        if (nomor_dieliminasi % 2 == 0) {
            K += 2; // Jika nomor genap, K bertambah 2
        } else {
            K -= 1; // Jika nomor ganjil, K berkurang 1
        }

        if (K < 2) {
            K = 2;
        }
        astronot.erase(astronot.begin() + elim_idx);

        if (!astronot.empty()) {
            curr_idx = elim_idx % astronot.size();
        }
    }

    cout << "\nAstronot terakhir yang bertahan: " << astronot[0] << endl;

    return 0;
}
