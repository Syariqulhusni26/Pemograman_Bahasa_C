#include <stdio.h>
main()

{
	int Delete[5] = {1,3,5,7,8};
	int i = 0, j;
	
	puts("Elemen array sebelum operasi delete");
	
	for (i=0; i<5; i++)
{
	printf("%d ", Delete[i]);
}
// perulangan untuk menggeser indeks yang dihapus ke kiri
	j=3;
	while(j<5)
	{
		Delete[j-1] = Delete[j];
		j = j+1;
	}
	
	printf("\n");
	
	puts("Elemen array sesudah penghapusan");
	for(i=0; i<4; i++)
	{
		printf("%d ", Delete[i]);
	}
}
