#include <stdio.h>

int main()

{
	int sum = 65, hasil;
	
	printf("Masukkan bilangan angka yang ingin ditebak : ");
	scanf("%d", &hasil);
	
	if(hasil<sum)
	
	printf("Maaf nilai yang anda tebak salah, anda harus mencoba lagi ", hasil);
	else
	printf("tebakan anda benar", hasil);
	
}