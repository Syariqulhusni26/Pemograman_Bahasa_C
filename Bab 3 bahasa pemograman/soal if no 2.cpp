#include <stdio.h>
int main()

{
	int total, tebak;
	
	printf("masukkan angka total : ");
	scanf("%d", &total);
	printf("masukkan angka tebak :");
	scanf("%d", &tebak );
	
	if(total == tebak)
	printf("total dengan tebak sama ", total);
	else
	printf("total dengan tebak tidak sama ", tebak);
	
}