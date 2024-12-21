#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    printf("\tProject Tugas Modul 4\n");
	printf("=========================================\n");
	printf("Programer  : Naisya Raudhati Chandra\n");
	printf("NIM        : 24343103\n");
	printf("=========================================\n");
    int bilangan, sisaBagi;

    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bilangan);

    sisaBagi = bilangan % 2;

    if(sisaBagi == 0){
        printf("Bilangan %d merupakan bilangan genap.", bilangan);
    } else{
        printf("Bilangan %d merupakan bilangan ganjil.", bilangan);
    }
}