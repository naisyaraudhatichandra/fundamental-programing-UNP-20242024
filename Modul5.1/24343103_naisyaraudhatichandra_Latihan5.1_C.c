#include<stdio.h>

int hitungFaktorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else{
        return n * hitungFaktorial(n - 1);
    }
}

int main()
{
     printf("\tProject Latihan 5c\n");
	printf("---------------------------------------\n");
	printf("Programer  : Naisya Raudhati Chandra\n");
	printf("NIM        : 24343103\n");
	printf("=--------------------------------------\n");
    int n;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    int faktorial = hitungFaktorial(n);
    printf("Faktorial dari %d adalah: %d\n", n, faktorial);

    return 0;
}