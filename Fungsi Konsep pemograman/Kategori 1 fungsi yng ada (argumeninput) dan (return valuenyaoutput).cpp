
#include <stdio.h>
void luas_persegipanjang();
main()

{
	luas_persegipanjang();
	

}

 void luas_persegipanjang()
{
	int a, b, result;
	
	printf("Masukkan Bilangan ke 1 : ");
	scanf("%d", &a);
	printf("Masukkan Bilangan ke 2 : ");
	scanf("%d", &b);
	
	result = a * b ;
	
	printf("Luas persegi panjang di atas adalah : %d", result);
	
	
}

