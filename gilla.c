#include "header.h"
#include <stdio.h>
#include <string.h>

void tampilkan_menu() {
    printf("\nMenu:\n");
    printf("1. Daftar Barang\n");
    printf("2. Kurangi Barang\n");
    printf("3. Tambah Barang\n");
    printf("4. Tambah Stok\n");
    printf("5. Ubah Harga\n");
    printf("6. Laporan Stok\n");
    printf("0. Keluar\n");
}

int main() {
    int pilihan = -1;
    while (pilihan != 0) {
        tampilkan_menu();
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        // Membersihkan buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        switch (pilihan) {
            case 1:
                baca_data_barang2();
                tampilkan_daftar_barang();
                break;
            case 2: {
                   // Kurangi Barang
                baca_data_barang();
                char nama_barang[50];
                printf("Masukkan nama barang yang akan dikurangi: ");
                fgets(nama_barang, sizeof(nama_barang), stdin);
                nama_barang[strcspn(nama_barang, "\n")] = '\0'; // Menghapus karakter newline dari input
                hapus_barang(nama_barang);
                tulis_data_barang(); // Menulis kembali data barang setelah menghapus barang
                break;
            }
            case 3:
                tambah_barang();
                break;
            case 4: {
                // Tambah Stok
                baca_data_barang();
                char nama_barang[50];
                int jumlah;
                printf("Masukkan nama barang yang akan ditambah stoknya: ");
                fgets(nama_barang, sizeof(nama_barang), stdin);
                nama_barang[strcspn(nama_barang, "\n")] = '\0'; // Menghapus karakter newline dari input
                printf("Masukkan jumlah stok yang akan ditambahkan: ");
                scanf("%d", &jumlah);
                tambah_stok(nama_barang, jumlah);
                tulis_data_barang(); // Menulis kembali data barang setelah menambah stok
                break;
            }
            case 5: {
                // Ubah Harga
                baca_data_barang();
                char nama_barang[50];
                double harga_baru;
                printf("Masukkan nama barang yang akan diubah harganya: ");
                fgets(nama_barang, sizeof(nama_barang), stdin);
                nama_barang[strcspn(nama_barang, "\n")] = '\0'; // Menghapus karakter newline dari input
                printf("Masukkan harga baru: ");
                scanf("%lf", &harga_baru);
                ubah_harga(nama_barang, harga_baru);
                tulis_data_barang(); // Menulis kembali data barang setelah mengubah harga
                break;
            }
            case 6:
                baca_data_barang();
                laporan_stok();
                break;
            case 0:
                printf("Keluar\n");
                break;
            default:
                printf("Pilihan tidak valid\n");
        }
    }

    return 0;
}