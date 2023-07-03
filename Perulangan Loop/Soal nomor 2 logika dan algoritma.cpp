#include <stdio.h>
main()

{
	int x, y;
	
	for (x =1; x<=10; x+=1)
	{
		for ( y =1; y<=x; y+=1)
		{
			printf("%d ", (x*2)+y);
			
		}
		printf("\n");
	}
}
