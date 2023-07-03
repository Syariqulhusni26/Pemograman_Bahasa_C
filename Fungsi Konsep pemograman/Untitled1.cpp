#include <stdio.h>
int max (int bil1, int bil2);
int pembagian (int bil1, int bil2);
int perkalian (int bil1,int bil2);

main()

{
	int a, b, result, result2, result3;
	
	printf("Masukkan angka : ");
	scanf("%d", &a);
	printf("Masukkan angka : ");
	scanf("%d", &b);
	
	result2 = max(a, b);
	result3 = perkalian(a, b);
	result = pembagian (a,b);
	printf("Hasil pembagiannya adalah : %d\n", result);
	printf("Hasil perkaliannya adalah : %d\n", result3);
	
	
}


int max (int bil1, int bil2)

{
	int hasil;
	if (bil1 > bil2)
	printf("Maximum : %d\n", bil1);	
	else
	printf("Minimum : %d\n", bil1);
	
}

int pembagian (int bil1, int bil2)

{
	int bisa;
	bisa = bil1 / bil2;
	return bisa;         
	
}

int perkalian (int bil1, int bil2 )

{
	int hasil;
	hasil = bil1 * bil2;
	return hasil;
	
}
