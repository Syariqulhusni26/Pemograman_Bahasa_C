#include <stdio.h>
main()

{
	int array[10];
	int masukkan, perulangan;
	
	printf("Masukkan jumlah elemen : ");
	scanf("%d", &masukkan);
	
	for (perulangan = 0; perulangan<masukkan; perulangan++)
	{
		printf("Jumlah elemennya adalah :%d\n", array[perulangan]);
	}

}

