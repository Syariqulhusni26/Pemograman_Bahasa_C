#include <stdio.h>
main()

{
	int a, b, c=1;
	
	printf("Masukkan Bilangan : ");
	scanf("%d", &a);
	
	
	for (b = 1; b<=a; b++)
	{
		printf("%d", b);
		if (b!=0)
			printf("*");
		c = c*a;
	}
	 
	 printf("\nFaktorial dari nilai diatas adalah %d", c);
	
}

