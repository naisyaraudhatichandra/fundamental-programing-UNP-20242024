#include<stdio.h>

int hitungLuasPersegiPanjang(int panjang, int lebar)
{
    return panjang * lebar;
}

int main()
{printf("\tProject Latihan 5a\n");
	printf("---------------------------------------\n");
	printf("Programer  : Naisya Raudhati Chandra\n");
	printf("NIM        : 24343103\n");
	printf("=--------------------------------------\n");
    int panjang, lebar;

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    int luas = hitungLuasPersegiPanjang(panjang, lebar);
    printf("Luas persegi panjang adalah: %d\n", luas);

    return 0;
}