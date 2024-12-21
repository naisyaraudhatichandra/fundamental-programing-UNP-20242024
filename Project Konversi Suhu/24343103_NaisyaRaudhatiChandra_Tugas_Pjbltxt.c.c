/*
	Nama File		: projek.c
	Programmer		: Naisya Raudhati Chandra (24343103)
	Tgl. pembuatan	: 24 November 2024
	Deskripsi		: Program Konversi Suhu dengan Menu Perulangan
*/
#include <stdio.h>
#include <ctype.h> // Untuk fungsi isalpha
#include <string.h> // Untuk fungsi strlen
#include <time.h>   // Untuk fungsi clock

void celciusToFahrenheit() {
    float celcius, fahrenheit;
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9 / 5) + 32;
    printf("%.2fC = %.2fF\n", celcius, fahrenheit);
}

void fahrenheitToCelcius() {
    float fahrenheit, celcius;
    printf("Masukkan suhu dalam Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5 / 9;
    printf("%.2fF = %.2fC\n", fahrenheit, celcius);
}

void processFile() {
    FILE *inputFile;    // Pointer untuk file input
    FILE *outputFile;   // Pointer untuk file output
    char line[100];     // Buffer untuk membaca baris dari file 
    float suhu, hasil;  // Variabel untuk suhu dan hasil konversi
    char satuan;        // Variabel untuk satuan suhu (C/F)
    clock_t start, end; // Variabel untuk pengukuran waktu

    // Membuka file input
    inputFile = fopen("C:\\Users\\User\\OneDrive\\Documents\\fundamental programming\\punya_input_nny.txt", "r");
    if (inputFile == NULL) {
        printf("File input tidak ditemukan!\n");
        return;
    } else {
        printf("File input ditemukan, memproses data...\n");
    }

    // Membuka file output
    outputFile = fopen("C:\\Users\\User\\OneDrive\\Documents\\fundamental programming\\punya_output_nny.txt", "w");
    if (outputFile == NULL) {
        printf("File output tidak dapat dibuat!\n");
        fclose(inputFile);
        return;
    }

    // Mulai pengukuran waktu
    start = clock();

    // Membaca setiap baris dari file input dan memproses operasinya
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        // Hapus newline di akhir baris (jika ada)
        line[strcspn(line, "\n")] = 0;

        // Memproses baris dengan sscanf
        if (sscanf(line, "%f%c", &suhu, &satuan) == 2) {
            if (isalpha(satuan)) {
                if (satuan == 'C' || satuan == 'c') {
                    // Konversi dari Celsius ke Fahrenheit
                    hasil = (suhu * 9 / 5) + 32;
                    fprintf(outputFile, "%.2fC = %.2fF\n", suhu, hasil);
                } else if (satuan == 'F' || satuan == 'f') {
                    // Konversi dari Fahrenheit ke Celsius
                    hasil = (suhu - 32) * 5 / 9;
                    fprintf(outputFile, "%.2fF = %.2fC\n", suhu, hasil);
                } else {
                    // Jika satuan tidak valid
                    fprintf(outputFile, "Error: Format tidak valid '%c'\n", satuan);
                }
            } else {
                // Jika satuan bukan huruf
                fprintf(outputFile, "Error: Format tidak valid '%c'\n", satuan);
            }
        } else {
            // Jika format data tidak sesuai
            fprintf(outputFile, "Error: Format tidak valid pada baris '%s'\n", line);
        }
    }

    // Menghentikan pengukuran waktu
    end = clock();

    // Menutup file
    fclose(inputFile);
    fclose(outputFile);

    // Menampilkan waktu eksekusi
    double waktuEksekusi = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Hasil konversi telah disimpan ke file output.\n");
    printf("Waktu eksekusi program: %.4f detik.\n", waktuEksekusi);
}

char kembaliKeMenu() {
    char pilihan;
    printf("Apakah Anda ingin kembali ke menu utama? (Y/N): ");
    scanf(" %c", &pilihan);
    return tolower(pilihan);
}

int main() {
   printf("=============================================\n");
   printf("Nama Programmer: Naisya Raudhati Chandra\n");
   printf("NIM            : 24343103\n");
   printf("==============================================\n");
    int pilihan;
    char kembali;

    do {
        printf("\n=== Program Konversi Suhu ===\n");
        printf("1. Konversi Celcius ke Fahrenheit\n");
        printf("2. Konversi Fahrenheit ke Celcius\n");
        printf("3. Membaca dan memproses file input\n");
        printf("4. Keluar dari program\n");
        printf("Masukkan pilihan Anda (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                celciusToFahrenheit();
                break;
            case 2:
                fahrenheitToCelcius();
                break;
            case 3:
                processFile();
                break;
            case 4:
                printf("Keluar dari program. Terima kasih!\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

        kembali = kembaliKeMenu();
    } while (kembali == 'y');

    printf("Keluar dari program. Terima kasih!\n");
    return 0;
}