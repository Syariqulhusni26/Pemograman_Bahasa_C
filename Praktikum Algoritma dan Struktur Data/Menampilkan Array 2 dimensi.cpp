#include <stdio.h>
main()
{
	int a[6][5] = {{1,2,3,4,5},{2,4,6,8,10},{1,3,5,7,9},{10,12,14,16,18},{11,13,15,17,19},{20,40,60,80,10}};
	int i, j;
	
	// Perulangan Baris
	for(i=0; i<6;i++)
	{// perulangan kolom
		for(j=0; j<5; j++)
		{
			printf("%d \t", a[i][j]);
		}
		printf("\n");
	}
	
}
