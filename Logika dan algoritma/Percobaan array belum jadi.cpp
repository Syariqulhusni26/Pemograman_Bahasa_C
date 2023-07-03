#include <stdio.h>
#inclide <conio.h>

main()

{
	int baaris, kolom, matriks [3][4] ;
	
	//input elemen secara Row Major Order 
	printf("input elemen Array:  \n ");
	for (baris=0;baris<5; baris++)
		{
			for (kolom = 0; kolom<4; kolom ++)
		{
			printf("matriks[%d][%d]", baris+1, kolom+1);
			scanf("%d", &matriks[baris][kolom]);
			
		}
		printf("\n");
		
	}
	//
}