#ifndef HEADER_H
#define HEADER_H

#define MAX_BARANG 100

struct Barang {
    char kode[3];
    char nama[50];
    int stok;
    double harga;
};

extern
struct Promosi {
    char kode_voucher[10];
    double potongan_harga;
};

struct BarangPromosi {
    char nama_barang[50];
    double diskon;
};

extern struct Barang daftar_barang[MAX_BARANG];
extern int jumlah_barang;
extern struct Promosi daftar_promosi[10];
extern struct BarangPromosi daftar_barang_promosi[10];
extern int jumlah_promosi;
extern int jumlah_barang_promosi;

void baca_data_barang();
void baca_data_barang2();
void tulis_data_barang();
void kurangi_barang(const char *nama_barang, int jumlah);
void hapus_barang(const char *nama_barang);
void tampilkan_daftar_barang();
void tambah_barang();
void tambah_promosi();
void hapus_promosi();
void tambah_diskon_barang();
void hapus_diskon_barang();

#endif