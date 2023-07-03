#include <stdio.h>

main()
{
	int Delete[5]= {1,3,5,7,8};
	int a;
	
	for(a=0; a<5; a++)
	{
	printf("Delete[%d] = %d \n", a, Delete[a]);
	}
	
	// perintah untuk mengupdate nilai pada indeks
	
	Delete[2] = 10;
	
	puts(" ");
	
	for(a=0; a<5; a++)
	{
	printf("Delete[%d] = %d \n", a, Delete[a]);
	}
	
	
}
