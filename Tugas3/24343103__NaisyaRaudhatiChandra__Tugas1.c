#include <stdio.h>

// Fungsi rekursif untuk menyelesaikan Menara Hanoi
void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", asal, tujuan);
        return;
    }
    hanoi(n - 1, asal, bantu, tujuan);
    printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, asal, tujuan);
    hanoi(n - 1, bantu, tujuan, asal);
}

int main() {
    printf("\tProject Tugas 1.c\n");
    printf("Programmer : Naisya Raudhati Chandra\n");
    printf("NIM : 24343123\n");
    printf("========================\n");

    int cakram;

    // Meminta input jumlah cakram dari pengguna
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &cakram);

    // Memastikan input cakram lebih dari 0
    if (cakram <= 0) {
        printf("Jumlah cakram harus lebih dari 0.\n");
        return 1;
    }

    // Panggil fungsi rekursif untuk Menara Hanoi
    printf("Langkah-langkah untuk memindahkan %d cakram:\n", cakram);
    hanoi(cakram, 'A', 'C', 'B'); // 'A' adalah tiang asal, 'C' adalah tiang tujuan, 'B' adalah tiang bantu

    return 0;
}
