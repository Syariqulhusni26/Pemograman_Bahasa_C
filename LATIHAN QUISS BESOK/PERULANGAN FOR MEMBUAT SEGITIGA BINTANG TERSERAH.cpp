#include <stdio.h>
main()

{
	int x, y;
	
	printf("Masukkan angka : ");
	scanf("%d\n", &x);
	printf("Masukkan angka : ");
	scanf("%d\n", &y);
	
	for( ; x< 10; x++)
	{
		for( ; y<= 10 ; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
