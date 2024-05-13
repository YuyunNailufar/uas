#include "header.h"
#include <stdio.h>
#include <string.h>

void tambah_promosi(const char* nama_barang, float diskon) {
    // menambah promosi
    printf("Promosi dengan diskon %.2f%% ditambahkan untuk barang %s\n", diskon, nama_barang);
}

void hapus_promosi(const char* nama_barang) {
    // menghapus promosi
    printf("Promosi dihapus untuk barang %s\n", nama_barang);
}
