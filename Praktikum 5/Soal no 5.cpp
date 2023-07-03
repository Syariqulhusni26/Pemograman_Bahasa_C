#include <stdio.h>

main()

{
	float x, y;
	
	printf("Masukkan angka : ");
	scanf("%f", &x);
	
	printf("Masukkan Bilangan : ");
	scanf("%f", &y);
	
	if (y==0)
	{
		printf("Division by Zero \n");
		
	}
	int hasil = x / y;
	printf("%d\n", hasil );
}