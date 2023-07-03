#include <stdio.h>

int main()

{
	int a, b, hasil, hasil2, hasil3;
	
	printf("Masukkan angka : ");
	scanf("%d", &a);
	printf("Masukkan angka : ");
	scanf("%d", &b);
	
	hasil = a / b;
	hasil2 = a + b;
	hasil3 = a - b;
		printf("Hasilnya adalah : %d\n ", hasil);
		printf("Hasilnya adalah : %d\n ", hasil2);
		printf("Hasilnya adalah : %d\n ", hasil3);
	
}