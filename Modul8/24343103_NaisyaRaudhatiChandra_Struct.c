/* 	Nama File		: struct.c
	Programmer		: Naisya raudhati Chandra (24343103)
	Tgl. pembuatan	: 15 November 2024
	Deskripsi		: Membuat Struct
*/
#include <stdio.h>
#include <string.h>

//definisi tipe struct secara global
struct tanggal
{
    int hari, bulan, tahun;
};

struct mahasiswa
{
    char nama[30];
    int nim;
    struct tanggal tanggal_lahir;
};

// deklarasi variabel data_mahasiswa secara global
struct mahasiswa data_mahasiswa;

int main()
{
    printf("==============================\n");
    printf("\tMembuat struct\n");
	printf("==============================\n");
	printf("Nama : Naisya Raudhati Chandra \n");
	printf("Nim  : 24343103\n");
	printf("==============================\n");

    // mengisi data kedalam variabel struct data_mahasiswa
    strcpy(data_mahasiswa.nama, "Naisya Raudhati Chandra");
    data_mahasiswa.nim = 24343103;
    data_mahasiswa.tanggal_lahir.hari = 23;
    data_mahasiswa.tanggal_lahir.bulan = 02;
    data_mahasiswa.tanggal_lahir.tahun = 2006;

    // menampilkan data dalam struct data_mahasiswa
    printf("Nama Mahasiswa: %s\n", data_mahasiswa.nama);
    printf("Nomer Induk Mahasiswa: %d\n", data_mahasiswa.nim);
    printf("Tanggal Lahir: %d-%d-%d\n", data_mahasiswa.tanggal_lahir.hari,
           data_mahasiswa.tanggal_lahir.bulan,
           data_mahasiswa.tanggal_lahir.tahun);

    return 0;
}
