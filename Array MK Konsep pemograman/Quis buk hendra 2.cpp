#include <stdio.h>
main()

{
	int array[6] = {10,20,30,40,50, 60};
	int a = 0;
	
	printf("Elemen Array sebelum proses penghapusan : \n");
	
	for(a=0; a<6; a++)
	{
		printf("%d ", array[a]);
	}
	
	for(int a=2; a<5; a++)
	{
	 array[a] = array[a+1];
	}	
	printf("\nElemen array setelah proses penghapusan\n");
	
	for (a = 0; a<5; a++)
	{
		printf("%d ", array[a]);
	}
}

