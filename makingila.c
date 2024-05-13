#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BARANG 100

struct Barang {
  char nama[50];
  int stok;
  double harga;
};

struct Barang daftar_barang[MAX_BARANG];
int jumlah_barang = 0;

struct Pengguna {
  char username[20];
  char password[20];
};

struct Pengguna pengguna;

// Fungsi untuk login
void login() {
  char usernameInput[20], passwordInput[20];

  printf("\n--- Login ---\n");
  printf("Username: ");
  scanf("%s", usernameInput);
  printf("Password: ");
  scanf("%s", passwordInput);

  if (strcmp(usernameInput, pengguna.username) == 0 && strcmp(passwordInput, pengguna.password) == 0) {
    printf("\nLogin berhasil!\n");
  } else {
    printf("\nUsername atau password salah.\n");
    login(); // Coba lagi jika login gagal
  }
}

// Fungsi untuk menambahkan barang
void tambahBarang() {
  if (jumlah_barang >= MAX_BARANG) {
    printf("Stok barang penuh.\n");
    return;
  }

  printf("\n--- Tambah Barang ---\n");
  printf("Nama Barang: ");
  scanf("%s", daftar_barang[jumlah_barang].nama);
  printf("Stok: ");
  scanf("%d", &daftar_barang[jumlah_barang].stok);
  printf("Harga: ");
  scanf("%lf", &daftar_barang[jumlah_barang].harga);
  jumlah_barang++;
  printf("Barang berhasil ditambahkan.\n");
}

// Fungsi untuk mengurangi barang
void kurangiBarang() {
  char namaBarangInput[50];
  int jumlahKurang;

  printf("\n--- Kurangi Barang ---\n");
  printf("Nama Barang: ");
  scanf("%s", namaBarangInput);
  printf("Jumlah yang ingin dikurangi: ");
  scanf("%d", &jumlahKurang);

  int i;
  for (i = 0; i < jumlah_barang; i++) {
    if (strcmp(namaBarangInput, daftar_barang[i].nama) == 0) {
      if (daftar_barang[i].stok < jumlahKurang) {
        printf("Stok barang tidak mencukupi.\n");
        return;
      }

      daftar_barang[i].stok -= jumlahKurang;
      printf("Stok barang %s dikurangi %d.\n", daftar_barang[i].nama, jumlahKurang);
      return;
    }
  }

  printf("Barang tidak ditemukan.\n");
}

// Fungsi untuk melihat daftar barang
void lihatDaftarBarang() {
  if (jumlah_barang == 0) {
    printf("\nBelum ada barang di toko.\n");
    return;
  }

  printf("\n--- Daftar Barang ---\n");
  for (int i = 0; i < jumlah_barang; i++) {
    printf("No: %d\n", i + 1);
    printf("Nama: %s\n", daftar_barang[i].nama);
    printf("Stok: %d\n", daftar_barang[i].stok);
    printf("Harga: %.2lf\n", daftar_barang[i].harga);
    printf("--------------------\n");
  }
}

// Fungsi untuk melakukan pembayaran
void pembayaran() {
  if (jumlah_barang == 0) {
    printf("\nBelum ada barang di keranjang.\n");
    return;
  }

  double totalPembayaran = 0;
  printf("\n--- Pembayaran ---\n");
  for (int i = 0; i < jumlah_barang; i++) {
    printf("No: %d\n", i + 1);
    printf("Nama: %s\n", daftar_barang[i].nama);
    printf("Stok: %d\n", daftar_barang[i].stok);
    printf("Harga: %.2lf\n", daftar_barang[i].harga);
    printf("Jumlah yang Dibeli: ");
    int jumlahBeli;
    scanf("%d", &jumlahBeli);

    if (jumlahBeli > daftar_barang);
    return;
  }