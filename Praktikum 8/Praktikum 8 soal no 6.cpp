#include <stdio.h>
main()

{
	int a, b;
	
	printf("Masukkan Bilangan : ");
	scanf("%d", &a);
	
	
	for (b = 1; b<=a; b++)
	{
		if ( b%2!=0)
			printf("%d ", b);
		else
			printf("-%d ", b);
	}
	
}

