#include <stdio.h>
main()

{

	int i, j, k = 0;
	printf("Masukkan Bilangan : ");
	scanf("%d", &i );
	
	
	for (j=i ; j>0; j-- )
	{
		printf("%d ",j);
		
		if (j!=1)
		printf("+");
		k = k+j;
  	}
	printf("\ntriangularnya adalah %d", k);
	
}
