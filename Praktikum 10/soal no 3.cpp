#include <stdio.h>
main()

{
	int x, y;
	
	puts("Bilangan ganjil tanpa kelipatan 7 dan 11 ");
	printf("Masukkan bilangan : ");
	scanf("%d", &x);
	
	for(y=1;y<x;y++)
	{
		if(y>=100)
		break;
		if(y%2==0)
		{
			if(y%7==0)
			continue;
			if(y%11==0)
			continue;
			
			printf("%d ", y);
		}
		
	}
	printf("\n End \n");
	
}
