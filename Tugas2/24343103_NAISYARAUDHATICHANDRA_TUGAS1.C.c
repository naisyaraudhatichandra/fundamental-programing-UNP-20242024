/*
    Nama    : Naisya Raudhati Chandra
    NIM     : 24343103
    Program : Game menebak angka dengan tingkat kesulitan
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void easy(int *highScore) {
    printf("MUDAH(0-50)\n");
    int angkaTebakan, tebakan, kesempatan;
    int score;

    angkaTebakan = rand() % 50 + 1;
    kesempatan = 5;

    while (kesempatan > 0) {
        printf("\nMasukkan tebakan anda: ");
        scanf("%d", &tebakan);

        if (tebakan > angkaTebakan) {
            printf("Tebakan anda terlalu tinggi!\n");
        } else if (tebakan < angkaTebakan) {
            printf("Tebakan anda terlalu rendah!\n");
        } else {
            score = kesempatan * 10;
            printf("Horeee! Anda menebak dengan benar!\n");
            if (score > *highScore) {
                *highScore = score;
                printf("SCORE TERTINGGI BARU: %d\n", *highScore);
            }
            break;
        }
        kesempatan--;
        printf("Kesempatan tersisa: %d\n", kesempatan);
    }

    if (kesempatan == 0) {
        printf("Maaf, anda kehabisan kesempatan. Angka yang benar adalah %d.\n", angkaTebakan);
    }
}

void medium(int *highScore) {
    printf("SEDANG (0-100)\n");
    int angkaTebakan, tebakan, kesempatan;
    int score;

    angkaTebakan = rand() % 100 + 1;
    kesempatan = 5;

    while (kesempatan > 0) {
        printf("\nMasukkan tebakan anda: ");
        scanf("%d", &tebakan);

        if (tebakan > angkaTebakan) {
            printf("Tebakan anda terlalu tinggi!\n");
        } else if (tebakan < angkaTebakan) {
            printf("Tebakan anda terlalu rendah!\n");
        } else {
            score = kesempatan * 10;
            printf("Selamat! Anda menebak dengan benar!\n");
            if (score > *highScore) {
                *highScore = score;
                printf("SCORE TERTINGGI BARU: %d\n", *highScore);
            }
            break;
        }
        kesempatan--;
        printf("Kesempatan tersisa: %d\n", kesempatan);
    }

    if (kesempatan == 0) {
        printf("Maaf, anda kehabisan kesempatan. Angka yang benar adalah %d.\n", angkaTebakan);
    }
}

void hard(int *highScore) {
    printf("SULIT (0-200)\n");
    int angkaTebakan, tebakan, kesempatan;
    int score;

    angkaTebakan = rand() % 200 + 1;
    kesempatan = 5;

    while (kesempatan > 0) {
        printf("\nMasukkan tebakan anda: ");
        scanf("%d", &tebakan);

        if (tebakan > angkaTebakan) {
            printf("Tebakan anda terlalu tinggi!\n");
        } else if (tebakan < angkaTebakan) {
            printf("Tebakan anda terlalu rendah!\n");
        } else {
            score = kesempatan * 10;
            printf("Selamat! Anda menebak dengan benar!\n");
            if (score > *highScore) {
                *highScore = score;
                printf("SCORE TERTINGGI BARU: %d\n", *highScore);
            }
            break;
        }
        kesempatan--;
        printf("Kesempatan tersisa: %d\n", kesempatan);
    }

    if (kesempatan == 0) {
        printf("Maaf, anda kehabisan kesempataAngka yang benan. r adalah %d.\n", angkaTebakan);
    }
}

int main() {
    int level;
    int highScore = 0;

    srand(time(0)); // Menempatkan srand di sini agar hanya dipanggil sekali

    while (1) {
        printf("============= Game tebak angka =============\n");
        printf("Nama    : Naisya Raudhati Chandra\n");
        printf("NIM     : 24343103\n");
        printf("============================================\n");
        printf("Score tertinggi: %d\n", highScore);
        printf("Pilih tingkat kesulitan\n");
        printf("1. MUDAH\n");
        printf("2. SEDANG\n");
        printf("3. SULIT\n");
        printf("4. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &level);

        switch (level) {
            case 1:
                MUDAH(&highScore);
                break;
            case 2:
                SEDANG(&highScore);
                break;
            case 3:
                SULIT(&highScore);
                break;
            case 4:
                printf("Keluar dari program.\n");
                exit(0);
            default:
                printf("Opsi tidak valid, coba lagi.\n");
        }
    }

    return 0;
}
