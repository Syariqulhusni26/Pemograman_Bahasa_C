#include <stdio.h>
main()

{
	int biasa[10] = {12.14,31,32,44,54,61,65,69,90,99};
	int x = 0, j;
	
	puts("Elemen array sebelum operasi delete");
	for(x=0; x<10; x++)
	{
		printf("biasa[%d] : %d \n", x, biasa[x]);
	}
	j=8;
	while(j<10)
	{
		biasa[j-1] = biasa[j];
		j = j+1;
	}
	printf("\n");
	
	puts("Elemen array sesudah penghapusan");
	for(x=0; x<9; x++)
	{
		printf("biasa [%d] : %d \n ", x, biasa[x] );
	}
}
