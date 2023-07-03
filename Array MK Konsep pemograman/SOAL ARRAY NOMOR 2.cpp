#include <stdio.h>
main()

{
	int array[5] = {10,20,30,40,50};
	int a = 0,max,index;
	
	printf("Elemen Array adalah : \n");
	
	for(a=0; a<5; a++)
	{
		printf("%d ", array[a]);
	}
	for(a=0; a<5; a++)
	{
		max = array[1];
		if(array[a]>max)
	{
		max = array[a];
		index = a;
	}
	} 
		printf("\nElement terbesar pada array adalah %d, terletak pada indeks %d",max ,index);
}

