#include <stdio.h>
int penjumlahan (int x, int y);
main()
{
	int a, b, hasil;
	
	printf("Masukkan Angka 1 : ");
	scanf("%d", &a);
	printf("Masukkan Angka 2 : ");
	scanf("%d", &b);
	hasil = penjumlahan(a,b);
	
	printf("Hasil Penjumlahannya adalah : %d", hasil);
		
}

int penjumlahan (int x, int y)

{
	int hasil;
	hasil = x + y;
	return hasil;
}
