int main() {
    inisialisasiJadwal();
    int pilihan;

    do {
        cout << "\n=====================================";
        cout << "\n    SISTEM PEMESANAN TIKET KONSER    ";
        cout << "\n=====================================\n";
        cout << "1. Lihat Jadwal Konser\n";
        cout << "2. Masuk Antrean Pembelian\n";
        cout << "3. Proses Pembelian Tiket (Dari Antrean)\n";
        cout << "4. Lihat Riwayat Transaksi Terakhir\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;
