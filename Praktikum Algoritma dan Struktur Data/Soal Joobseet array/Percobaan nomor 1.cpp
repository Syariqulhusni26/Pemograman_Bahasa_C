#include <stdio.h>
main()
{
	int array[] = {1,2,3,4,5};
	int a = 0, b;
	
	printf("Nilai array sebelum disisipi adalah : \n");
	
	for(a=0; a<5; a++)
	{
		printf("%d ", array[a] );
	}
	
	for (b=3; b>=2; b--)
	{
		array[b+1] = array[b];
	}
	
	array[2] = 3;
	
	printf("\n");
	
	printf("Nilai array sesudah disisipi adalah : \n");
	
	for (a=0; a<6; a++)
	{
		printf("%d ", array[a]);
	}
}
