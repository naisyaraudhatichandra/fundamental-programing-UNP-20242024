#include<stdio.h>

float hitungKelilingLingkaran(float jarijari)
{
    return 2 * 3.14 * jarijari;
}

int main()
{printf("\tProject Latihan 5b\n");
	printf("---------------------------------------\n");
	printf("Programer  : Naisya Raudhati Chandra\n");
	printf("NIM        : 24343103\n");
	printf("=--------------------------------------\n");
    float jarijari;

    printf("Masukkan jari jari lingkaran: ");
    scanf("%f", &jarijari);

    float keliling = hitungKelilingLingkaran(jarijari);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);

    return 0;
}