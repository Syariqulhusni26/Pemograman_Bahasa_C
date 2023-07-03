// fungsi yang tidak mempunyai argumen dan return value
#include <stdio.h>
int luas_persegipanjang();
main()

{
	int hasil;
	hasil = luas_persegipanjang();
	printf("Hasilnya adalah : %d", hasil);
	

}

 int luas_persegipanjang()
{
	int a, b, result;
	
	printf("Masukkan Bilangan ke 1 : ");
	scanf("%d", &a);
	printf("Masukkan Bilangan ke 2 : ");
	scanf("%d", &b);
	
	result = a * b ;
	return result;
	
	
}
