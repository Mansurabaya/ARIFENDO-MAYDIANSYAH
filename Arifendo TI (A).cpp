#include<stdio.h>
#include<conio.h>

int main ()
{
	char nama[25];
	int umur;
    char alamat[50];
    
    printf("Masukkan nama anda :");gets(nama);
    printf("Masukkan alamat anda :");gets(alamat);
    printf("Masukkanumuranda :");scanf("%d",&umur);
    
    printf("\nNamaanda : %s",nama);
    printf("\n Alamat anda : %s",alamat);
    printf("\nUmuranda : %d",umur);
     
    return 0;
	
}
