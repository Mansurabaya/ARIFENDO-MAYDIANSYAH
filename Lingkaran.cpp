#include<stdio.h>
#include<conio.h>
#define phi 3.14

int main()
{
	float luas,jari2;
	
	printf("masukkan jari-jari lingkaran:");scanf("%f",&jari2);
	
	luas=phi * (jari2*jari2);
	printf("Luas lingkaran : %f",luas);
	
	return 0;
}
