#include <iostream>
#include <string>
#include <limits>
using namespace std;

/* ---------------------------------------------------------
   FLOWCHART 1 : PEMESANAN COFFEE
--------------------------------------------------------- */
void flowchartPemesanan() {
    string pesanan;
    int validasi;
    char tambah;

    cout << "\n=== FLOWCHART PEMESANAN KOPI ===\n";

    while (true) {
    	
        // S1 : Menampilkan instruksi kepada pelanggan untuk memasukkan pesanan kopi secara manual
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nMasukkan pesanan Anda: ";
        
         // P1 : Menerima input pesanan dari pelanggan
        getline(cin, pesanan);

 		// IF1 : Cek apakah pesanan valid atau tidak
        if (pesanan.empty()) {
        	
        	 // S3 : Jika pesanan tidak lengkap ? pelanggan diminta ulangi
            cout << "Pesanan kosong, masukkan ulang.\n";
            continue;
        }

 		// S1 (lanjutan) � Menampilkan menu validasi pesanan
        cout << "\nValidasi pesanan :\n";
        cout << "1. Pesanan lengkap\n";
        cout << "2. Pesanan tidak lengkap\n";
        cout << "3. Pesanan salah / perlu koreksi\n";
        cout << "Pilih: ";
        
         // P1 (lanjutan) : Input pilihan validasi
        if (!(cin >> validasi)) {
            cout << "Input tidak valid. Ulangi.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

		 // IF1 : Percabangan validasi pesanan
        if (validasi == 1) {
        	
        	// S2 : Pesanan dinyatakan lengkap
            cout << "Pesanan lengkap.\n";
            
             // P2 : Memproses pesanan
            cout << "P2: Memproses pesanan: " << pesanan << "\n";

 			// while : Menanyakan apakah pelanggan ingin menambah pesanan lagi
            cout << "\nTambah pesanan lagi? (y/n): ";
            cin >> tambah;
            if (tambah == 'y' || tambah == 'Y') {
                continue; // kembali ke S1
            } else {
                break; // lanjut ke S5
            }

        } else if (validasi == 2) {
        	
        	// S3 : Pesanan tidak lengkap ? ulangi
            cout << "Pesanan tidak lengkap, silakan ulangi.\n";
            continue;
        } else if (validasi == 3) {
        	
        	// S4 : Pesanan salah ? ulangi
            cout << "Pesanan salah, silakan koreksi.\n";
            continue;
        } else {
            cout << "Input tidak valid.\n";
            continue;
        }
    }

 	// S5 : Semua pesanan selesai dan diteruskan ke pembayaran
    cout << "\nSemua pesanan selesai. Pesanan siap dibayar!\n";
}

/* ---------------------------------------------------------
   FLOWCHART 2 : PENGELOLAAN KEDAI
--------------------------------------------------------- */
void flowchartPengelolaan() {
    int pilih;
    char ulang;

    cout << "\n=== FLOWCHART PENGELOLAAN KEDAI ===\n";

    do {
    	
    	 // S1 : Menampilkan daftar aktivitas pengelolaan kedai
        cout << "\nPilih aktivitas:\n";
        cout << "1. Bersihkan mesin kopi\n";
        cout << "2. Bersihkan area kedai\n";
        cout << "3. Tangani pelanggan melanggar aturan\n";
        
         // P1 : Input pilihan aktivitas
        cout << "Pilih: ";
        cin >> pilih;

 		// IF : Pilihan aktivitas kebersihan dan penanganan
        if (pilih == 1) {
        	
        	 // S2 : Membersihkan mesin kopi
            cout << "Membersihkan mesin kopi...\n";
        } else if (pilih == 2) {
        	
        	 // S3 : Membersihkan area kedai
            cout << "Membersihkan area kedai...\n";
        } else if (pilih == 3) {
        	
        	 // S4 : Menangani pelanggan yang melanggar aturan
            cout << "Menangani pelanggan yang melanggar aturan...\n";
        } else {
            cout << "Input salah.\n";
            continue;
        }

		// P2 : Eksekusi aktivitas selesai
        cout << "Aktivitas selesai diproses.\n";
        
        // Loop : Menanyakan apakah aktivitas ingin dilakukan kembali
        cout << "Perlu ulang? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

	// S5 : Pengelolaan kedai selesai
    cout << "\nKedai siap digunakan!\n";
}

/* ---------------------------------------------------------
   FLOWCHART 3 : PEMBAYARAN
--------------------------------------------------------- */
void flowchartPembayaran() {
    int metode;
    int sukses;
    char ulang;
    char kembaliSetelahBatal;

    cout << "\n=== FLOWCHART PEMBAYARAN ===\n";

    while (true) {
    	
        // S1 : Menampilkan total pembayaran dan daftar metode pembayaran
        cout << "\nMetode pembayaran:\n";
        cout << "1. Cash\n";
        cout << "2. QRIS\n";
        cout << "3. E-Wallet\n";
        cout << "4. Wallet Kedai\n";
        cout << "5. Pembatalan\n";
        
        // P1 : Input pilihan metode pembayaran
        cout << "Pilih metode: ";
        
         // IF1 : Percabangan berdasarkan metode pembayaran
        if (!(cin >> metode)) {
            cout << "Input tidak valid. Ulangi.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // IF1 : Pilih jalur sesuai metode
        if (metode == 1) {
        	
        	// S2 : Instruksi pembayaran cash
            cout << "Silakan bayar secara tunai.\n";
        } 
        else if (metode == 2) {
        	
        	// S3 : Menampilkan kode QR untuk pembayaran QRIS
            cout << "Menampilkan kode QR untuk pembayaran...\n";
        } 
        else if (metode == 3) {
        	
        	// S4 : Pelanggan memasukkan nomor e-wallet
            cout << "Masukkan nomor e-wallet Anda...\n";
        } 
        else if (metode == 4) {
        	
        	 // S5 : Saldo wallet kedai otomatis dipotong
            cout << "Saldo wallet kedai Anda telah dipotong otomatis.\n";
        } 
        else if (metode == 5) {
        	
            // S6 : Pembatalan transaksi oleh pelanggan
            cout << "Pesanan dibatalkan oleh pelanggan.\n";
            
            // Loop dari S6 kembali ke P1 atau ke S8
            cout << "Kembali ke pemilihan metode pembayaran? (y = pilih metode lagi / n = selesai): ";
            cin >> kembaliSetelahBatal;
            
            if (kembaliSetelahBatal == 'y' || kembaliSetelahBatal == 'Y') {
                continue; // kembali ke P1
            } else {
            	
               // S8 : Penyimpanan transaksi pembatalan
                cout << "Menyimpan transaksi sebagai 'DIBATALKAN'.\n";
                cout << "Proses pembayaran selesai (dibatalkan).\n";
                break; // selesai
            }
        } 
        else {
            cout << "Metode tidak valid.\n";
            continue;
        }

         // P2 : Sistem memproses pembayaran
        cout << "Memproses pembayaran sesuai metode yang dipilih...\n";

         // P3 : Sistem melakukan autovalidasi hasil transaksi
        cout << "Autovalidasi pembayaran - apakah pembayaran berhasil? (1=Ya, 2=Tidak): ";
        if (!(cin >> sukses)) {
            cout << "Input tidak valid. Kembali ke pemilihan metode.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // IF2 : Keputusan berdasarkan status pembayaran
        if (sukses == 1) {
        	
            // S7 : Sistem mengirim struk ke WhatsApp pelanggan
            cout << "Pembayaran berhasil. Struk akan dikirim via WhatsApp.\n";
            
            // S8 : Sistem menyimpan data transaksi
            cout << "Menyimpan transaksi (status: BERHASIL)...\n";
            cout << "Proses pembayaran selesai.\n";
            break; 
        } 
        else if (sukses == 2) {
            cout << "Pembayaran gagal.\n";
            cout << "Apakah ingin ulangi pemilihan metode pembayaran? (y/n): ";
            cin >> ulang;
            if (ulang == 'y' || ulang == 'Y') {
                continue; // kembali ke P1
            } else {
            	
                // S8 : Penyimpanan status gagal
                cout << "Menyimpan transaksi (status: GAGAL)...\n";
                cout << "Pembayaran tidak selesai.\n";
                break;
            }
        } 
        else {
            cout << "Input status tidak dikenal. Kembali ke pemilihan metode.\n";
            continue;
        }
    }
}

/* ---------------------------------------------------------
   MENU UTAMA
--------------------------------------------------------- */
int main() {
    int menu;

    do {
    	
    	// Menu utama � bukan bagian flowchart
        cout << "\n==============================\n";
        cout << "  SISTEM KEDAI KASA (C++)\n";
        cout << "==============================\n";
        cout << "1. Flowchart Pemesanan Kopi\n";
        cout << "2. Flowchart Pengelolaan Kedai\n";
        cout << "3. Flowchart Pembayaran\n";
        cout << "4. Jalankan seluruh alur berurutan (1->2->3)\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> menu;

        switch (menu) {
        case 1:
            flowchartPemesanan();
            break;
        case 2:
            flowchartPengelolaan();
            break;
        case 3:
            flowchartPembayaran();
            break;
        case 4:
            // Jalankan berantai: Pemesanan ? Pengelolaan ? Pembayaran
            flowchartPemesanan();
            flowchartPengelolaan();
            flowchartPembayaran();
            break;
        case 5:
            cout << "Keluar...\n";
            break;
        default:
            cout << "Menu tidak valid.\n";
        }

    } while (menu != 5);

    return 0;
}

