/*
 Nama File : Tugas 1c
 progarmmer : Naisya Raudhati Chandra 
 Nim : 24343103
 Tanggal : 4 Oktober 2024
 Deskripsi : Kalkulator Nilai Akhir Mahasiswa

*/
 #include <stdio.h>

 int main(){
    // Deklarasi Variabel
    float nilaiTugas, nilaiUTS, nilaiUAS , nilaiAkhir;
    int lulus;

    //input nilai dari pengguna
    printf("masukan nilai tugas(0-100):");
    scanf("%f",&nilaiTugas);
    printf("masukan nilai UTS (0-100):");
    scanf("%f",&nilaiUTS);
    printf("masukan nilai UAS(0-100):");
    scanf("%f",&nilaiUAS);

    //Hitung nilai akhir
    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) +(0.4 * nilaiUAS);

    //Tentukan apakah lulus atau tidak 
    lulus = (nilaiAkhir >= 60) && (nilaiUAS>= 50);
    
    // Output hasil
    printf("\nNilai Akhir Anda: %2f\n", nilaiAkhir);

    if (lulus) {
        printf("Selamat ! Anda LULUS");
    }else {
        printf("Maaf , Anda TIDAK LULUS.\n");
    }

    return 0;
    }