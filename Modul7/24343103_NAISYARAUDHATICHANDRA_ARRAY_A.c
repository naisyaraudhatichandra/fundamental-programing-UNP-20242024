/*  
     Nama File       : A.c
     Programmer      : Naisya Raudhati Chandra (24343103)
     Tgl. pembuatan  : 11 Oktober 2024
     Deskripsi       : Menghitung Panjang String dan Menampilkan Elemen Array
*/
#include <stdio.h>
#include <string.h>

// Deklarasi fungsi hitungPanjangString
int hitungPanjangString(char str[]);

void biodata(){
    printf("Menghitung Panjang String dan Menampilkan Elemen Array\n");
    printf("=================================================================\n");
    printf("Nama : Naisya Raudhati Chandra\n");
    printf("Nim  : 24343103\n");
    printf("==============================\n");
}

int main() {
    biodata();
    
    // Bagian 1: Menghitung Panjang String
    char str[100];

    // Meminta input string dari pengguna
    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    // Menghilangkan newline di akhir string jika ada
    str[strcspn(str, "\n")] = '\0';

    // Memanggil fungsi hitungPanjangString dan menampilkan hasilnya
    int panjang = hitungPanjangString(str);
    printf("Panjang string yang dimasukkan: %d\n", panjang);

    // Bagian 2: Menampilkan Elemen Array
    int angka[5] = {1, 2, 3, 4, 5}; // Inisialisasi array dengan lima nilai

    // Menampilkan semua elemen array menggunakan loop
    printf("Elemen array angka:\n");
    for (int i = 0; i < 5; i++) {
        printf("angka[%d] = %d\n", i, angka[i]);
    }

    return 0;
}

// Definisi fungsi hitungPanjangString
int hitungPanjangString(char str[]) {
    return strlen(str); // Menggunakan strlen untuk menghitung panjang string
}
